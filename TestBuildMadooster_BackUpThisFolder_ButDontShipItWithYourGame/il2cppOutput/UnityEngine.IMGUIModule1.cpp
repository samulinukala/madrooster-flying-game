﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Exception
struct Exception_t;
// UnityEngine.ExitGUIException
struct ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_IMGUIModule[];
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887;
IL2CPP_EXTERN_C String_t* _stringLiteral427F9C39B825298A84F532F59ACB9D4467A1137C;
IL2CPP_EXTERN_C const RuntimeMethod* ExitGUIException__ctor_m345D7AD70E401C1AFD46E537CDCEC0F1C8BA342B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIScrollGroup_CalcHeight_mCB0CEC4871F6540145949E4CE8242172A75B2E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIScrollGroup_CalcWidth_m6B927DBF94A8940301A9FB64190403E5667712CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIScrollGroup_SetHorizontal_m31FCDD252E67D51FC954C8E2C358BA0EB3AD7601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIScrollGroup_SetVertical_m8609CD909413A7364781818DDE37A314D8795FD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIScrollGroup__ctor_m95351A883B27B71698A4B84815CEA687D109F3FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyleState_Finalize_m5CC6FBD8C44AF1091CACD6F7032E73B1114765B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyleState__ctor_mD47FE21F7FD8D786F7E8E4E8C3DCA224F9237AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Finalize_mFF6A6FBA538B711A6ED369DD83A41F25DE6EEE85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_Internal_GetSelectedRenderedText_m3F9EF55E4958D2C9DE62AC723DBC99EBB80DD002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_SetMouseTooltip_mFF3E22C7330AE180E83AB2929049BCD87B13B21E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_ToString_m41A8A58B4D9659047D06EF2A5AE5F170AE198ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle__cctor_m4B955524A4DAEAAF103D78D9316756CEFA16FB62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_get_border_m0155A8D115DB5A640D0FC53E45D7B618F27CFDED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3791FADF6D0284BCC1AF6156A077038C2AA23055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke;;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tCA0A4120E1B13462A402E739CE2DD9CA72BAC713  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};

struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// UnityEngine.GUIUtility
struct GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A  : public RuntimeObject
{
};

struct GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields
{
	// System.Int32 UnityEngine.GUIUtility::s_ControlCount
	int32_t ___s_ControlCount_0;
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_1;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_2;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___takeCapture_3;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___releaseCapture_4;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* ___processEvent_5;
	// System.Action UnityEngine.GUIUtility::cleanupRoots
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cleanupRoots_6;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* ___endContainerGUIFromException_7;
	// System.Action UnityEngine.GUIUtility::guiChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___guiChanged_8;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_9;
	// System.Func`1<System.Boolean> UnityEngine.GUIUtility::s_HasCurrentWindowKeyFocusFunc
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___s_HasCurrentWindowKeyFocusFunc_10;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F  : public RuntimeObject
{
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// System.Boolean UnityEngine.GUILayoutEntry::consideredForMargin
	bool ___consideredForMargin_7;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_Style_8;
};

struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields
{
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kDummyRect_9;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_10;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.ExitGUIException
struct ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549  : public Exception_t
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D  : public GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F
{
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* ___entries_11;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_12;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_13;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_14;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_15;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_16;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_19;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_21;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_25;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_26;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginLeft
	int32_t ___m_MarginLeft_27;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginRight
	int32_t ___m_MarginRight_28;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginTop
	int32_t ___m_MarginTop_29;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginBottom
	int32_t ___m_MarginBottom_30;
};

struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_StaticFields
{
	// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::none
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* ___none_31;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5  : public GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D
{
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_32;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_33;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_34;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_35;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_36;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_37;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_38;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_39;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_40;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_41;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___horizontalScrollbar_42;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___verticalScrollbar_43;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com_back(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com_cleanup(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled);


// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___x0, float ___width1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___y0, float ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___screenRect0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___cursorStringIndex2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___cursorPixelPosition2, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___localPosition0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___mContent1, int32_t ___selectIndex2, int32_t ___cursorIndex3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71 (String_t* ___tooltip0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___screenRect1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___self0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01 (const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___self0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___other1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977 (intptr_t ___self0, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, RuntimeObject* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07 (intptr_t ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___controlId2, bool ___isHover3, bool ___isActive4, bool ___on5, bool ___hasKeyboardFocus6, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::HasKeyFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HasKeyFocus_m6AD234443A7B2AB471E14BE141FC5E8ADD261A0F (int32_t ___controlID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___cursorStringIndex2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPixelPosition2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, float ___width1, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85 (String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUIScrollGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup__ctor_m95351A883B27B71698A4B84815CEA687D109F3FB (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup__ctor_m95351A883B27B71698A4B84815CEA687D109F3FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIScrollGroup__ctor_m95351A883B27B71698A4B84815CEA687D109F3FB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5534));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5535));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5536));
		__this->___allowHorizontalScroll_38 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5537));
		__this->___allowVerticalScroll_39 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5538));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5539));
		il2cpp_codegen_runtime_class_init_inline(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5539));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5540));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5541));
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcWidth_m6B927DBF94A8940301A9FB64190403E5667712CE (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup_CalcWidth_m6B927DBF94A8940301A9FB64190403E5667712CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIScrollGroup_CalcWidth_m6B927DBF94A8940301A9FB64190403E5667712CE_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5542));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5543));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5544));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5545));
		float L_0 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5546));
		float L_1 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5547));
		bool L_2 = __this->___allowHorizontalScroll_38;
		V_2 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5548));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5549));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5550));
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = (0.0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5551));
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = (0.0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5552));
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5553));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5554));
		GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5554));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5555));
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		__this->___calcMinWidth_32 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5556));
		float L_5 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		__this->___calcMaxWidth_33 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5557));
		bool L_6 = __this->___allowHorizontalScroll_38;
		V_3 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5558));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5559));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5560));
		float L_8 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		V_4 = (bool)((((float)L_8) > ((float)(32.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5561));
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5562));
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = (32.0f);
	}

