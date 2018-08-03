using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Linq;
#if !DOXYGEN_SHOULD_SKIP_THIS
namespace SkillzSDK
{
    /// <summary>
    /// Sandbox allows for testing of both cash and Z games.
    /// Production should only be used for the actual final release into the app store.
    /// </summary>
    public enum Environment
    {
        Sandbox,
        Production
    };

    /// <summary>
    /// The various possible outcomes for a round in a turn-based match.
    /// A "round" is a set of two turns (one for each player).
    /// </summary>
    public enum TurnBasedRoundOutcome
    {
        Loss,
        Win,
        Draw,
        NoOutcome
    };
    /// <summary>
    /// The various possible outcomes for a turn-based match.
    /// </summary>
    public enum TurnBasedMatchOutcome
    {
        Loss,
        Win,
        Draw,
        NoOutcome
    };


    /// <summary>
    /// Wrapper for the Skillz native Objective-C API.
    /// </summary>
    public static class Api
    {
        private static SkillzSDK.Match _matchInfo;

#if UNITY_IOS
        #region Native iOS API

        [DllImport ("__Internal")]
        private static extern void _addMetadataForMatchInProgress(string metadataJson, bool forMatchInProgress);

        [DllImport ("__Internal")]
        private static extern int _getRandomNumber();

        [DllImport ("__Internal")]
        private static extern int _getRandomNumberWithMinAndMax(int min, int max);

        [DllImport ("__Internal")]
        private static extern void _skillzInitForGameIdAndEnvironment(string gameId, string environment);

        [DllImport ("__Internal")]
        private static extern int _tournamentIsInProgress();

        // Need to use an IntPtr instead of a string here, for more information see
        // http://www.mono-project.com/docs/advanced/pinvoke/#strings-as-return-values
        [DllImport ("__Internal")]
        private static extern IntPtr _player();

        [DllImport ("__Internal")]
        private static extern IntPtr _SDKShortVersion();

        [DllImport ("__Internal")]
        private static extern void _showSDKVersionInfo();

        [DllImport ("__Internal")]
        private static extern IntPtr _getMatchRules();

        [DllImport ("__Internal")]
        private static extern IntPtr _getMatchInfo();

        [DllImport ("__Internal")]
        private static extern void _launchSkillz();

        [DllImport ("__Internal")]
        private static extern void _displayTournamentResultsWithScore(int score);

        [DllImport ("__Internal")]
        private static extern void _displayTournamentResultsWithFloatScore(float score);

        [DllImport ("__Internal")]
        private static extern void _displayTournamentResultsWithStringScore(string score);

        [DllImport ("__Internal")]
        public static extern int _setAsyncTurnReviewDisabled();

        [DllImport ("__Internal")]
        private static extern void _completeTurnWithGameData(string gameData, string score, float playerCurrentTotalScore, float opponentCurrentTotalScore, string roundOutcome, string matchOutcome);

        [DllImport ("__Internal")]
        private static extern void _finishReviewingCurrentGameState();

        [DllImport ("__Internal")]
        private static extern void _notifyPlayerAbortWithCompletion();

        [DllImport ("__Internal")]
        private static extern void _updatePlayersCurrentScore(float score);

        [DllImport ("__Internal")]
        private static extern void _updatePlayersCurrentStringScore(string score);

        [DllImport ("__Internal")]
        private static extern void _updatePlayersCurrentIntScore(int score);

        [DllImport ("__Internal")]
        public static extern float _getRandomFloat();

        #endregion //Native iOS API

        #region iOS Sync API

        private static SkillzSyncDelegate _syncMessageHandler;

        [DllImport ("__Internal")]
        private static extern void _sendData(IntPtr value, UInt64 length); //This "UInt64" may need to be an "int"

        [DllImport ("__Internal")]
        private static extern bool _isMatchCompleted();

        [DllImport ("__Internal")]
        private static extern int _connectedPlayerCount();

