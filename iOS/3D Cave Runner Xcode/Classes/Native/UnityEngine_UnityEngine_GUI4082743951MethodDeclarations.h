#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3486805455;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "UnityEngine_UnityEngine_GUISkin1436893342.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_ScaleMode324459649.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction3486805455.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1321863889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m2724006954 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m3391676555 (Il2CppObject * __this /* static, unused */, GUISkin_t1436893342 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t1436893342 * GUI_get_skin_m2309570990 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m3603287387 (Il2CppObject * __this /* static, unused */, GUISkin_t1436893342 * ___newSkin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GUI::get_matrix()
extern "C"  Matrix4x4_t2933234003  GUI_get_matrix_m976981075 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
extern "C"  void GUI_set_matrix_m3701966918 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C"  void GUI_Label_m2412846501 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2231582000 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m98409281 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C"  void GUI_DrawTexture_m1191587896 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, Texture_t2243626319 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C"  void GUI_DrawTexture_m3284533624 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, Texture_t2243626319 * ___image1, int32_t ___scaleMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C"  void GUI_DrawTexture_m1921388893 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, Texture_t2243626319 * ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C"  void GUI_DrawTexture_m4142185888 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, Texture_t2243626319 * ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, float ___imageAspect4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::CalculateScaledTextureRects(UnityEngine.Rect,UnityEngine.ScaleMode,System.Single,UnityEngine.Rect&,UnityEngine.Rect&)
extern "C"  bool GUI_CalculateScaledTextureRects_m3962984624 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, int32_t ___scaleMode1, float ___imageAspect2, Rect_t3681755626 * ___outScreenRect3, Rect_t3681755626 * ___outSourceRect4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
extern "C"  void GUI_Box_m2739364838 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Box_m4178954864 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m3054448581 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m2919274209 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m634477008 (Il2CppObject * __this /* static, unused */, WindowFunction_t3486805455 * ___func0, int32_t ___id1, GUISkin_t1436893342 * ____skin2, int32_t ___forceRect3, float ___width4, float ___height5, GUIStyle_t1799908754 * ___style6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C"  Color_t2020392075  GUI_get_color_m1234367343 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_get_color_m652811444 (Il2CppObject * __this /* static, unused */, Color_t2020392075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m470833806 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m2414316575 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m2786347772 (Il2CppObject * __this /* static, unused */, Rect_t3681755626 * ___position0, GUIContent_t4210063000 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C"  Material_t193706927 * GUI_get_blendMaterial_m454011614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C"  Material_t193706927 * GUI_get_blitMaterial_m2177201520 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m1396731179 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m603378840 (Il2CppObject * __this /* static, unused */, Rect_t3681755626 * ___position0, GUIContent_t4210063000 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