IL_0079:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5563));
		float L_10 = V_0;
		V_5 = (bool)((((int32_t)((((float)L_10) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5564));
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0091;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5565));
		float L_12 = V_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_12;
	}

IL_0091:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5566));
		float L_13 = V_1;
		V_6 = (bool)((((int32_t)((((float)L_13) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5567));
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5568));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5569));
		float L_15 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5570));
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5571));
	}

IL_00b2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5572));
	}

IL_00b3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5573));
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetHorizontal_m31FCDD252E67D51FC954C8E2C358BA0EB3AD7601 (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, float ___x0, float ___width1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup_SetHorizontal_m31FCDD252E67D51FC954C8E2C358BA0EB3AD7601_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___width1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIScrollGroup_SetHorizontal_m31FCDD252E67D51FC954C8E2C358BA0EB3AD7601_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5574));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5575));
	float G_B3_0 = 0.0f;
	int32_t G_B6_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5576));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5577));
		bool L_0 = __this->___needsVerticalScrollbar_41;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		float L_1 = ___width1;
		G_B3_0 = L_1;
		goto IL_002b;
	}

IL_000c:
	{
		float L_2 = ___width1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = __this->___verticalScrollbar_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5578));
		NullCheck(L_3);
		float L_4;
		L_4 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5578));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = __this->___verticalScrollbar_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5579));
		NullCheck(L_5);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6;
		L_6 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5579));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5580));
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5580));
		G_B3_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_2, L_4)), ((float)L_7)));
	}

IL_002b:
	{
		V_0 = G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5581));
		bool L_8 = __this->___allowHorizontalScroll_38;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->___calcMinWidth_32;
		G_B6_0 = ((((float)L_9) < ((float)L_10))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		V_1 = (bool)G_B6_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5582));
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5583));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5584));
		__this->___needsHorizontalScrollbar_40 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5585));
		float L_12 = __this->___calcMinWidth_32;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5586));
		float L_13 = __this->___calcMaxWidth_33;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5587));
		float L_14 = ___x0;
		float L_15 = __this->___calcMinWidth_32;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5588));
		GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5(__this, L_14, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5588));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5589));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_17 = ___width1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5590));
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_16, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5590));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5591));
		float L_18 = __this->___calcMinWidth_32;
		__this->___clientWidth_36 = L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5592));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5593));
		goto IL_00d8;
	}

IL_008e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5594));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5595));
		__this->___needsHorizontalScrollbar_40 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5596));
		bool L_19 = __this->___allowHorizontalScroll_38;
		V_2 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5597));
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5598));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5599));
		float L_21 = __this->___calcMinWidth_32;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_21;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5600));
		float L_22 = __this->___calcMaxWidth_33;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5601));
	}