        [DllImport ("__Internal")]
        private static extern UInt64 _currentPlayerId();

	[DllImport ("__Internal")]
	private static extern UInt64 _currentOpponentPlayerId();

        [DllImport ("__Internal")]
        private static extern UInt64 _getServerTime();

        [DllImport ("__Internal")]
        private static extern int _reconnectTimeLeftForPlayer(UInt64 playerId); //This "UInt64" may need to be an "int"

        #endregion //iOS Sync API

#else
        private static void _addMetadataForMatchInProgress(string metadataJson, bool forMatchInProgress) { }
        private static int _getRandomNumber() { return 0; }
        private static int _getRandomNumberWithMinAndMax(int min, int max) { return 0; }
        private static void _skillzInitForGameIdAndEnvironment(string gameId, string environment) { }
        private static int _tournamentIsInProgress() { return 0; }
        private static IntPtr _player() { return IntPtr.Zero; }
        private static IntPtr _SDKShortVersion() { return IntPtr.Zero; }
        private static void _showSDKVersionInfo() { }
        private static IntPtr _getMatchRules() { return IntPtr.Zero; }
        private static IntPtr _getMatchInfo() { return IntPtr.Zero; }
        private static void _launchSkillz() { }
        private static void _displayTournamentResultsWithScore(int score) { }
        private static void _displayTournamentResultsWithFloatScore(float score) { }
        private static void _displayTournamentResultsWithStringScore(string score) { }
        public static int _setAsyncTurnReviewDisabled() { return 0; }
        private static void _completeTurnWithGameData(string gameData, string score, float playerCurrentTotalScore, float opponentCurrentTotalScore, string roundOutcome, string matchOutcome) { }
        private static void _finishReviewingCurrentGameState() { }
        private static void _notifyPlayerAbortWithCompletion() { }
        private static void _updatePlayersCurrentScore(float score) { }
        private static void _updatePlayersCurrentStringScore(string score) { }
        private static void _updatePlayersCurrentIntScore(int score) { }
        public static float _getRandomFloat() { return 0; }

        private static SkillzSyncDelegate _syncMessageHandler;
        private static void _sendData(IntPtr value, UInt64 length) { }
        private static bool _isMatchCompleted() { return true; }
        private static int _connectedPlayerCount() { return 0; }
        private static UInt64 _currentPlayerId() { return 0; }
        private static UInt64 _currentOpponentPlayerId() { return 0; }
        private static UInt64 _getServerTime() { return 0; }
        private static int _reconnectTimeLeftForPlayer(UInt64 playerId) { return 0; }
#endif
        #region Sync Delegate Function Passing

        //public static void onMatchCompleted()
#if !UNITY_IOS
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
#endif
        delegate void VoidFP();

        //public static void playerIsAttemptingReconnection(int playerId)
        //public static void playerDidSuccessfullyReconnect(int playerId)
        //public static void playerHasLeftMatch(int playerId)
#if !UNITY_IOS
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
#endif
        delegate void IntFP(UInt64 playerId); //This "UInt64" may need to be an "int"

#if !UNITY_IOS
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
#endif
        delegate void IntPtrIntFP(IntPtr value, UInt64 length); //This "UInt64" may need to be an "int"
#if UNITY_IOS
        [DllImport ("__Internal")]
        private static extern void _assignOnCurrentPlayerHasReconnectedFunc(IntPtr funcPtr);

        [DllImport ("__Internal")]
        private static extern void _assignOnCurrentPlayerHasLostConnectionFunc(IntPtr funcPtr);

        [DllImport ("__Internal")]
        private static extern void _assignOnCurrentPlayerHasLeftMatchFunc(IntPtr funcPtr);

        [DllImport ("__Internal")]
        private static extern void _assignOnOpponentHasReconnectedFunc(IntPtr funcPtr);

        [DllImport ("__Internal")]
        private static extern void _assignOnOpponentHasLostConnectionFunc(IntPtr funcPtr);

