//
//  Skillz+Unity.mm
//  SkillzSDK-iOS
//
//  Copyright (c) 2015 Skillz. All rights reserved.
//

#import <Skillz/Skillz.h>
#include <string>

#include "UnityInterface.h"
#import "UnityAppController.h"
#import "UnityAppController+Rendering.h"

@class SkillzSDKDelegate;

@interface UnitySkillzSDKDelegate : NSObject<SkillzTurnBasedDelegate, SkillzDelegate>

@property SkillzOrientation orientation;
@property (nonatomic) NSString* matchRules;

@end

static void PauseApp()
{
    UnitySetPlayerFocus(0);
    UnityPause(true);
}

static void ResumeApp()
{
    UnityPause(false);
    UnitySetPlayerFocus(1);
    
    [GetAppController().rootView layoutSubviews];
}

@interface Skillz (Unity)

+ (void)sendMessageToUnityObject:(NSString *)objName
                   callingMethod:(NSString *)methodName
                withParamMessage:(NSString *)msg;

@end


@interface SKZAppDelegate : NSProxy  <UIApplicationDelegate>

@property (strong, nonatomic) id target;

- (void)forwardInvocation:(NSInvocation *)invocation;
- (NSMethodSignature *)methodSignatureForSelector:(SEL)sel;
- (void)installDelegate;
- (void)uninstallDelegate;

@end

@implementation SKZAppDelegate

- (void)forwardInvocation:(NSInvocation *)invocation
{
    [invocation invokeWithTarget:self.target];
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)sel
{
    return [self.target methodSignatureForSelector:sel];
}

- (void)installDelegate
{
    if ([UIApplication sharedApplication].delegate != self) {
        self.target = [UIApplication sharedApplication].delegate;
        [UIApplication sharedApplication].delegate = self;
    }
}

- (void)uninstallDelegate
{
    if ([UIApplication sharedApplication].delegate == self) {
        [UIApplication sharedApplication].delegate = self.target;
    }
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    if ([[Skillz skillzInstance] tournamentIsInProgress]) {
        [self.target applicationWillEnterForeground:application];
    }
}

- (void)applicationDidBecomeActive:(UIApplication*)application
{
    if ([[Skillz skillzInstance] tournamentIsInProgress]) {
        [self.target applicationDidBecomeActive:application];
    }
}

- (void)applicationWillResignActive:(UIApplication*)application
{
    if ([[Skillz skillzInstance] tournamentIsInProgress]) {
        [self.target applicationWillResignActive:application];
    }
}

@end

static SKZAppDelegate* sSKZAppDelegate;


@implementation UnitySkillzSDKDelegate

NSString *unitySkillzDelegateName = @"SkillzDelegate";

- (void)tournamentWillBegin:(NSDictionary *)gameParameters
              withMatchInfo:(SKZMatchInfo *)matchInfo
{
    ResumeApp();
    
    // Send message to Unity object to call C# method
    // SkillzDelegate.skillzTournamentWillBegin, implemented by publisher
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wundeclared-selector"
    NSString *json = [matchInfo performSelector:@selector(JSONStringRepresentation:)
                                     withObject:gameParameters];
#pragma GCC diagnostic pop
    
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:gameParameters
                                                       options:0
                                                         error:&error];
    
    if (jsonData) {
        NSString *JSONString = [[NSString alloc] initWithBytes:[jsonData bytes]
                                                        length:[jsonData length]
                                                      encoding:NSUTF8StringEncoding];
        self.matchRules = JSONString;
    }
    
    // There are two sendMessageToUnityObject calls here, one of them will silently fail and should not cause a crash.
    // This sends a message to call the Unity iOS only skillzTournamentWillBegin method
    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                       callingMethod:@"skillzTournamentWillBegin"
                    withParamMessage:json];
    
    // This sends a message to call the Cross Platform OnMatchWillBegin method
    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                       callingMethod:@"OnMatchWillBegin"
                    withParamMessage:json];
}

- (SkillzOrientation)preferredSkillzInterfaceOrientation
{
    return SkillzPortrait;
}