IL_00ba:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5602));
		float L_23 = ___x0;
		float L_24 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5603));
		GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5(__this, L_23, L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5603));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5604));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_26 = ___width1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5605));
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_25, L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5605));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5606));
		float L_27 = V_0;
		__this->___clientWidth_36 = L_27;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5607));
	}

IL_00d8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5608));
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcHeight_mCB0CEC4871F6540145949E4CE8242172A75B2E5F (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup_CalcHeight_mCB0CEC4871F6540145949E4CE8242172A75B2E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIScrollGroup_CalcHeight_mCB0CEC4871F6540145949E4CE8242172A75B2E5F_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5609));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5610));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5611));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5612));
		float L_0 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5613));
		float L_1 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5614));
		bool L_2 = __this->___allowVerticalScroll_39;
		V_2 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5615));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5616));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5617));
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = (0.0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5618));
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = (0.0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5619));
	}

IL_0031:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5620));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5621));
		GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5621));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5622));
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		__this->___calcMinHeight_34 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5623));
		float L_5 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		__this->___calcMaxHeight_35 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5624));
		bool L_6 = __this->___needsHorizontalScrollbar_40;
		V_3 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5625));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0099;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5626));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5627));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = __this->___horizontalScrollbar_42;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5628));
		NullCheck(L_8);
		float L_9;
		L_9 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5628));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->___horizontalScrollbar_42;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5629));
		NullCheck(L_10);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_11;
		L_11 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5629));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5630));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5630));
		V_4 = ((float)il2cpp_codegen_add(L_9, ((float)L_12)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5631));
		float L_13 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		float L_14 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = ((float)il2cpp_codegen_add(L_13, L_14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5632));
		float L_15 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		float L_16 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = ((float)il2cpp_codegen_add(L_15, L_16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5633));
	}

IL_0099:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5634));
		bool L_17 = __this->___allowVerticalScroll_39;
		V_5 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5635));
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00fe;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5636));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5637));
		float L_19 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_6 = (bool)((((float)L_19) > ((float)(32.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5638));
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5639));
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = (32.0f);
	}

IL_00c4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5640));
		float L_21 = V_0;
		V_7 = (bool)((((int32_t)((((float)L_21) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5641));
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5642));
		float L_23 = V_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_23;
	}

IL_00dc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5643));
		float L_24 = V_1;
		V_8 = (bool)((((int32_t)((((float)L_24) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5644));
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00fd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5645));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5646));
		float L_26 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_26;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5647));
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5648));
	}

IL_00fd:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5649));
	}

IL_00fe:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5650));
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetVertical_m8609CD909413A7364781818DDE37A314D8795FD6 (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, float ___y0, float ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup_SetVertical_m8609CD909413A7364781818DDE37A314D8795FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___y0), (&___height1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3), (&V_4), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIScrollGroup_SetVertical_m8609CD909413A7364781818DDE37A314D8795FD6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5651));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5652));
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5653));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5654));
		float L_0 = ___height1;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5655));
		bool L_1 = __this->___needsHorizontalScrollbar_40;
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5656));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5657));
		float L_3 = V_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->___horizontalScrollbar_42;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5658));
		NullCheck(L_4);
		float L_5;
		L_5 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5658));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = __this->___horizontalScrollbar_42;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5659));
		NullCheck(L_6);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_7;
		L_7 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5659));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5660));
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5660));
		V_0 = ((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_add(L_5, ((float)L_8)))));
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5661));
		bool L_9 = __this->___allowVerticalScroll_39;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = __this->___calcMinHeight_34;
		G_B5_0 = ((((float)L_10) < ((float)L_11))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B5_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B5_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5662));
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0151;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5663));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5664));
		bool L_13 = __this->___needsHorizontalScrollbar_40;
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		bool L_14 = __this->___needsVerticalScrollbar_41;
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 0;
	}

