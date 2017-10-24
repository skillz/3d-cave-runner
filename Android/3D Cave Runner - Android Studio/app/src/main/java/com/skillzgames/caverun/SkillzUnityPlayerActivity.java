package com.skillzgames.caverun;

import com.skillz.activity.UnityGameActivity;
import com.unity3d.player.*;
import android.app.Activity;
import android.content.res.Configuration;
import android.graphics.PixelFormat;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;

import com.crashlytics.android.Crashlytics;
import io.fabric.sdk.android.Fabric;

public class SkillzUnityPlayerActivity extends UnityGameActivity
{
	protected Crashlytics mCrashlytics;

	// Setup activity layout
	@Override protected void onCreate (Bundle savedInstanceState)
	{
		mCrashlytics = new Crashlytics();
		Fabric.with(this, mCrashlytics);
		super.onCreate(savedInstanceState);
	}
}