- (void)skillzWillExit
{
    ResumeApp();
    [sSKZAppDelegate uninstallDelegate];
    sSKZAppDelegate = nil;
    
    // Send message to Unity object to call C# method
    // SkillzDelegate.skillzWillExit, implemented by publisher
    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                       callingMethod:@"skillzWillExit"
                    withParamMessage:@""];
}

- (void)skillzWillLaunch
{
    sSKZAppDelegate = [SKZAppDelegate alloc];
    [sSKZAppDelegate installDelegate];
    
    // Send message to Unity object to call C# method
    // SkillzDelegate.skillzWillLaunch, implemented by publisher
    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                       callingMethod:@"skillzWillLaunch"
                    withParamMessage:@""];
}

- (void)skillzHasFinishedLaunching
{
    // Send message to Unity object to call C# method
    // SkillzDelegate.skillzLaunchHasCompleted, implemented by publisher
    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                       callingMethod:@"skillzLaunchHasCompleted"
                    withParamMessage:@""];
}


#pragma mark Turn Based Methods

- (void)turnBasedTournamentWillBegin:(NSDictionary *)gameParameters
                 withTurnInformation:(SKZTurnBasedMatchInfo *)currentGameStateInfo
{
    ResumeApp();
    
    // Send message to Unity object to call C# method
    // SkillzDelegate.skillzTurnBasedTournamentWillBegin, to be implenmented by publisher
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wundeclared-selector"
    NSString *json = [currentGameStateInfo performSelector:@selector(JSONStringRepresentation:)
                                                withObject:gameParameters];
#pragma GCC diagnostic pop
    
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:gameParameters
                                                       options:0
                                                         error:&error];
    
    if (jsonData) {
        NSString *JSONString = [[NSString alloc] initWithBytes:[jsonData bytes]
                                                        length:[jsonData length]
                                                      encoding:NSUTF8StringEncoding];
        self.matchRules = JSONString;
    }
    
    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                       callingMethod:@"skillzTurnBasedTournamentWillBegin"
                    withParamMessage:json];
}

- (void)turnBasedGameReviewWillBegin:(NSDictionary *)gameParameters
            withGameStateInformation:(SKZTurnBasedMatchInfo *)currentGameStateInfo
{
    ResumeApp();
    
    // Send message to Unity object to call C# method
    // SkillzDelegate.skillzReviewCurrentGameState, to be implenmented by publisher
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wundeclared-selector"
    NSString *json = [currentGameStateInfo performSelector:@selector(JSONStringRepresentation:)
                                                withObject:gameParameters];
#pragma GCC diagnostic pop
    
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:gameParameters
                                                       options:0
                                                         error:&error];
    
    if (jsonData) {
        NSString *JSONString = [[NSString alloc] initWithBytes:[jsonData bytes]
                                                        length:[jsonData length]
                                                      encoding:NSUTF8StringEncoding];
        self.matchRules = JSONString;
    }
    
    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                       callingMethod:@"skillzReviewCurrentGameState"
                    withParamMessage:json];
}

@end

@implementation Skillz (Unity)

void UnitySendMessage(const char *obj, const char *method, const char *msg);

+ (void)sendMessageToUnityObject:(NSString *)objName
                   callingMethod:(NSString *)methodName
                withParamMessage:(NSString *)msg {
    UnitySendMessage([objName cStringUsingEncoding:NSUTF8StringEncoding],
                     [methodName cStringUsingEncoding:NSUTF8StringEncoding],
                     [msg cStringUsingEncoding:NSUTF8StringEncoding]);
}

SKZTurnBasedRoundOutcome getRoundOutcomeEnum(NSString * outcomeString);
+ (SKZTurnBasedRoundOutcome) getRoundOutcomeEnum:(NSString *)outcomeString
{
    SKZTurnBasedRoundOutcome roundOutcome;
    if([outcomeString isEqual:@"SkillzRoundLoss"]) {
        roundOutcome = kSKZRoundOutcomeRoundLoss;
    } else if ([outcomeString isEqual:@"SkillzRoundWin"]) {
        roundOutcome = kSKZRoundOutcomeRoundWin;
    } else if([outcomeString isEqual:@"SkillzRoundDraw"]) {
        roundOutcome = kSKZRoundOutcomeRoundDraw;
    } else if([outcomeString isEqual:@"SkillzRoundNoOutcome"]) {
        roundOutcome = kSKZRoundOutcomeRoundNoOutcome;
    } else {
        // If the orientation is not SkillzLandscape or SkillzPortrait, throw an error
        NSString *exceptionReason = [@"Invalid value for roundOutcome: " stringByAppendingString:outcomeString];
        NSException *badRoundOutcomeException = [NSException exceptionWithName:@"InvalidArgumentException"
                                                                        reason:exceptionReason
                                                                      userInfo:nil];
        [badRoundOutcomeException raise];
    }
    
    return roundOutcome;
}