        [DllImport ("__Internal")]
        private static extern void _assignOnOpponentHasLeftMatchFunc(IntPtr funcPtr);

        [DllImport ("__Internal")]
        private static extern void _assignOnDidReceiveDataFunc(IntPtr funcPtr);

        [DllImport ("__Internal")]
        private static extern void _assignOnMatchCompletedFunc(IntPtr funcPtr);
#else
        private static void _assignOnCurrentPlayerHasReconnectedFunc(IntPtr funcPtr) { }
        private static void _assignOnCurrentPlayerHasLostConnectionFunc(IntPtr funcPtr) { }
        private static void _assignOnCurrentPlayerHasLeftMatchFunc(IntPtr funcPtr) { }
        private static void _assignOnOpponentHasReconnectedFunc(IntPtr funcPtr) { }
        private static void _assignOnOpponentHasLostConnectionFunc(IntPtr funcPtr) { }
        private static void _assignOnOpponentHasLeftMatchFunc(IntPtr funcPtr) { }
        private static void _assignOnDidReceiveDataFunc(IntPtr funcPtr) { }
        private static void _assignOnMatchCompletedFunc(IntPtr funcPtr) { }
#endif
        #endregion //Function Passing


        /// <summary>
        /// The inclusive range of possible values for the SkillzDifficulty field.
        /// </summary>
        public const uint SkillzDifficultyMin = 1,
                          SkillzDifficultyMax = 10;


#region Properties

        /// <summary>
        /// Gets whether we are currently in a Skillz tournament.
        /// Use this method to have different logic in single player than in multiplayer.
        /// </summary>
        public static bool IsTournamentInProgress {
            get {
                return (Application.platform == RuntimePlatform.IPhonePlayer) && (_tournamentIsInProgress() != 0);
            }
        }
#if UNITY_IOS
        /// <summary>
        /// Gets the Skillz username of the player.
        /// </summary>
        [Obsolete("Use 'Api.Player.DisplayName' instead")]
        public static string CurrentUserDisplayName {
            get {
                return GetPlayer().DisplayName;
            }
        }

        /// <summary>
        /// Gets information for the current player.
        /// </summary>
        public static Player GetPlayer() {
            string playerJson = Marshal.PtrToStringAnsi(_player());
            Dictionary<string, object> playerDict = DeserializeJSONToDictionary(playerJson);
            return new Player(playerDict);
        }
#endif
        /// <summary>
        /// Gets the short version of the SDK being used.
        /// </summary>
        public static string SDKVersionShort {
            get {
                return Marshal.PtrToStringAnsi(_SDKShortVersion());
            }
        }

#endregion //Properties


        /// <summary>
        /// Initializes Skillz. Note that this will be called automatically, assuming you follow
        /// the instructions on the Developer Portal and use a script that inherits from SkillzDelegateBase.
        /// </summary>
        ///
        /// <param name="gameId">The game ID number assigned to your game on the Skillz developer portal.</param>
        /// <param name="environment">Environment.Sandbox for development/testing, or Environment.Production for submitting the final app.</param>
        public static void Initialize(string gameId, Environment environment) {
            if (Application.platform == RuntimePlatform.IPhonePlayer) {
                string environmentString;
                if (environment == Environment.Sandbox) {
                    environmentString = "SkillzSandbox";
                } else {
                    environmentString = "SkillzProduction";
                }
                _skillzInitForGameIdAndEnvironment(gameId, environmentString);
            } else {
                Debug.LogWarning("Trying to initialize Skillz on a platform other than iPhone");
            }
        }

        /// <summary>
        /// Starts up the Skillz UI. Should be used as soon as the player clicks your game's "Multiplayer" button.
        /// </summary>
        public static void LaunchSkillz() {
            if (Application.platform == RuntimePlatform.IPhonePlayer) {
                _launchSkillz();
            } else {
                Debug.LogError("Tried to launch Skillz on a platform other than iPhone!");
            }
        }


