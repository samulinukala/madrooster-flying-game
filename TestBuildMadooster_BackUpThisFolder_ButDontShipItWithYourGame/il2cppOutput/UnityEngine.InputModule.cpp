﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B;
// System.Action`2<System.Int32,System.Object>
struct Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166;
// System.Action`2<System.Int32,System.String>
struct Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821;
// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>
struct Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_InputModule[];
IL2CPP_EXTERN_C RuntimeClass* NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeInputSystem_NotifyBeforeUpdate_m39AE2F1A42BD47200A263AD0EF9EDA5EF4C0042A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeInputSystem_NotifyDeviceDiscovered_m861CCAFB4DD314DB3DC58FBD0398800CF9272C03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeInputSystem_NotifyUpdate_m482599CC17084B0383809F97671530613EA39AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeInputSystem_ShouldRunUpdate_m7C9E1201550198D8E1F163787175C86A8B0EE71B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeInputSystem__cctor_mADBD6616441651B2AFE2AD8AF64D63DF0BA66693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeInputSystem_get_onDeviceDiscovered_mD55A996A1107331B95C4D9409B8D4C98BADB8FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeInputSystem_set_onDeviceDiscovered_m8DEE711BB866D1C923DA537B7DE62BF03094D855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeInputEventBufferU2A_t1FC5068336FC596E924B076260B502899D85E138_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE7BE147157D59625477C35248C6A6C59EA2900FB 
{
};
struct Il2CppArrayBounds;

// UnityEngineInternal.Input.NativeInputSystem
struct NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE  : public RuntimeObject
{
};

struct NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields
{
	// UnityEngineInternal.Input.NativeUpdateCallback UnityEngineInternal.Input.NativeInputSystem::onUpdate
	NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* ___onUpdate_0;
	// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> UnityEngineInternal.Input.NativeInputSystem::onBeforeUpdate
	Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B* ___onBeforeUpdate_1;
	// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> UnityEngineInternal.Input.NativeInputSystem::onShouldRunUpdate
	Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2* ___onShouldRunUpdate_2;
	// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* ___s_OnDeviceDiscoveredCallback_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngineInternal.Input.NativeInputEvent
#pragma pack(push, tp, 1)
struct NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEventType UnityEngineInternal.Input.NativeInputEvent::type
					int32_t ___type_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[4];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::sizeInBytes
					uint16_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding[6];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::deviceId
					uint16_t ___deviceId_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding[8];
					// System.Double UnityEngineInternal.Input.NativeInputEvent::time
					double ___time_4;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding_forAlignmentOnly[8];
					double ___time_4_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEvent::eventId
					int32_t ___eventId_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};
#pragma pack(pop, tp)

// UnityEngineInternal.Input.NativeInputEventBuffer
#pragma pack(push, tp, 1)
struct NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Void* UnityEngineInternal.Input.NativeInputEventBuffer::eventBuffer
					void* ___eventBuffer_0;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					void* ___eventBuffer_0_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding[8];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::eventCount
					int32_t ___eventCount_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding_forAlignmentOnly[8];
					int32_t ___eventCount_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[12];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::sizeInBytes
					int32_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[12];
					int32_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::capacityInBytes
					int32_t ___capacityInBytes_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding_forAlignmentOnly[16];
					int32_t ___capacityInBytes_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD__padding[20];
	};
};
#pragma pack(pop, tp)

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32,System.Object>
struct Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32,System.String>
struct Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>
struct Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2  : public MulticastDelegate_t
{
};

// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Int32Enum>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m95790D6BE418027E71368AB7D2BF4BFA1AD45AC4_gshared_inline (Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* __this, int32_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Int32Enum,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_gshared_inline (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* __this, int32_t ___arg0, const RuntimeMethod* method) ;

// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_m0979ABC04DBA52617481EDF743D8B48CC089A1C8 (bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>::Invoke(T)
inline void Action_1_Invoke_m1AAB217B001E387B4424C54CFB8D5278CFBE4C65_inline (Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_inline (NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, int32_t ___updateType0, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* ___buffer1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_mD689727D0B27507C2BBDB452C43EC087E02CE401_inline (Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* __this, int32_t ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6*, int32_t, String_t*, const RuntimeMethod*))Action_2_Invoke_m95790D6BE418027E71368AB7D2BF4BFA1AD45AC4_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// TResult System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m67075A0C8A50189A2501B63347177A0748FFE22C_inline (Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2* __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2*, int32_t, const RuntimeMethod*))Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_gshared_inline)(__this, ___arg0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_Multicast(NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, int32_t ___updateType0, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* ___buffer1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* currentDelegate = reinterpret_cast<NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___updateType0, ___buffer1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_OpenInst(NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, int32_t ___updateType0, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* ___buffer1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___updateType0, ___buffer1, method);
}
void NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_OpenStatic(NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, int32_t ___updateType0, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* ___buffer1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___updateType0, ___buffer1, method);
}
void NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_OpenStaticInvoker(NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, int32_t ___updateType0, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* ___buffer1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* >::Invoke(__this->___method_ptr_0, method, NULL, ___updateType0, ___buffer1);
}
void NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_ClosedStaticInvoker(NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, int32_t ___updateType0, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* ___buffer1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___updateType0, ___buffer1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495 (NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, int32_t ___updateType0, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* ___buffer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___updateType0, ___buffer1);

}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUpdateCallback__ctor_m04FDCD50564E7535FADAFF34BBA83500585A84F5 (NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_Multicast;
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333 (NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, int32_t ___updateType0, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* ___buffer1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___updateType0, ___buffer1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::get_onDeviceDiscovered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* NativeInputSystem_get_onDeviceDiscovered_mD55A996A1107331B95C4D9409B8D4C98BADB8FCC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_get_onDeviceDiscovered_mD55A996A1107331B95C4D9409B8D4C98BADB8FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NativeInputSystem_get_onDeviceDiscovered_mD55A996A1107331B95C4D9409B8D4C98BADB8FCC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 3));
		il2cpp_codegen_runtime_class_init_inline(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* L_0 = ((NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var))->___s_OnDeviceDiscoveredCallback_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 4));
		Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::set_onDeviceDiscovered(System.Action`2<System.Int32,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_set_onDeviceDiscovered_m8DEE711BB866D1C923DA537B7DE62BF03094D855 (Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_set_onDeviceDiscovered_m8DEE711BB866D1C923DA537B7DE62BF03094D855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NativeInputSystem_set_onDeviceDiscovered_m8DEE711BB866D1C923DA537B7DE62BF03094D855_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 5));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 6));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 8));
		Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		((NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var))->___s_OnDeviceDiscoveredCallback_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var))->___s_OnDeviceDiscoveredCallback_3), (void*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 9));
		Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* L_1 = ((NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var))->___s_OnDeviceDiscoveredCallback_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 10));
		NativeInputSystem_set_hasDeviceDiscoveredCallback_m0979ABC04DBA52617481EDF743D8B48CC089A1C8((bool)((!(((RuntimeObject*)(Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 11));
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem__cctor_mADBD6616441651B2AFE2AD8AF64D63DF0BA66693 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem__cctor_mADBD6616441651B2AFE2AD8AF64D63DF0BA66693_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NativeInputSystem__cctor_mADBD6616441651B2AFE2AD8AF64D63DF0BA66693_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 12));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 13));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 15));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 16));
		NativeInputSystem_set_hasDeviceDiscoveredCallback_m0979ABC04DBA52617481EDF743D8B48CC089A1C8((bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 17));
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyBeforeUpdate_m39AE2F1A42BD47200A263AD0EF9EDA5EF4C0042A (int32_t ___updateType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_NotifyBeforeUpdate_m39AE2F1A42BD47200A263AD0EF9EDA5EF4C0042A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___updateType0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NativeInputSystem_NotifyBeforeUpdate_m39AE2F1A42BD47200A263AD0EF9EDA5EF4C0042A_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 19));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 21));
		il2cpp_codegen_runtime_class_init_inline(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B* L_0 = ((NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var))->___onBeforeUpdate_1;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 22));
		Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 23));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 24));
		Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B* L_3 = V_0;
		int32_t L_4 = ___updateType0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 25));
		NullCheck(L_3);
		Action_1_Invoke_m1AAB217B001E387B4424C54CFB8D5278CFBE4C65_inline(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 25));
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 26));
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyUpdate_m482599CC17084B0383809F97671530613EA39AD0 (int32_t ___updateType0, intptr_t ___eventBuffer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputEventBufferU2A_t1FC5068336FC596E924B076260B502899D85E138_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_NotifyUpdate_m482599CC17084B0383809F97671530613EA39AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* V_0 = NULL;
	NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* V_1 = NULL;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___updateType0), (&___eventBuffer1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NativeInputSystem_NotifyUpdate_m482599CC17084B0383809F97671530613EA39AD0_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 27));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 28));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 30));
		il2cpp_codegen_runtime_class_init_inline(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* L_0 = ((NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var))->___onUpdate_0;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 31));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 32));
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___eventBuffer1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 32));
		V_1 = (NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD*)L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 33));
		NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* L_2 = V_0;
		V_2 = (bool)((((RuntimeObject*)(NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 34));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 35));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 36));
		NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* L_4 = V_1;
		NullCheck(L_4);
		L_4->___eventCount_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 37));
		NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* L_5 = V_1;
		NullCheck(L_5);
		L_5->___sizeInBytes_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 38));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 39));
		goto IL_0034;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 40));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 41));
		NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* L_6 = V_0;
		int32_t L_7 = ___updateType0;
		NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 42));
		NullCheck(L_6);
		NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_inline(L_6, L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 42));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 43));
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 44));
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyDeviceDiscovered_m861CCAFB4DD314DB3DC58FBD0398800CF9272C03 (int32_t ___deviceId0, String_t* ___deviceDescriptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_NotifyDeviceDiscovered_m861CCAFB4DD314DB3DC58FBD0398800CF9272C03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___deviceId0), (&___deviceDescriptor1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NativeInputSystem_NotifyDeviceDiscovered_m861CCAFB4DD314DB3DC58FBD0398800CF9272C03_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 45));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 46));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 47));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 48));
		il2cpp_codegen_runtime_class_init_inline(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* L_0 = ((NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var))->___s_OnDeviceDiscoveredCallback_3;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 49));
		Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 50));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 51));
		Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* L_3 = V_0;
		int32_t L_4 = ___deviceId0;
		String_t* L_5 = ___deviceDescriptor1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 52));
		NullCheck(L_3);
		Action_2_Invoke_mD689727D0B27507C2BBDB452C43EC087E02CE401_inline(L_3, L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 52));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 53));
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_ShouldRunUpdate_m7C9E1201550198D8E1F163787175C86A8B0EE71B (int32_t ___updateType0, bool* ___retval1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_ShouldRunUpdate_m7C9E1201550198D8E1F163787175C86A8B0EE71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___updateType0), (&___retval1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NativeInputSystem_ShouldRunUpdate_m7C9E1201550198D8E1F163787175C86A8B0EE71B_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 54));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 55));
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 57));
		il2cpp_codegen_runtime_class_init_inline(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var);
		Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2* L_0 = ((NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_il2cpp_TypeInfo_var))->___onShouldRunUpdate_2;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 58));
		bool* L_1 = ___retval1;
		Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2* L_2 = V_0;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_000e:
	{
		Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2* L_3 = V_0;
		int32_t L_4 = ___updateType0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 59));
		NullCheck(L_3);
		bool L_5;
		L_5 = Func_2_Invoke_m67075A0C8A50189A2501B63347177A0748FFE22C_inline(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 59));
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_InputModule + 60));
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_m0979ABC04DBA52617481EDF743D8B48CC089A1C8 (bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*NativeInputSystem_set_hasDeviceDiscoveredCallback_m0979ABC04DBA52617481EDF743D8B48CC089A1C8_ftn) (bool);
	static NativeInputSystem_set_hasDeviceDiscoveredCallback_m0979ABC04DBA52617481EDF743D8B48CC089A1C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_set_hasDeviceDiscoveredCallback_m0979ABC04DBA52617481EDF743D8B48CC089A1C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Double UnityEngineInternal.Input.NativeInputSystem::get_currentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeInputSystem_get_currentTime_mB10D8CF832AA53952843986F29675B3BC71AAEC9 (const RuntimeMethod* method) 
{
	typedef double (*NativeInputSystem_get_currentTime_mB10D8CF832AA53952843986F29675B3BC71AAEC9_ftn) ();
	static NativeInputSystem_get_currentTime_mB10D8CF832AA53952843986F29675B3BC71AAEC9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_get_currentTime_mB10D8CF832AA53952843986F29675B3BC71AAEC9_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::get_currentTime()");
	double icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Double UnityEngineInternal.Input.NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeInputSystem_get_currentTimeOffsetToRealtimeSinceStartup_mE5FB513F17BBF2FF45494D1939C44DEBF3040B55 (const RuntimeMethod* method) 
{
	typedef double (*NativeInputSystem_get_currentTimeOffsetToRealtimeSinceStartup_mE5FB513F17BBF2FF45494D1939C44DEBF3040B55_ftn) ();
	static NativeInputSystem_get_currentTimeOffsetToRealtimeSinceStartup_mE5FB513F17BBF2FF45494D1939C44DEBF3040B55_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_get_currentTimeOffsetToRealtimeSinceStartup_mE5FB513F17BBF2FF45494D1939C44DEBF3040B55_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::get_currentTimeOffsetToRealtimeSinceStartup()");
	double icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Int32 UnityEngineInternal.Input.NativeInputSystem::AllocateDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeInputSystem_AllocateDeviceId_m0F5EA2F96B8C2DB31D86E14B7F3C34105E6D67BA (const RuntimeMethod* method) 
{
	typedef int32_t (*NativeInputSystem_AllocateDeviceId_m0F5EA2F96B8C2DB31D86E14B7F3C34105E6D67BA_ftn) ();
	static NativeInputSystem_AllocateDeviceId_m0F5EA2F96B8C2DB31D86E14B7F3C34105E6D67BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_AllocateDeviceId_m0F5EA2F96B8C2DB31D86E14B7F3C34105E6D67BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::AllocateDeviceId()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::QueueInputEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_QueueInputEvent_m9363FC2953D733EA8A3AE58470A90B4767ED0B7B (intptr_t ___inputEvent0, const RuntimeMethod* method) 
{
	typedef void (*NativeInputSystem_QueueInputEvent_m9363FC2953D733EA8A3AE58470A90B4767ED0B7B_ftn) (intptr_t);
	static NativeInputSystem_QueueInputEvent_m9363FC2953D733EA8A3AE58470A90B4767ED0B7B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_QueueInputEvent_m9363FC2953D733EA8A3AE58470A90B4767ED0B7B_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::QueueInputEvent(System.IntPtr)");
	_il2cpp_icall_func(___inputEvent0);
}
// System.Int64 UnityEngineInternal.Input.NativeInputSystem::IOCTL(System.Int32,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeInputSystem_IOCTL_m11AC7B69197C6214E794B563D48FD60E848901E7 (int32_t ___deviceId0, int32_t ___code1, intptr_t ___data2, int32_t ___sizeInBytes3, const RuntimeMethod* method) 
{
	typedef int64_t (*NativeInputSystem_IOCTL_m11AC7B69197C6214E794B563D48FD60E848901E7_ftn) (int32_t, int32_t, intptr_t, int32_t);
	static NativeInputSystem_IOCTL_m11AC7B69197C6214E794B563D48FD60E848901E7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_IOCTL_m11AC7B69197C6214E794B563D48FD60E848901E7_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::IOCTL(System.Int32,System.Int32,System.IntPtr,System.Int32)");
	int64_t icallRetVal = _il2cpp_icall_func(___deviceId0, ___code1, ___data2, ___sizeInBytes3);
	return icallRetVal;
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::SetPollingFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_SetPollingFrequency_mDEF2E1093D0776906BC95CC8E29A143C115910A0 (float ___hertz0, const RuntimeMethod* method) 
{
	typedef void (*NativeInputSystem_SetPollingFrequency_mDEF2E1093D0776906BC95CC8E29A143C115910A0_ftn) (float);
	static NativeInputSystem_SetPollingFrequency_mDEF2E1093D0776906BC95CC8E29A143C115910A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_SetPollingFrequency_mDEF2E1093D0776906BC95CC8E29A143C115910A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::SetPollingFrequency(System.Single)");
	_il2cpp_icall_func(___hertz0);
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::Update(UnityEngineInternal.Input.NativeInputUpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeInputSystem_Update_m898216ECCA26122D827C2FB45FC4A20296031036 (int32_t ___updateType0, const RuntimeMethod* method) 
{
	typedef void (*NativeInputSystem_Update_m898216ECCA26122D827C2FB45FC4A20296031036_ftn) (int32_t);
	static NativeInputSystem_Update_m898216ECCA26122D827C2FB45FC4A20296031036_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_Update_m898216ECCA26122D827C2FB45FC4A20296031036_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::Update(UnityEngineInternal.Input.NativeInputUpdateType)");
	_il2cpp_icall_func(___updateType0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333_inline (NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* __this, int32_t ___updateType0, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD* ___buffer1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___updateType0, ___buffer1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m95790D6BE418027E71368AB7D2BF4BFA1AD45AC4_gshared_inline (Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* __this, int32_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_gshared_inline (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* __this, int32_t ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
