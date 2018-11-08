package com.skillzgames.caverun;

import android.os.Bundle;
import android.util.Log;

import com.crashlytics.android.Crashlytics;
import com.skillz.activity.UnityGameActivity;

import io.fabric.sdk.android.Fabric;

public class SkillzUnityPlayerActivity extends UnityGameActivity
{
	protected Crashlytics mCrashlytics;
	// Setup activity layout
	@Override protected void onCreate (Bundle savedInstanceState)
	{
		System.out.println("updating fingerprint 2");
		Log.i("Skillz", "force update of fingerprint 2");
		mCrashlytics = new Crashlytics();
		Fabric.with(this, mCrashlytics);
		super.onCreate(savedInstanceState);
	}
}
