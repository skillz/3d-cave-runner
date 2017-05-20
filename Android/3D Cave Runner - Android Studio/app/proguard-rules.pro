-dontwarn **

-keep class bitter.jnibridge.** { *; }
-keep class com.unity3d.** { *; }
-keep class org.fmod.** { *; }


-keep public class com.google.android.gms.* {
    public *;
}
-dontwarn com.google.android.gms.**

-keep class com.amazonaws.** { *; }
-keep public class com.skillzgames.** { *; }
-keep public class com.facebook.react.** { *; }
-keep public class com.skillz.** { *; }
-keep public class com.bitgo.** { *; }
-keep public class com.skillz.Skillz {
    *;
}
-keep public class com.skillz.util.SkillzPreferences {
    *;
}
-keep public class com.skillz.util.SkillzUserPreferences {
    *;
}
-keep class com.skillz.model.**
-keep class com.facebook.react.**
-keepnames class com.skillz.model.**
#-keepattributes Exceptions,InnerClasses,Signature,Deprecated,SourceFile,LineNumberTable,*Annotation*,EnclosingMethod com.skillz.model.*
-keepnames public class com.skillz.Skillz
-keep public class com.skillz.util.Timber {
    *;
}
-keep public class com.skillz.push.PushMessage


-keep class com.skillz.api.UserApi { public *; }
-keep class com.skillz.api.UserApi$UserPatch { *; }
-keep class com.skillz.api.UserApi$ResetData { *; }
-keep class com.skillz.api.UserApi$MatchPatch { *; }
-keep class com.skillz.api.UserApi$HeartbeatScore { *; }
-keep class com.skillz.api.UserApi$JoinMatch { *; }
-keep class com.skillz.api.UserApi$Rematch { *; }
-keep class com.skillz.api.UserApi$AcceptRematch { *; }
-keep class com.skillz.api.UserApi$DummyRequest { *; }

-keep class org.apache.commons.logging.**               { *; }
-keep class com.amazonaws.services.sqs.QueueUrlHandler  { *; }
-keep class com.amazonaws.javax.xml.transform.sax.*     { public *; }
-keep class com.amazonaws.javax.xml.stream.**           { *; }
-keep class com.amazonaws.services.**.model.*Exception* { *; }
-keep class org.codehaus.**                             { *; }
-keepattributes Signature,*Annotation*

-dontwarn javax.xml.stream.events.**
-dontwarn org.codehaus.jackson.**
-dontwarn org.apache.commons.logging.impl.**
-dontwarn org.apache.http.conn.scheme.**

-keep class com.skillz.push.PushToken
-keep class com.skillz.fragment.ReactHomeFragment$Tab
-keep class com.skillz.util.GameSetting
-keep class com.skillz.api.OAuthApi$Grant
-keep class com.skillz.util.Timber$Tree

#-dontshrink


# Retrofit 1.X


-keep class com.squareup.okhttp.** { *; }
-keep class retrofit.** { *; }
-keep interface com.squareup.okhttp.** { *; }


-dontwarn com.squareup.okhttp.**
-dontwarn okio.**
-dontwarn retrofit.**
-dontwarn rx.**


-keepclasseswithmembers class * {
    @retrofit.http.* <methods>;
}


# If in your rest service interface you use methods with Callback argument.
-keepattributes Exceptions


# If your rest service methods throw custom exceptions, because you've defined an ErrorHandler.
-keepattributes Signature


# Also you must note that if you are using GSON for conversion from JSON to POJO representation, you must ignore those POJO classes from being obfuscated.
# Here include the POJO's that have you have created for mapping JSON response to POJO for example.


# OkHttp
-keepattributes Signature
-keepattributes *Annotation*
-keep class com.squareup.okhttp.** { *; }
-keep interface com.squareup.okhttp.** { *; }
-dontwarn com.squareup.okhttp.**


-keep public class android.support.v7.widget.** { *; }
-keep public class android.support.v7.internal.widget.** { *; }


	-keep public class * extends android.support.v4.view.ActionProvider {
	    public <init>(android.content.Context);
	}


	-keep class com.skillz.mopub.** { *; }


	# React Native


	# Keep our interfaces so they can be used by other ProGuard rules.
	# See http://sourceforge.net/p/proguard/bugs/466/
	-keep,allowobfuscation @interface com.facebook.proguard.annotations.DoNotStrip
	-keep,allowobfuscation @interface com.facebook.proguard.annotations.KeepGettersAndSetters
	-keep,allowobfuscation @interface com.facebook.common.internal.DoNotStrip


	# Do not strip any method/class that is annotated with @DoNotStrip
	-keep @com.facebook.proguard.annotations.DoNotStrip class *
	-keep @com.facebook.common.internal.DoNotStrip class *
	-keepclassmembers class * {
	 @com.facebook.proguard.annotations.DoNotStrip *;
	 @com.facebook.common.internal.DoNotStrip *;
	}


	-keepclassmembers @com.facebook.proguard.annotations.KeepGettersAndSetters class * {
	 void set*(***);
	 *** get*();
	}


	-keep class * extends com.facebook.react.bridge.JavaScriptModule { *; }
	-keep class * extends com.facebook.react.bridge.NativeModule { *; }
	-keepclassmembers,includedescriptorclasses class * { native <methods>; }
	-keepclassmembers class *  { @com.facebook.react.uimanager.UIProp <fields>; }
	-keepclassmembers class *  { @com.facebook.react.uimanager.annotations.ReactProp <methods>; }
	-keepclassmembers class *  { @com.facebook.react.uimanager.annotations.ReactPropGroup <methods>; }


	-keep class com.facebook.** { *; }
	-dontwarn com.facebook.react.**


	# okhttp


	-keepattributes Signature
	-keepattributes *Annotation*
	-keep class okhttp3.** { *; }
	-keep interface okhttp3.** { *; }
	-dontwarn okhttp3.**


	# okio


	-keep class sun.misc.Unsafe { *; }
	-dontwarn java.nio.file.*
	-dontwarn org.codehaus.mojo.animal_sniffer.IgnoreJRERequirement
	-dontwarn okio.**


	# Braintree/PayPal
	-dontwarn com.braintreepayments.**
	-keep class com.braintreepayments.** { *; }
	-keep interface com.braintreepayments.** { *; }
	-dontwarn com.paypal.**
	-keep class com.paypal.** { *; }
	-keep interface com.paypal.** { *; }