        /// <summary>
        /// Call this method every time the player's score changes during a Skillz match.
        /// This adds important anti-cheating functionality to your game.
        /// </summary>
        ///
        /// <param name="currentScoreForPlayer">The player's current float score.</param>
        public static void UpdatePlayerScore(float currentScoreForPlayer) {
            _updatePlayersCurrentScore(currentScoreForPlayer);
        }

        /// <summary>
        /// Call this method every time the player's score changes during a Skillz match.
        /// This adds important anti-cheating functionality to your game.
        /// </summary>
        ///
        /// <param name="currentScoreForPlayer">The player's current string score.</param>
        public static void UpdatePlayerScore(string currentScoreForPlayer) {
            _updatePlayersCurrentStringScore(currentScoreForPlayer);
        }

        /// <summary>
        /// Call this method every time the player's score changes during a Skillz match.
        /// This adds important anti-cheating functionality to your game.
        /// </summary>
        ///
        /// <param name="currentScoreForPlayer">The player's current int score.</param>
        public static void UpdatePlayerScore(int currentScoreForPlayer) {
            _updatePlayersCurrentIntScore(currentScoreForPlayer);
        }

        /// <summary>
        /// Call this method to make the player forfeit the game, returning him to the Skillz portal.
        /// </summary>
        public static void AbortGame() {
            _notifyPlayerAbortWithCompletion();
            _matchInfo = null;
        }


#region Normal tournaments

        /// <summary>
        /// Call this method when a player finishes a multiplayer game. This will report the result of the game
        /// to the Skillz server, and return the player to the Skillz portal.
        /// </summary>
        ///
        /// <param name="score">An int representing the score a player achieved in the game.</param>
        public static void FinishTournament(int score) {
            _displayTournamentResultsWithScore(score);
            _matchInfo = null;
        }

        /// <summary>
        /// Call this method when a player finishes a multiplayer game. This will report the result of the game
        /// to the Skillz server, and return the player to the Skillz portal.
        /// </summary>
        ///
        /// <param name="score">A float representing the score a player achieved in the game.</param>
        public static void FinishTournament(float score) {
            _displayTournamentResultsWithFloatScore(score);
            _matchInfo = null;
        }

        /// <summary>
        /// Call this method when a player finishes a multiplayer game. This will report the result of the game
        /// to the Skillz server, and return the player to the Skillz portal.
        /// </summary>
        ///
        /// <param name="score">A string representing the score a player achieved in the game.</param>
        public static void FinishTournament(string score) {
            _displayTournamentResultsWithStringScore(score);
            _matchInfo = null;
        }

#endregion //Normal tournaments


#region Turn-based tournaments

        /// <summary>
        /// Completes a turn for a turn-based game that doesn't have scores.
        /// </summary>
        ///
        /// <param name="gameData">
        /// A Base64-encoded String object containing serialized data which can be used
        ///   to reconstruct the game state for the next turn, or to review the current game state. This exact string
        ///   will be part of the game data passed into the <code>OnTurnBasedTournamentWillBegin()</code> callback in SkillzDelegateTurnBased.
        /// </param>
        /// <param name="roundOutcome">
        /// The outcome of this round. Each round is a set of two turns -- one for each player.
        /// Used in the UI to tell players which rounds they won. Particularly useful to Skillz for objective-based games (e.x. Chess).
        /// </param>
        /// <param name="matchOutcome">The outcome of the whole match. If it's something other than SkillzRoundNoOutcome, the match will end after this turn.</param>
        public static void FinishTurn(string gameData, TurnBasedRoundOutcome roundOutcome, TurnBasedMatchOutcome matchOutcome) {
            FinishTurn(gameData, roundOutcome, matchOutcome, null, float.NaN, float.NaN);
        }