IL_005d:
	{
		V_5 = (bool)G_B9_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5665));
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00f1;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5666));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5667));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5668));
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5668));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_18 = __this->___verticalScrollbar_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5669));
		NullCheck(L_18);
		float L_19;
		L_19 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5669));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_20 = __this->___verticalScrollbar_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5670));
		NullCheck(L_20);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_21;
		L_21 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5670));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5671));
		NullCheck(L_21);
		int32_t L_22;
		L_22 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5671));
		__this->___clientWidth_36 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)L_22)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5672));
		float L_23 = __this->___clientWidth_36;
		float L_24 = __this->___calcMinWidth_32;
		V_7 = (bool)((((float)L_23) < ((float)L_24))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5673));
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00b6;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5674));
		float L_26 = __this->___calcMinWidth_32;
		__this->___clientWidth_36 = L_26;
	}

IL_00b6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5675));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_27 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5676));
		float L_28;
		L_28 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5676));
		V_6 = L_28;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5677));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_29 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5678));
		float L_30;
		L_30 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5678));
		float L_31 = __this->___clientWidth_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5679));
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, __this, L_30, L_31);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5679));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5680));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5681));
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5681));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5682));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_32 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_33 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5683));
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_32, L_33, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5683));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5684));
	}

IL_00f1:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5685));
		float L_34 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_3 = L_34;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5686));
		float L_35 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_4 = L_35;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5687));
		float L_36 = __this->___calcMinHeight_34;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_36;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5688));
		float L_37 = __this->___calcMaxHeight_35;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_37;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5689));
		float L_38 = ___y0;
		float L_39 = __this->___calcMinHeight_34;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5690));
		GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2(__this, L_38, L_39, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5690));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5691));
		float L_40 = V_3;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_40;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5692));
		float L_41 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_41;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5693));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_42 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_43 = ___height1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5694));
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_42, L_43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5694));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5695));
		float L_44 = __this->___calcMinHeight_34;
		__this->___clientHeight_37 = L_44;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5696));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5697));
		goto IL_0196;
	}

IL_0151:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5698));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5699));
		bool L_45 = __this->___allowVerticalScroll_39;
		V_8 = L_45;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5700));
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_0178;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5701));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5702));
		float L_47 = __this->___calcMinHeight_34;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_47;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5703));
		float L_48 = __this->___calcMaxHeight_35;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_48;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5704));
	}

IL_0178:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5705));
		float L_49 = ___y0;
		float L_50 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5706));
		GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2(__this, L_49, L_50, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5706));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5707));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_51 = (&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_52 = ___height1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5708));
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_51, L_52, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5708));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5709));
		float L_53 = V_0;
		__this->___clientHeight_37 = L_53;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5710));
	}

IL_0196:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5711));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled)
{
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceStyle' of type 'GUIStyleState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184(__this, (&___value0), NULL);
		return;
	}
}
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873 (const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873_ftn) ();
	static GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	typedef void (*GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn) (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*);
	static GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_mD47FE21F7FD8D786F7E8E4E8C3DCA224F9237AD7 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState__ctor_mD47FE21F7FD8D786F7E8E4E8C3DCA224F9237AD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyleState__ctor_mD47FE21F7FD8D786F7E8E4E8C3DCA224F9237AD7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5712));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5713));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5714));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5715));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5715));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5716));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5717));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5718));
		intptr_t L_0;
		L_0 = GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5718));
		__this->___m_Ptr_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5719));
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___sourceStyle0), (&___source1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5720));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5721));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5722));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5723));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5723));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5724));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5725));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___sourceStyle0;
		__this->___m_SourceStyle_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SourceStyle_1), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5726));
		intptr_t L_1 = ___source1;
		__this->___m_Ptr_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5727));
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___sourceStyle0, intptr_t ___source1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___sourceStyle0), (&___source1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5728));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5729));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5730));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5731));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___sourceStyle0;
		intptr_t L_1 = ___source1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5732));
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_2 = (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*)il2cpp_codegen_object_new(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555(L_2, L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5732));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5733));
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_3 = V_0;
		V_1 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5734));
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Finalize_m5CC6FBD8C44AF1091CACD6F7032E73B1114765B2 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_Finalize_m5CC6FBD8C44AF1091CACD6F7032E73B1114765B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyleState_Finalize_m5CC6FBD8C44AF1091CACD6F7032E73B1114765B2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5735));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5736));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5737));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5747));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5748));
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5748));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5738));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5739));
				GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_SourceStyle_1;
				V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5740));
				bool L_1 = V_0;
				if (!L_1)
				{
					goto IL_0023_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5741));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5742));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5743));
				GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5743));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5744));
				intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				__this->___m_Ptr_0 = L_2;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5745));
			}