SKZTurnBasedMatchOutcome getMatchOutcomeEnum(NSString * outcomeString);
+ (SKZTurnBasedMatchOutcome) getMatchOutcomeEnum:(NSString *) outcomeString
{
    SKZTurnBasedMatchOutcome matchOutcome;
    
    if ([outcomeString isEqualToString:@"SkillzMatchLoss"]) {
        matchOutcome = kSKZMatchOutcomeMatchLoss;
    } else if ([outcomeString isEqual:@"SkillzMatchWin"]) {
        matchOutcome = kSKZMatchOutcomeMatchWin;
    } else if([outcomeString isEqual:@"SkillzMatchDraw"]) {
        matchOutcome = kSKZMatchOutcomeMatchDraw;
    } else if ([outcomeString isEqual:@"SkillzMatchNoOutcome"]) {
        matchOutcome = kSKZMatchOutcomeMatchNoOutcome;
    } else {
        // If the orientation is not SkillzLandscape or SkillzPortrait, throw an error
        NSString *exceptionReason = [@"Invalid value for matchOutcome: " stringByAppendingString:outcomeString];
        NSException *badMatchOutcomeException = [NSException exceptionWithName:@"InvalidArgumentException"
                                                                        reason:exceptionReason
                                                                      userInfo:nil];
        [badMatchOutcomeException raise];
    }
    
    return matchOutcome;
}

@end

#pragma mark C-Style wrapper

//################################################################################
//#####
//##### C-style wrapper methods that will be accessed
//##### by the Unity C# wrapper for the iOS Skillz SDK
//#####
//################################################################################

// C-style wrapper for
extern "C" void _addMetadataForMatchInProgress(const char *metadataJson, const bool forMatchInProgress) {
    NSString *jsonString = [[NSString alloc] initWithUTF8String:metadataJson];
    NSError *err = nil;
    NSDictionary *metadata = [NSJSONSerialization JSONObjectWithData:[jsonString dataUsingEncoding:NSUTF8StringEncoding]
                                                             options:0
                                                               error:&err];
    [[Skillz skillzInstance] addMetadata:metadata forMatchInProgress:forMatchInProgress];
}

// C-style wrapper for getRandomNumber so that it can be accessed by Unity in C#
extern "C" int _getRandomNumber()
{
    return (int) [Skillz getRandomNumber];
}

// C-style wrapper for getRandNumberWithMin:andMax so that it can be accessed by Unity in C#
extern "C" int _getRandomNumberWithMinAndMax(int min, int max)
{
    return (int) [Skillz getRandomNumberWithMin:min andMax:max];
}

// C-style wrapper for skillzInitForGameId:AndEnvironment: so that it can be accessed by Unity in C#
extern "C" void _skillzInitForGameIdAndEnvironment(const char *gameId, const char *environment)
{
    NSString *gameIdString = [[NSString alloc] initWithUTF8String:gameId];
    NSString *environmentString = [[NSString alloc] initWithUTF8String:environment];
    SkillzEnvironment skillzEnvironment;
    
    // Initialize the game in either sandbox or production based on the input
    if ([environmentString isEqualToString:@"SkillzSandbox"]) {
        skillzEnvironment = SkillzSandbox;
    } else if ([environmentString isEqualToString:@"SkillzProduction"]) {
        skillzEnvironment = SkillzProduction;
    } else {
        // If the input environment is not SkillzSandbox or SkillzProduction, throw an error
        NSString *exceptionReason = [@"Invalid value for environment: " stringByAppendingString:environmentString];
        NSException *badEnvironmentException = [NSException exceptionWithName:@"InvalidArgumentException"
                                                                       reason:exceptionReason
                                                                     userInfo:nil];
        [badEnvironmentException raise];
    }
    
    [[Skillz skillzInstance] initWithGameId:gameIdString
                                forDelegate:[[UnitySkillzSDKDelegate alloc] init]
                            withEnvironment:skillzEnvironment
                                  allowExit:YES];
}