        /// <summary>
        /// Completes a turn for a turn-based game that has scores.
        /// </summary>
        ///
        /// <param name="gameData">
        /// A Base64-encoded String object containing serialized data which can be used
        ///   to reconstruct the game state for the next turn, or to review the current game state. This exact string
        ///   will be part of the game data passed into the <code>OnTurnBasedTournamentWillBegin()</code> callback in SkillzDelegateTurnBased.
        /// </param>
        /// <param name="roundOutcome">
        /// The outcome of this round. Each round is a set of two turns -- one for each player.
        /// Used in the UI to tell players which rounds they won. Particularly useful to Skillz for objective-based games (e.x. Chess).
        /// </param>
        /// <param name="matchOutcome">The outcome of the whole match. If it's something other than SkillzRoundNoOutcome, the match will end after this turn.</param>
        /// <param name="playerTurnScore">
        /// A nice string representation of the player's score for this turn.
        /// </param>
        /// <param name="playerTotalScore">The total score for the current player.</param>
        /// <param name="opponentTotalScore">The total score for the current player's opponent.</param>
        public static void FinishTurn(string gameData,
                                      TurnBasedRoundOutcome roundOutcome, TurnBasedMatchOutcome matchOutcome,
                                      string playerTurnScore, float playerTotalScore, float opponentTotalScore) {
            _completeTurnWithGameData(gameData, playerTurnScore,
                                      playerTotalScore, opponentTotalScore,
                                      "SkillzRound" + roundOutcome.ToString(),
                                      "SkillzMatch" + matchOutcome.ToString());
        }

        /// <summary>
        /// When your user has finished reviewing the current state of his turn-based match, use this method to return to the Skillz UI.
        /// </summary>
        public static void FinishReviewingTurn() {
            _finishReviewingCurrentGameState();
        }

        /// <summary>
        ///  Call this function if you'd like to disable turn reviews for Async Turn Based Matches
        /// </summary>
        public static void SetAsyncTurnReviewDisabled() {
            _setAsyncTurnReviewDisabled ();
        }

#endregion //Turn-based tournaments

        /// <summary>
        /// You may use this method to track player actions, level types, or other information pertinent to your Skillz integration.
        /// All keys and values in the metadataJson strign argument should be strings, pass true for forMatchInProgress if this metadata relates to an in progress match.
        /// Collected data will only be available to Skillz and will help Skillz identify fairness in level based games.

        /// </summary>
        public static void AddMetadataForMatchInProgress(string metadataJson, bool forMatchInProgress) {
            _addMetadataForMatchInProgress(metadataJson, forMatchInProgress);
        }

        /// <summary>
        /// Gets a random integer. Both players in the tournament start with the exact same seed value,
        /// guaranteeing that this method will return the same sequence of numbers for both players.
        /// </summary>
        public static int GetRandomNumber() {
            return _getRandomNumber();
        }

        /// <summary>
        /// Gets a random integer between the given min (inclusive) and max (exclusive).
        /// Both players start with the exact same seed value, guaranteeing that this method
        /// will return the same sequence of numbers for both players, assuming their 'min' and 'max' parameters always match up.
        /// </summary>
        ///
        /// <param name="min">The minimum possible value, inclusive.</param>
        /// <param name="max">The maximum possible value, exclusive.</param>
        public static int GetRandomNumber(int min, int max) {
            return _getRandomNumberWithMinAndMax(min, max);
        }


        /// <summary>
        /// Prints the Skillz SDK version to the logs.
        /// </summary>
        public static void PrintSDKVersionInfo() {
            _showSDKVersionInfo();
        }

        /// <summary>
        /// Returns a hash table of the Match Rules.
        /// </summary>
        public static Hashtable GetMatchRules() {
            string matchRules = Marshal.PtrToStringAnsi(_getMatchRules());
            Dictionary<string, object> matchInfoDict = DeserializeJSONToDictionary(matchRules);
            var matchInfoHash = new Hashtable(matchInfoDict);
            return matchInfoHash;
        }

