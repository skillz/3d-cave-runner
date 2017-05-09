class MyDelegateBase : SkillzSDK.SkillzDelegateBase
{
	public override void OnSkillzWillExit()
	{
		UnityEngine.Application.LoadLevel("start");
	}
}