// C-style wrapper for exposing a user's data to Unity in C#
extern "C" const char *_player()
{
    
    SKZPlayer *player = [Skillz player];
    if (player) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wundeclared-selector"
        NSString *json = [[Skillz player] performSelector:@selector(JSONStringRepresentation)];
#pragma GCC diagnostic pop
        
        if (json) {
            return [json UTF8String];
        } else {
            return [@"" UTF8String];
        }
    } else {
        return [@"" UTF8String];
    }
}

// C-style wrapper for checking whether a tournament is in progress so that it can be accessed by Unity in C#
extern "C" int _tournamentIsInProgress()
{
    if ([[Skillz skillzInstance] tournamentIsInProgress]) {
        return 1;
    } else {
        return 0;
    }
}

// C-style wrapper for SDKShortVersion so that it can be accessed by Unity in C#
extern "C" const char *_SDKShortVersion()
{
    return [[Skillz SDKShortVersion] UTF8String];
}

// C-style wrapper for showSDKVersionInfo so that it can be accessed by Unity in C#
extern "C" void _showSDKVersionInfo()
{
    [Skillz showSDKVersionInfo];
}

//Launches basic Skillz implementation for single match play.
extern "C" void _launchSkillz()
{
    PauseApp();
    [[Skillz skillzInstance] launchSkillz];
}

// C-style wrapper for displayTournamentResultsWithScore so that it can be accessed by Unity in C#
extern "C" void _displayTournamentResultsWithScore(int score)
{
    PauseApp();
    
    [[Skillz skillzInstance] displayTournamentResultsWithScore:@(score)
                                                withCompletion:^{
                                                    // Send message to Unity object to call C# method
                                                    // SkillzDelegate.skillzWithTournamentCompletion, implemented by publisher
                                                    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                                                                       callingMethod:@"skillzWithTournamentCompletion"
                                                                    withParamMessage:@""];
                                                }];
}

// C-style wrapper for displayTournamentResultsWithFloatScore so that it can be accessed by Unity in C#
extern "C" void _displayTournamentResultsWithFloatScore(float score)
{
    PauseApp();
    
    [[Skillz skillzInstance] displayTournamentResultsWithScore:@(score)
                                                withCompletion:^{
                                                    // Send message to Unity object to call C# method
                                                    // SkillzDelegate.skillzWithTournamentCompletion, implemented by publisher
                                                    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                                                                       callingMethod:@"skillzWithTournamentCompletion"
                                                                    withParamMessage:@""];
                                                }];
}

extern "C" void _displayTournamentResultsWithStringScore(const char *score)
{
    PauseApp();
    
    NSNumberFormatter *f = [[NSNumberFormatter alloc] init];
    f.numberStyle = NSNumberFormatterDecimalStyle;
    NSNumber *playerScore = [f numberFromString:@(score)];
    [[Skillz skillzInstance] displayTournamentResultsWithScore:playerScore
                                                withCompletion:^{
                                                    // Send message to Unity object to call C# method
                                                    // SkillzDelegate.skillzWithTournamentCompletion, implemented by publisher
                                                    [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                                                                       callingMethod:@"skillzWithTournamentCompletion"
                                                                    withParamMessage:@""];
                                                }];
}

// C-style wrapper for updatePlayersCurrentScore: so that is can be accessed by Unity in C#
extern "C" void _updatePlayersCurrentScore(float score)
{
    [[Skillz skillzInstance] updatePlayersCurrentScore:@(score)];
}

extern "C" void _updatePlayersCurrentStringScore(const char *score)
{
    NSNumberFormatter *f = [[NSNumberFormatter alloc] init];
    f.numberStyle = NSNumberFormatterDecimalStyle;
    NSNumber *playerScore = [f numberFromString:@(score)];
    [[Skillz skillzInstance] updatePlayersCurrentScore:playerScore];
}