        /// <summary>
        /// Returns a Skillz Match Object
        /// </summary>
        public static Match GetMatchInfo() {
            if (_matchInfo == null) {
                string matchInfo = Marshal.PtrToStringAnsi(_getMatchInfo());
                Dictionary<string, object> matchInfoDict = DeserializeJSONToDictionary(matchInfo);
                _matchInfo = new Match(matchInfoDict);
            }

            return _matchInfo;
        }

#region Sync Tournaments

        /// <summary>
        /// You should call this method with an instance of a class implementing SkillzSyncDelegate that will handle receiving messages and variables.
        /// </summary>
        /// <param name="messageHandler">Message handler.</param>
        public static void InitializeSyncDelegate(SkillzSyncDelegate messageHandler) {
            Debug.LogWarning("Initialize Sync Delegate");
            _syncMessageHandler = messageHandler;
            AssignSyncDelegateFunctions();
        }

        /// <summary>
        /// Call this method in order to send real time data to all clients connected to this match.
        /// </summary>
        /// <param name="data">Data to send</param>
        public static void SendData(byte[] data) {
            using (UnmanagedArray ua = new UnmanagedArray(data)) {
                _sendData(ua.IntPtr, ua.Length);
            }
        }

        /// <summary>
        /// This will return whether or not the match has been completed
        /// </summary>
        /// <returns><c>true</c> if the match has completed; otherwise, <c>false</c>.</returns>
        public static bool IsMatchCompleted() {
            return _isMatchCompleted();
        }

        /// <summary>
        /// Use this method to query the number of players currently connected to a match.
        /// If a player has joined, but is currently disconnected, they will not be counted here
        /// </summary>
        /// <returns>The player count.</returns>
        public static int ConnectedPlayerCount() {
              return _connectedPlayerCount();
        }

        /// <summary>
        /// This will return the current user's player ID for an in progress match.
        /// </summary>
        /// <returns>The player identifier.</returns>
        ///TODO: Confirm UInt64 is correct type
        public static UInt64 CurrentPlayerId() {
              return _currentPlayerId();
        }

	/// <summary>
	/// This will return the current opponent's player ID for an in progress match.
	/// </summary>
	/// <returns>The player identifier.</returns>
	///TODO: Confirm UInt64 is correct type
	public static UInt64 CurrentOpponentPlayerId() {
		return _currentOpponentPlayerId();
	}

        /// <summary>
        /// Will return the current server time so that you may synchronize via that rather than local device time.
        /// Note: Do not use this to display a time and date. Instead use for synchronizing between devices.
        /// </summary>
        /// <returns>Current server time in ms</returns>
        public static UInt64 GetServerTime() {
            return _getServerTime();
        }

        /// <summary>
        /// A player only has this much time remaining to reconnect once disconnected. This is the actual time they have left when this method is called.
        /// Note: If the value returned is negative, the player should be considered aborted from the match.
        /// </summary>
        /// <returns>The time the player has left to disconnect.</returns>
        /// <param name="playerId">The player id of the disconnected player.</param>
        public static int ReconnectTimeLeftForPlayer(UInt64 playerId) {
            return _reconnectTimeLeftForPlayer(playerId);
        }

#endregion //Sync Tournaments

#region Passing Sync Functions

        public class MonoPInvokeCallbackAttribute : System.Attribute {
#pragma warning disable 414
            private Type type;
            public MonoPInvokeCallbackAttribute(Type t) {
                type = t;
            }
#pragma warning restore 414
        }

        [MonoPInvokeCallbackAttribute(typeof(IntFP))]
        public static void onOpponentHasLostConnection(UInt64 playerId) {
            _syncMessageHandler.OnOpponentHasLostConnection(playerId);
        }

        [MonoPInvokeCallbackAttribute(typeof(IntFP))]
        public static void onOpponentHasReconnected(UInt64 playerId) {
            _syncMessageHandler.OnOpponentHasReconnected(playerId);
        }