IL_0023_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5746));
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5749));
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn) (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled)
{
}
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled)
{
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Normal' of type 'GUIStyle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled)
{
}
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_rawName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, String_t*);
	static GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_rawName(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef Font_tC95270EA3198038970422D78B74A7F2E218A96B6* (*GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_font()");
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Font_tC95270EA3198038970422D78B74A7F2E218A96B6*);
	static GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_font(UnityEngine.Font)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_wordWrap(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_fontSize(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_richText(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)");
	intptr_t icallRetVal = _il2cpp_icall_func(___self0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___self0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___other1, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)");
	intptr_t icallRetVal = _il2cpp_icall_func(___self0, ___other1);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977 (intptr_t ___self0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977_ftn) (intptr_t);
	static GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___self0);
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___idx0);
	return icallRetVal;
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___idx0);
	return icallRetVal;
}
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07 (intptr_t ___target0, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07_ftn) (intptr_t);
	static GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___target0);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___content1;
		bool L_1 = ___isHover2;
		bool L_2 = ___isActive3;
		bool L_3 = ___on4;
		bool L_4 = ___hasKeyboardFocus5;
		GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B(__this, (&___screenRect0), L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_Draw2(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___content1;
		int32_t L_1 = ___controlID2;
		bool L_2 = ___on3;
		GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138(__this, (&___position0), L_0, L_1, L_2, NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___cursorStringIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___content1;
		int32_t L_1 = ___cursorStringIndex2;
		GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815(__this, (&___position0), L_0, L_1, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPixelPosition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___content1;
		int32_t L_1;
		L_1 = GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9(__this, (&___position0), L_0, (&___cursorPixelPosition2), NULL);
		return L_1;
	}
}
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_m3F9EF55E4958D2C9DE62AC723DBC99EBB80DD002 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___localPosition0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___mContent1, int32_t ___selectIndex2, int32_t ___cursorIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Internal_GetSelectedRenderedText_m3F9EF55E4958D2C9DE62AC723DBC99EBB80DD002_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Internal_GetSelectedRenderedText_m3F9EF55E4958D2C9DE62AC723DBC99EBB80DD002_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___mContent1;
		int32_t L_1 = ___selectIndex2;
		int32_t L_2 = ___cursorIndex3;
		String_t* L_3;
		L_3 = GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3(__this, (&___localPosition0), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___content0;
		GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48(__this, L_0, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, float ___width1, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, float);
	static GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)");
	float icallRetVal = _il2cpp_icall_func(__this, ___content0, ___width1);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::SetMouseTooltip(System.String,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_mFF3E22C7330AE180E83AB2929049BCD87B13B21E (String_t* ___tooltip0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_SetMouseTooltip_mFF3E22C7330AE180E83AB2929049BCD87B13B21E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_SetMouseTooltip_mFF3E22C7330AE180E83AB2929049BCD87B13B21E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___tooltip0;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71(L_0, (&___screenRect1), NULL);
		return;
	}
}
// System.Boolean UnityEngine.GUIStyle::IsTooltipActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777 (String_t* ___tooltip0, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777_ftn) (String_t*);
	static GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::IsTooltipActive(System.String)");
	bool icallRetVal = _il2cpp_icall_func(___tooltip0);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font0, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3_ftn) (Font_tC95270EA3198038970422D78B74A7F2E218A96B6*);
	static GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___font0);
}
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5750));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5751));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5752));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5753));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5753));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5754));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5755));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5756));
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5756));
		__this->___m_Ptr_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5757));
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral427F9C39B825298A84F532F59ACB9D4467A1137C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___other0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5758));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5759));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5760));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5761));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5761));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5762));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5763));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5764));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5765));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5766));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5767));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral427F9C39B825298A84F532F59ACB9D4467A1137C, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5767));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5768));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5769));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2;
		L_2 = GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5769));
		___other0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5770));
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5771));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = ___other0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5772));
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5(__this, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5772));
		__this->___m_Ptr_0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5773));
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Finalize_mFF6A6FBA538B711A6ED369DD83A41F25DE6EEE85 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Finalize_mFF6A6FBA538B711A6ED369DD83A41F25DE6EEE85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Finalize_mFF6A6FBA538B711A6ED369DD83A41F25DE6EEE85_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5774));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5775));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5776));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5787));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5788));
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5788));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5777));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5778));
				intptr_t L_0 = __this->___m_Ptr_0;
				intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5779));
				bool L_2;
				L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5779));
				V_0 = L_2;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5780));
				bool L_3 = V_0;
				if (!L_3)
				{
					goto IL_002f_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5781));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5782));
				intptr_t L_4 = __this->___m_Ptr_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5783));
				il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
				GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977(L_4, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5783));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5784));
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				__this->___m_Ptr_0 = L_5;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5785));
			}