extern "C" void _updatePlayersCurrentIntScore(int score)
{
    [[Skillz skillzInstance] updatePlayersCurrentScore:@(score)];
}

// C-style wrapper for notifyPlayerAbortWithCompletion so that it can be accessed by Unity in C#
extern "C" void _notifyPlayerAbortWithCompletion()
{
    PauseApp();
    
    [[Skillz skillzInstance] notifyPlayerAbortWithCompletion:^() {
        // Send message to Unity object to call C# method
        // SkillzDelegate.skillzWithPlayerAbort, implemented by publisher
        [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                           callingMethod:@"skillzWithPlayerAbort"
                        withParamMessage:@""];
    }];
}

// C-style wrapper for completeTurnWithGameData so that it can be accessed by Unity in C#
extern "C" void _completeTurnWithGameData(const char *gameData, const char *score, float playerCurrentTotalScore, float opponentCurrentTotalScore, const char * roundOutcome, const char * matchOutcome)
{
    PauseApp();
    
    NSString * roundOutcomeString = [[NSString alloc] initWithUTF8String:roundOutcome];
    NSString * matchOutcomeString = [[NSString alloc] initWithUTF8String:matchOutcome];
    
    SKZTurnBasedRoundOutcome turnBasedRoundOutcome;
    SKZTurnBasedMatchOutcome turnBasedMatchOutcome;
    
    turnBasedRoundOutcome = [Skillz getRoundOutcomeEnum:roundOutcomeString];
    turnBasedMatchOutcome = [Skillz getMatchOutcomeEnum:matchOutcomeString];
    
    NSNumber *playerCurrentTotal;
    if (isnan(playerCurrentTotalScore))
    {
        playerCurrentTotal = nil;
    }
    else
    {
        playerCurrentTotal = [NSNumber numberWithFloat:playerCurrentTotalScore];
    }
    NSNumber *opponentCurrentTotal;
    if (isnan(opponentCurrentTotalScore))
    {
        opponentCurrentTotal = nil;
    }
    else
    {
        opponentCurrentTotal = [NSNumber numberWithFloat:opponentCurrentTotalScore];
    }
    
    if (score == NULL)
    {
        score = "";
    }
    
    [[Skillz skillzInstance] completeTurnWithGameData:[[NSString alloc] initWithUTF8String:gameData]
                                          playerScore:[[NSString alloc] initWithUTF8String:score]
                              playerCurrentTotalScore:playerCurrentTotal
                            opponentCurrentTotalScore:opponentCurrentTotal
                                         roundOutcome:turnBasedRoundOutcome
                                         matchOutcome:turnBasedMatchOutcome
                                       withCompletion:^() {
                                           
                                           // Send message to Unity object to call C# method
                                           // SkillzDelegate.skillzEndTurnCompletion, implemented by publisher
                                           [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                                                              callingMethod:@"skillzEndTurnCompletion"
                                                           withParamMessage:@""];
                                       }];
}

// C-style wrapper for finishReviewingCurrentGameState so that it can be access by Unity in C#
extern "C" void _finishReviewingCurrentGameState()
{
    PauseApp();
    
    [[Skillz skillzInstance] finishReviewingCurrentGameState:^(){
        // Send message to Unity object to call C# method
        // SkillzDelegate.skillzFinishReviewingCurrentGameState, implemented by publisher
        [Skillz sendMessageToUnityObject:unitySkillzDelegateName
                           callingMethod:@"skillzFinishReviewingCurrentGameState"
                        withParamMessage:@""];
    }];
}

// C-style wrapper for getRandomFloat so that it can be accessed by Unity in C#
extern "C" float _getRandomFloat() {
    return (float) [Skillz getRandomFloat];
}

// C-style wrapper for getMatchRules so that it can be accessed by Unity in C#
extern "C" const char *_getMatchRules() {
    return [((UnitySkillzSDKDelegate*)[Skillz skillzInstance].skillzDelegate).matchRules UTF8String];
    
}

//################################################################################
//#####
//##### End of C wrappers
//#####
//################################################################################