        [MonoPInvokeCallbackAttribute(typeof(IntFP))]
        public static void onOpponentHasLeftMatch(UInt64 playerId) {
            _syncMessageHandler.OnOpponentHasLeftMatch(playerId);
        }

        [MonoPInvokeCallbackAttribute(typeof(VoidFP))]
        public static void onCurrentPlayerHasLostConnection() {
            _syncMessageHandler.OnCurrentPlayerHasLostConnection();
        }

        [MonoPInvokeCallbackAttribute(typeof(VoidFP))]
        public static void onCurrentPlayerHasReconnected() {
            _syncMessageHandler.OnCurrentPlayerHasReconnected();
        }

        [MonoPInvokeCallbackAttribute(typeof(VoidFP))]
        public static void onCurrentPlayerHasLeftMatch() {
            _syncMessageHandler.OnCurrentPlayerHasLeftMatch();
          }

        [MonoPInvokeCallbackAttribute(typeof(IntPtrIntFP))]
        public static void onDidReceiveData(IntPtr value, UInt64 length) {
            byte[] managedArray = new byte[length];
            Marshal.Copy(value, managedArray, 0, (int)length);

            _syncMessageHandler.OnDidReceiveData(managedArray);
        }

        [MonoPInvokeCallbackAttribute(typeof(VoidFP))]
        public static void onMatchCompleted() {
            _syncMessageHandler.OnMatchCompleted();
        }

        // The following function casts each Sync Protocol function into a C# delegate based function pointer.
        // It then passes it into ObjC++ Skillz+Unity.mm for storage and later execution.
        public static void AssignSyncDelegateFunctions() {
            Debug.LogWarning("Assign Sync Delegate Functions");
            VoidFP onMatchCompletedFP = new VoidFP(onMatchCompleted);
            IntPtr onMatchCompletedIP = Marshal.GetFunctionPointerForDelegate(onMatchCompletedFP);
            _assignOnMatchCompletedFunc(onMatchCompletedIP);

            IntPtrIntFP onDidReceiveDataFP = new IntPtrIntFP(onDidReceiveData);
            IntPtr onDidReceiveDataIP = Marshal.GetFunctionPointerForDelegate(onDidReceiveDataFP);
            _assignOnDidReceiveDataFunc(onDidReceiveDataIP);

            IntFP onOpponentHasLostConnectionFP = new IntFP(onOpponentHasLostConnection);
            IntPtr onOpponentHasLostConnectionIP = Marshal.GetFunctionPointerForDelegate(onOpponentHasLostConnectionFP);
            _assignOnOpponentHasLostConnectionFunc(onOpponentHasLostConnectionIP);

            IntFP OnOpponentHasReconnectedFP = new IntFP(onOpponentHasReconnected);
            IntPtr onOpponentHasReconnectedIP = Marshal.GetFunctionPointerForDelegate(OnOpponentHasReconnectedFP);
            _assignOnOpponentHasReconnectedFunc(onOpponentHasReconnectedIP);

            IntFP onOpponentHasLeftMatchFP = new IntFP(onOpponentHasLeftMatch);
            IntPtr onOpponentHasLeftMatchIP = Marshal.GetFunctionPointerForDelegate(onOpponentHasLeftMatchFP);
            _assignOnOpponentHasLeftMatchFunc(onOpponentHasLeftMatchIP);

            VoidFP onCurrentPlayerHasLostConnectionFP = new VoidFP(onCurrentPlayerHasLostConnection);
            IntPtr onCurrentPlayerHasLostConnectionIP = Marshal.GetFunctionPointerForDelegate(onCurrentPlayerHasLostConnectionFP);
            _assignOnCurrentPlayerHasLostConnectionFunc(onCurrentPlayerHasLostConnectionIP);

            VoidFP onCurrentPlayerHasReconnectedFP = new VoidFP(onCurrentPlayerHasReconnected);
            IntPtr onCurrentPlayerHasReconnectedIP = Marshal.GetFunctionPointerForDelegate(onCurrentPlayerHasReconnectedFP);
            _assignOnCurrentPlayerHasReconnectedFunc(onCurrentPlayerHasReconnectedIP);

            VoidFP onCurrentPlayerHasLeftMatchFP = new VoidFP(onCurrentPlayerHasLeftMatch);
            IntPtr onCurrentPlayerHasLeftMatchIP = Marshal.GetFunctionPointerForDelegate(onCurrentPlayerHasLeftMatchFP);
            _assignOnCurrentPlayerHasLeftMatchFunc(onCurrentPlayerHasLeftMatchIP);
        }

#endregion //Passing Sync Functions

#region Random