IL_002f_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5786));
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5789));
		return;
	}
}
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5790));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5791));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5792));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5793));
		String_t* L_0 = __this->___m_Name_13;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5794));
		String_t* L_2;
		L_2 = GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5794));
		String_t* L_3 = L_2;
		V_0 = L_3;
		__this->___m_Name_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_13), (void*)L_3);
		String_t* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001a:
	{
		V_1 = G_B2_0;
		goto IL_001d;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5795));
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5796));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5797));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5798));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5799));
		String_t* L_0 = ___value0;
		__this->___m_Name_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_13), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5800));
		String_t* L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5801));
		GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5801));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5802));
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5803));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5804));
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B2_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5805));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5806));
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_0 = __this->___m_Normal_1;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5807));
		intptr_t L_2;
		L_2 = GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB(__this, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5807));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5808));
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_3;
		L_3 = GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5808));
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Normal_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Normal_1), (void*)L_4);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5809));
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_border()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_border_m0155A8D115DB5A640D0FC53E45D7B618F27CFDED (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_get_border_m0155A8D115DB5A640D0FC53E45D7B618F27CFDED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_get_border_m0155A8D115DB5A640D0FC53E45D7B618F27CFDED_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5810));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5811));
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5812));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5813));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Border_9;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5814));
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5814));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5815));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5815));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Border_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Border_9), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5816));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5817));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5818));
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5819));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5820));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Margin_11;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5821));
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5821));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5822));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5822));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Margin_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Margin_11), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5823));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5824));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5825));
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5826));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5827));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Padding_10;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5828));
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5828));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5829));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5829));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Padding_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Padding_10), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5830));
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// System.Single UnityEngine.GUIStyle::get_lineHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5831));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5832));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5833));
		intptr_t L_0 = __this->___m_Ptr_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5834));
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5834));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5835));
		float L_2;
		L_2 = bankers_roundf(L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5835));
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___position0), (&___content1), (&___isHover2), (&___isActive3), (&___on4), (&___hasKeyboardFocus5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5836));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5837));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5838));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5839));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___position0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___content1;
		bool L_2 = ___isHover2;
		bool L_3 = ___isActive3;
		bool L_4 = ___on4;
		bool L_5 = ___hasKeyboardFocus5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5840));
		GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008(__this, L_0, L_1, (-1), L_2, L_3, L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5840));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5841));
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___controlID2, bool ___on3, bool ___hover4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___position0), (&___content1), (&___controlID2), (&___on3), (&___hover4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5842));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5843));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5844));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5845));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___position0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___content1;
		int32_t L_2 = ___controlID2;
		bool L_3 = ___hover4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5846));
		int32_t L_4;
		L_4 = GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5846));
		int32_t L_5 = ___controlID2;
		bool L_6 = ___on3;
		int32_t L_7 = ___controlID2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5847));
		bool L_8;
		L_8 = GUIUtility_HasKeyFocus_m6AD234443A7B2AB471E14BE141FC5E8ADD261A0F(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5847));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5848));
		GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008(__this, L_0, L_1, L_2, L_3, (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0), L_6, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5848));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5849));
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___controlId2, bool ___isHover3, bool ___isActive4, bool ___on5, bool ___hasKeyboardFocus6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___position0), (&___content1), (&___controlId2), (&___isHover3), (&___isActive4), (&___on5), (&___hasKeyboardFocus6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5850));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5851));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5852));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5853));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5854));
		int32_t L_0 = ___controlId2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5855));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5856));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___position0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = ___content1;
		bool L_4 = ___isHover3;
		bool L_5 = ___isActive4;
		bool L_6 = ___on5;
		bool L_7 = ___hasKeyboardFocus6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5857));
		GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50(__this, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5857));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5858));
		goto IL_0029;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5859));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = ___position0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_9 = ___content1;
		int32_t L_10 = ___controlId2;
		bool L_11 = ___on5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5860));
		GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D(__this, L_8, L_9, L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5860));
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5861));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5862));
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5863));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5864));
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B2_0 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5865));
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5866));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5866));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15), (void*)L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___cursorStringIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___position0), (&___content1), (&___cursorStringIndex2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5867));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5868));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5869));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5870));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___position0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___content1;
		int32_t L_2 = ___cursorStringIndex2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5871));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4(__this, L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5871));
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5872));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPixelPosition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___position0), (&___content1), (&___cursorPixelPosition2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5873));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5874));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5875));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5876));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___position0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___content1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___cursorPixelPosition2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5877));
		int32_t L_3;
		L_3 = GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4(__this, L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5877));
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5878));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___content0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5879));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5880));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5881));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5882));
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___content0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5883));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5883));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5884));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, float ___width1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___content0), (&___width1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5885));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5886));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5887));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5888));
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___content0;
		float L_1 = ___width1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5889));
		float L_2;
		L_2 = GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76(__this, L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5889));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5890));
		float L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_ToString_m41A8A58B4D9659047D06EF2A5AE5F170AE198ACF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_ToString_m41A8A58B4D9659047D06EF2A5AE5F170AE198ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle_ToString_m41A8A58B4D9659047D06EF2A5AE5F170AE198ACF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5891));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5892));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5893));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5894));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5895));
		String_t* L_2;
		L_2 = GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5895));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5896));
		String_t* L_3;
		L_3 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5896));
		V_0 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5897));
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__cctor_m4B955524A4DAEAAF103D78D9316756CEFA16FB62 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle__cctor_m4B955524A4DAEAAF103D78D9316756CEFA16FB62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIStyle__cctor_m4B955524A4DAEAAF103D78D9316756CEFA16FB62_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5898));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5899));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5900));
		((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___showKeyboardFocus_14 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___screenRect0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, bool, bool, bool, bool);
	static GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)");
	_il2cpp_icall_func(__this, ___screenRect0, ___content1, ___isHover2, ___isActive3, ___on4, ___hasKeyboardFocus5);
}
// System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___controlID2, bool ___on3, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, int32_t, bool);
	static GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___position0, ___content1, ___controlID2, ___on3);
}
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, int32_t ___cursorStringIndex2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret3, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___position0, ___content1, ___cursorStringIndex2, ___ret3);
}
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___position0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___cursorPixelPosition2, const RuntimeMethod* method) 
{
	typedef int32_t (*GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___position0, ___content1, ___cursorPixelPosition2);
	return icallRetVal;
}
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___localPosition0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___mContent1, int32_t ___selectIndex2, int32_t ___cursorIndex3, const RuntimeMethod* method) 
{
	typedef String_t* (*GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, int32_t, int32_t);
	static GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___localPosition0, ___mContent1, ___selectIndex2, ___cursorIndex3);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___content0, ___ret1);
}
// System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71 (String_t* ___tooltip0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___screenRect1, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71_ftn) (String_t*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)");
	_il2cpp_icall_func(___tooltip0, ___screenRect1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ExitGUIException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitGUIException__ctor_m345D7AD70E401C1AFD46E537CDCEC0F1C8BA342B (ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitGUIException__ctor_m345D7AD70E401C1AFD46E537CDCEC0F1C8BA342B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ExitGUIException__ctor_m345D7AD70E401C1AFD46E537CDCEC0F1C8BA342B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5901));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5902));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5903));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5904));
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5904));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5905));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5906));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5907));
		GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline((bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5907));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5908));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* __this, int32_t ___type0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___type0), (&___value1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5909));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5910));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5911));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5912));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5912));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5913));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5914));
		int32_t L_0 = ___type0;
		__this->___type_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5915));
		RuntimeObject* L_1 = ___value1;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 5916));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3791FADF6D0284BCC1AF6156A077038C2AA23055 (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3791FADF6D0284BCC1AF6156A077038C2AA23055_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3791FADF6D0284BCC1AF6156A077038C2AA23055_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		CHECK_PAUSE_POINT;
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 1549));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 1550));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_IMGUIModule + 1551));
		bool L_0 = ___value0;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___U3CguiIsExitingU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