        public static class Random {

            /**
             * Value from Skillz random (if a Skillz game), or Unity random (if not a Skillz game)
             **/
            public static float Value() {

                float randomValue = 0;
                if (IsTournamentInProgress) {
                    randomValue = _getRandomFloat();
                } else {
                    randomValue = UnityEngine.Random.value;
                }

                return randomValue;
            }

            /**
             * Find a point inside the unit sphere using Value()
             **/
            public static Vector3 InsideUnitSphere() {
                float r = Value();
                float phi = Value() * Mathf.PI;
                float theta = Value() * Mathf.PI * 2;

                float x = r * Mathf.Cos(theta) * Mathf.Sin(phi);
                float y = r * Mathf.Sin(theta) * Mathf.Sin(phi);
                float z = r * Mathf.Cos(phi);

                return new Vector3(x, y ,z);
            }

            /**
             * Find a point inside the unit circle using Value()
             **/
            public static Vector2 InsideUnitCircle() {
                float radius = 1.0f;
                float rand = Value() * 2 * Mathf.PI;
                Vector2 val = new Vector2();

                val.x = radius * Mathf.Cos(rand);
                val.y = radius * Mathf.Sin(rand);

                return val;
            }

            /**
             * Hybrid rejection / trig method to generate points on a sphere using Value()
             **/
            public static Vector3 OnUnitSphere() {
                Vector3 val = new Vector3();
                float s;

                do {
                    val.x = 2 * (float) Value() - 1;
                    val.y = 2 * (float) Value() - 1;
                    s = Mathf.Pow(val.x, 2) + Mathf.Pow(val.y, 2);
                } while (s > 1);

                float r = 2 * Mathf.Sqrt(1 - s);

                val.x *= r;
                val.y *= r;
                val.z = 2 * s - 1;

                return val;
            }

            /**
             * Quaternion random using Value()
             **/
            public static Quaternion RotationUniform() {
                float u1 = Value();
                float u2 = Value();
                float u3 = Value();

                float u1sqrt = Mathf.Sqrt(u1);
                float u1m1sqrt = Mathf.Sqrt(1 - u1);
                float x = u1m1sqrt * Mathf.Sin(2 * Mathf.PI * u2);
                float y = u1m1sqrt * Mathf.Cos(2 * Mathf.PI * u2);
                float z = u1sqrt * Mathf.Sin(2 * Mathf.PI * u3);
                float w = u1sqrt * Mathf.Cos(2 * Mathf.PI * u3);

                return new Quaternion(x, y, z, w);
            }

            /**
             * Quaternion random using Value()
             **/
            public static Quaternion Rotation() {
                return RotationUniform();
            }

            /**
             * Ranged random float using Value()
             **/
            public static float Range(float min, float max) {
                float rand = Value();
                return min + (rand * (max-min));
            }

            /**
             * Ranged random int using Value()
             **/
            public static int Range(int min, int max) {
                float rand = Value();
                return min + (int) (rand * (max-min));
            }
        }

#endregion // Random

        private static Dictionary<string, object> DeserializeJSONToDictionary(string jsonString) {
            return SkillzSDK.MiniJSON.Json.Deserialize(jsonString) as Dictionary<string,object>;
        }
    }
}
#endif
