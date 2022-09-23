#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// Chapter.Observer.BikeController
struct BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Chapter.Observer.CameraController
struct CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE;
// Chapter.Observer.ClientObserver
struct ClientObserver_tC898BB4C5AF320007DD811D16E3CE56E5FF8F6DD;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Chapter.Observer.HUDController
struct HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Chapter.Observer.Observer
struct Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.String
struct String_t;
// Chapter.Observer.Subject
struct Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral120EC6C0BE2C1AC95E2B4052C03CBE1263A562FF;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821;
IL2CPP_EXTERN_C String_t* _stringLiteral94D3BDA79A3B54A629BE69804BD73939C06AA730;
IL2CPP_EXTERN_C String_t* _stringLiteralA98D44EB43788250E51BC4CCD3AD1216F8D5A290;
IL2CPP_EXTERN_C String_t* _stringLiteralB848A7663EFB4DC4C6F85E96DD7DD1B01124052B;
IL2CPP_EXTERN_C String_t* _stringLiteralFF95DF5537184AB57CFCFB85BBF9C1A3E252B1A4;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_mFED5E2A1FB0A5BC2BD6A6E572B57AE723743FF00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisHUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7_mAE69FB34A33835106E79A8A09F40FF4620330318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE_0_0_0_var;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Chapter.Observer.ClientObserver
struct ClientObserver_tC898BB4C5AF320007DD811D16E3CE56E5FF8F6DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Chapter.Observer.BikeController Chapter.Observer.ClientObserver::_bikeController
	BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* ____bikeController_4;
};

// Chapter.Observer.Observer
struct Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Chapter.Observer.Subject
struct Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.ArrayList Chapter.Observer.Subject::_observers
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____observers_4;
};

// Chapter.Observer.BikeController
struct BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED  : public Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123
{
	// System.Boolean Chapter.Observer.BikeController::<IsTurboOn>k__BackingField
	bool ___U3CIsTurboOnU3Ek__BackingField_5;
	// System.Boolean Chapter.Observer.BikeController::_isEngineOn
	bool ____isEngineOn_6;
	// Chapter.Observer.HUDController Chapter.Observer.BikeController::_hudController
	HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* ____hudController_7;
	// Chapter.Observer.CameraController Chapter.Observer.BikeController::_cameraController
	CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE* ____cameraController_8;
	// System.Single Chapter.Observer.BikeController::health
	float ___health_9;
};

// Chapter.Observer.CameraController
struct CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE  : public Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF
{
	// System.Boolean Chapter.Observer.CameraController::_isTurboOn
	bool ____isTurboOn_4;
	// UnityEngine.Vector3 Chapter.Observer.CameraController::_initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialPosition_5;
	// System.Single Chapter.Observer.CameraController::_shakeMagnitude
	float ____shakeMagnitude_6;
	// Chapter.Observer.BikeController Chapter.Observer.CameraController::_bikeController
	BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* ____bikeController_7;
};

// Chapter.Observer.HUDController
struct HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7  : public Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF
{
	// System.Boolean Chapter.Observer.HUDController::_isTurboOn
	bool ____isTurboOn_4;
	// System.Single Chapter.Observer.HUDController::_currentHealth
	float ____currentHealth_5;
	// Chapter.Observer.BikeController Chapter.Observer.HUDController::_bikeController
	BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* ____bikeController_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Chapter.Observer.HUDController>()
inline HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* GameObject_AddComponent_TisHUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7_mAE69FB34A33835106E79A8A09F40FF4620330318 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void Chapter.Observer.BikeController::StartEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_StartEngine_mA46C6F6BC0E192E029235CAC8A9A4E74A9BA79AA (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void Chapter.Observer.Subject::Attach(Chapter.Observer.Observer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subject_Attach_m1FD1D8984AE4F51C43919BB6BAAE904E154CDA8F (Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* __this, Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF* ___observer0, const RuntimeMethod* method) ;
// System.Void Chapter.Observer.Subject::Detach(Chapter.Observer.Observer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subject_Detach_mB690D9DD9154BF0527970FE2BF75BC92BAEDDE31 (Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* __this, Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF* ___observer0, const RuntimeMethod* method) ;
// System.Void Chapter.Observer.Subject::NotifyObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subject_NotifyObservers_m26241F374FA80ED3B1571019BC7B5136D82042C1 (Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* __this, const RuntimeMethod* method) ;
// System.Boolean Chapter.Observer.BikeController::get_IsTurboOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BikeController_get_IsTurboOn_mDD4756266DFDFFDA567965469BF6E4763E6F8755_inline (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) ;
// System.Void Chapter.Observer.BikeController::set_IsTurboOn(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BikeController_set_IsTurboOn_m210AA6836E5F7B83132CC3A82DE09FBB7DEDFCF7_inline (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Chapter.Observer.Subject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subject__ctor_m9156C395F8F411C60837ACCBCD7124CFEB8A4F94 (Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Chapter.Observer.BikeController>()
inline BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* Component_GetComponent_TisBikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_mFED5E2A1FB0A5BC2BD6A6E572B57AE723743FF00 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Chapter.Observer.Observer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer__ctor_mD95CBA4BF6814D1EEF10288DB1F74797B26395FD (Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void Chapter.Observer.BikeController::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_TakeDamage_m395E050AC7F1D313C6AF46E9532E03119F108642 (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, float ___amount0, const RuntimeMethod* method) ;
// System.Void Chapter.Observer.BikeController::ToggleTurbo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_ToggleTurbo_m9BF9CB6F831E22720B5C971706F81BBAD3B5C5BA (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m63A6B16BD861709DD531E733184A02E685FDE669 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079 (const RuntimeMethod* method) ;
// System.Single Chapter.Observer.BikeController::get_CurrentHealth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BikeController_get_CurrentHealth_mD00BEAA242835548EA729C88BD35B7F343A43061_inline (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Boolean Chapter.Observer.BikeController::get_IsTurboOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BikeController_get_IsTurboOn_mDD4756266DFDFFDA567965469BF6E4763E6F8755 (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	{
		// get; private set;
		bool L_0 = __this->___U3CIsTurboOnU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Chapter.Observer.BikeController::set_IsTurboOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_set_IsTurboOn_m210AA6836E5F7B83132CC3A82DE09FBB7DEDFCF7 (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		bool L_0 = ___value0;
		__this->___U3CIsTurboOnU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Single Chapter.Observer.BikeController::get_CurrentHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BikeController_get_CurrentHealth_mD00BEAA242835548EA729C88BD35B7F343A43061 (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	{
		// get { return health; }
		float L_0 = __this->___health_9;
		return L_0;
	}
}
// System.Void Chapter.Observer.BikeController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_Awake_mD996127802D6881FDFD8D70351C2381028B6909D (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisHUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7_mAE69FB34A33835106E79A8A09F40FF4620330318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hudController =
		//     gameObject.AddComponent<HUDController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* L_1;
		L_1 = GameObject_AddComponent_TisHUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7_mAE69FB34A33835106E79A8A09F40FF4620330318(L_0, GameObject_AddComponent_TisHUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7_mAE69FB34A33835106E79A8A09F40FF4620330318_RuntimeMethod_var);
		__this->____hudController_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hudController_7), (void*)L_1);
		// _cameraController =
		//     (CameraController)
		//     FindObjectOfType(typeof(CameraController));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4;
		L_4 = Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E(L_3, NULL);
		__this->____cameraController_8 = ((CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE*)CastclassClass((RuntimeObject*)L_4, CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraController_8), (void*)((CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE*)CastclassClass((RuntimeObject*)L_4, CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Chapter.Observer.BikeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_Start_m221667D91093AA7044C06A7BC15682B8237BEF1F (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	{
		// StartEngine();
		BikeController_StartEngine_mA46C6F6BC0E192E029235CAC8A9A4E74A9BA79AA(__this, NULL);
		// }
		return;
	}
}
// System.Void Chapter.Observer.BikeController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_OnEnable_mE7AA96548463A0D27B51AC1ABA96133842352E26 (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_hudController)
		HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* L_0 = __this->____hudController_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Attach(_hudController);
		HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* L_2 = __this->____hudController_7;
		Subject_Attach_m1FD1D8984AE4F51C43919BB6BAAE904E154CDA8F(__this, L_2, NULL);
	}

IL_0019:
	{
		// if (_cameraController)
		CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE* L_3 = __this->____cameraController_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Attach(_cameraController);
		CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE* L_5 = __this->____cameraController_8;
		Subject_Attach_m1FD1D8984AE4F51C43919BB6BAAE904E154CDA8F(__this, L_5, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Chapter.Observer.BikeController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_OnDisable_mED676BAE87C891E6695E77FD987AEA66FADC1570 (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_hudController)
		HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* L_0 = __this->____hudController_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Detach(_hudController);
		HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* L_2 = __this->____hudController_7;
		Subject_Detach_mB690D9DD9154BF0527970FE2BF75BC92BAEDDE31(__this, L_2, NULL);
	}

IL_0019:
	{
		// if (_cameraController)
		CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE* L_3 = __this->____cameraController_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Detach(_cameraController);
		CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE* L_5 = __this->____cameraController_8;
		Subject_Detach_mB690D9DD9154BF0527970FE2BF75BC92BAEDDE31(__this, L_5, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Chapter.Observer.BikeController::StartEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_StartEngine_mA46C6F6BC0E192E029235CAC8A9A4E74A9BA79AA (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	{
		// _isEngineOn = true;
		__this->____isEngineOn_6 = (bool)1;
		// NotifyObservers();
		Subject_NotifyObservers_m26241F374FA80ED3B1571019BC7B5136D82042C1(__this, NULL);
		// }
		return;
	}
}
// System.Void Chapter.Observer.BikeController::ToggleTurbo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_ToggleTurbo_m9BF9CB6F831E22720B5C971706F81BBAD3B5C5BA (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	{
		// if (_isEngineOn)
		bool L_0 = __this->____isEngineOn_6;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// IsTurboOn = !IsTurboOn;
		bool L_1;
		L_1 = BikeController_get_IsTurboOn_mDD4756266DFDFFDA567965469BF6E4763E6F8755_inline(__this, NULL);
		BikeController_set_IsTurboOn_m210AA6836E5F7B83132CC3A82DE09FBB7DEDFCF7_inline(__this, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0017:
	{
		// NotifyObservers();
		Subject_NotifyObservers_m26241F374FA80ED3B1571019BC7B5136D82042C1(__this, NULL);
		// }
		return;
	}
}
// System.Void Chapter.Observer.BikeController::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController_TakeDamage_m395E050AC7F1D313C6AF46E9532E03119F108642 (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, float ___amount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health -= amount;
		float L_0 = __this->___health_9;
		float L_1 = ___amount0;
		__this->___health_9 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// IsTurboOn = false;
		BikeController_set_IsTurboOn_m210AA6836E5F7B83132CC3A82DE09FBB7DEDFCF7_inline(__this, (bool)0, NULL);
		// NotifyObservers();
		Subject_NotifyObservers_m26241F374FA80ED3B1571019BC7B5136D82042C1(__this, NULL);
		// if (health < 0)
		float L_2 = __this->___health_9;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Chapter.Observer.BikeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BikeController__ctor_m59543FBFEAC65190E8EFD1C99F7C04D107CC0319 (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float health = 100.0f;
		__this->___health_9 = (100.0f);
		Subject__ctor_m9156C395F8F411C60837ACCBCD7124CFEB8A4F94(__this, NULL);
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
// System.Void Chapter.Observer.CameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_OnEnable_mF6D55DD85AA0F180C8468BFDA288E974E97A2D8A (CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE* __this, const RuntimeMethod* method) 
{
	{
		// _initialPosition =
		//     gameObject.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->____initialPosition_5 = L_2;
		// }
		return;
	}
}
// System.Void Chapter.Observer.CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_mD59FBB5F9F379B29FCE06591783755DF9C282367 (CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE* __this, const RuntimeMethod* method) 
{
	{
		// if (_isTurboOn)
		bool L_0 = __this->____isTurboOn_4;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		// gameObject.transform.localPosition =
		//     _initialPosition +
		//     (Random.insideUnitSphere * _shakeMagnitude);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____initialPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		float L_5 = __this->____shakeMagnitude_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_6, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_7, NULL);
		return;
	}

IL_0034:
	{
		// gameObject.transform.
		//     localPosition = _initialPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->____initialPosition_5;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Chapter.Observer.CameraController::Notify(Chapter.Observer.Subject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Notify_mF44F055D234C7E0D5D4774E36B7BB546A26E6D2A (CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE* __this, Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* ___subject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_mFED5E2A1FB0A5BC2BD6A6E572B57AE723743FF00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_bikeController)
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_0 = __this->____bikeController_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _bikeController =
		//     subject.GetComponent<BikeController>();
		Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* L_2 = ___subject0;
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_3;
		L_3 = Component_GetComponent_TisBikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_mFED5E2A1FB0A5BC2BD6A6E572B57AE723743FF00(L_2, Component_GetComponent_TisBikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_mFED5E2A1FB0A5BC2BD6A6E572B57AE723743FF00_RuntimeMethod_var);
		__this->____bikeController_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bikeController_7), (void*)L_3);
	}

IL_0019:
	{
		// if (_bikeController)
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_4 = __this->____bikeController_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// _isTurboOn = _bikeController.IsTurboOn;
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_6 = __this->____bikeController_7;
		bool L_7;
		L_7 = BikeController_get_IsTurboOn_mDD4756266DFDFFDA567965469BF6E4763E6F8755_inline(L_6, NULL);
		__this->____isTurboOn_4 = L_7;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Chapter.Observer.CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m44F1DF321095935A5A08C485C8887C5EB6CA109B (CameraController_t8B838C826F3F5CE248CD59013882267D52FFBDAE* __this, const RuntimeMethod* method) 
{
	{
		// private float _shakeMagnitude = 0.1f;
		__this->____shakeMagnitude_6 = (0.100000001f);
		Observer__ctor_mD95CBA4BF6814D1EEF10288DB1F74797B26395FD(__this, NULL);
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
// System.Void Chapter.Observer.ClientObserver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientObserver_Start_m827E0C0B87392A4E0CD295CD3C97D6230E6B07D8 (ClientObserver_tC898BB4C5AF320007DD811D16E3CE56E5FF8F6DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bikeController =
		//     (BikeController)
		//     FindObjectOfType(typeof(BikeController));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E(L_1, NULL);
		__this->____bikeController_4 = ((BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED*)CastclassClass((RuntimeObject*)L_2, BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bikeController_4), (void*)((BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED*)CastclassClass((RuntimeObject*)L_2, BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Chapter.Observer.ClientObserver::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientObserver_OnGUI_m0BBBDD8BCA8B4FE28FDF19436068722E3D6A35A1 (ClientObserver_tC898BB4C5AF320007DD811D16E3CE56E5FF8F6DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94D3BDA79A3B54A629BE69804BD73939C06AA730);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA98D44EB43788250E51BC4CCD3AD1216F8D5A290);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GUILayout.Button("Damage Bike"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_1;
		L_1 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteral94D3BDA79A3B54A629BE69804BD73939C06AA730, L_0, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// if (_bikeController)
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_2 = __this->____bikeController_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// _bikeController.TakeDamage(15.0f);
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_4 = __this->____bikeController_4;
		BikeController_TakeDamage_m395E050AC7F1D313C6AF46E9532E03119F108642(L_4, (15.0f), NULL);
	}

IL_002e:
	{
		// if (GUILayout.Button("Toggle Turbo"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_5;
		L_5 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_6;
		L_6 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteralA98D44EB43788250E51BC4CCD3AD1216F8D5A290, L_5, NULL);
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// if (_bikeController)
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_7 = __this->____bikeController_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// _bikeController.ToggleTurbo();
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_9 = __this->____bikeController_4;
		BikeController_ToggleTurbo_m9BF9CB6F831E22720B5C971706F81BBAD3B5C5BA(L_9, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Chapter.Observer.ClientObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientObserver__ctor_mA2A77CAD627591C3C79E2CA8F4A73127830A0C7F (ClientObserver_tC898BB4C5AF320007DD811D16E3CE56E5FF8F6DD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Chapter.Observer.HUDController::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDController_OnGUI_m002E43156B289780C0FECDBAB2E3E96BB598382C (HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral120EC6C0BE2C1AC95E2B4052C03CBE1263A562FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB848A7663EFB4DC4C6F85E96DD7DD1B01124052B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF95DF5537184AB57CFCFB85BBF9C1A3E252B1A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUILayout.BeginArea(
		//     new Rect(50, 50, 100, 200));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (50.0f), (50.0f), (100.0f), (200.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64(L_0, NULL);
		// GUILayout.BeginHorizontal("box");
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2;
		L_2 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m63A6B16BD861709DD531E733184A02E685FDE669(L_1, L_2, NULL);
		// GUILayout.Label("Health: " + _currentHealth);
		float* L_3 = (&__this->____currentHealth_5);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFF95DF5537184AB57CFCFB85BBF9C1A3E252B1A4, L_4, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_6;
		L_6 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_5, L_6, NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// if (_isTurboOn)
		bool L_7 = __this->____isTurboOn_4;
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		// GUILayout.BeginHorizontal("box");
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8;
		L_8 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_9;
		L_9 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m63A6B16BD861709DD531E733184A02E685FDE669(L_8, L_9, NULL);
		// GUILayout.Label("Turbo Activated!");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_10;
		L_10 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteral120EC6C0BE2C1AC95E2B4052C03CBE1263A562FF, L_10, NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
	}

IL_0086:
	{
		// if (_currentHealth <= 50.0f)
		float L_11 = __this->____currentHealth_5;
		if ((!(((float)L_11) <= ((float)(50.0f)))))
		{
			goto IL_00bb;
		}
	}
	{
		// GUILayout.BeginHorizontal("box");
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12;
		L_12 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_13;
		L_13 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m63A6B16BD861709DD531E733184A02E685FDE669(L_12, L_13, NULL);
		// GUILayout.Label("WARNING: Low Health");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_14;
		L_14 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralB848A7663EFB4DC4C6F85E96DD7DD1B01124052B, L_14, NULL);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
	}

IL_00bb:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079(NULL);
		// }
		return;
	}
}
// System.Void Chapter.Observer.HUDController::Notify(Chapter.Observer.Subject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDController_Notify_mDB363487D498D01CD32D6533115FF5300D409E3B (HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* __this, Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* ___subject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_mFED5E2A1FB0A5BC2BD6A6E572B57AE723743FF00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_bikeController)
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_0 = __this->____bikeController_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _bikeController =
		//     subject.GetComponent<BikeController>();
		Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* L_2 = ___subject0;
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_3;
		L_3 = Component_GetComponent_TisBikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_mFED5E2A1FB0A5BC2BD6A6E572B57AE723743FF00(L_2, Component_GetComponent_TisBikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED_mFED5E2A1FB0A5BC2BD6A6E572B57AE723743FF00_RuntimeMethod_var);
		__this->____bikeController_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bikeController_6), (void*)L_3);
	}

IL_0019:
	{
		// if (_bikeController)
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_4 = __this->____bikeController_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// _isTurboOn =
		//     _bikeController.IsTurboOn;
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_6 = __this->____bikeController_6;
		bool L_7;
		L_7 = BikeController_get_IsTurboOn_mDD4756266DFDFFDA567965469BF6E4763E6F8755_inline(L_6, NULL);
		__this->____isTurboOn_4 = L_7;
		// _currentHealth =
		//     _bikeController.CurrentHealth;
		BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* L_8 = __this->____bikeController_6;
		float L_9;
		L_9 = BikeController_get_CurrentHealth_mD00BEAA242835548EA729C88BD35B7F343A43061_inline(L_8, NULL);
		__this->____currentHealth_5 = L_9;
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Chapter.Observer.HUDController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUDController__ctor_mF05BDE40B96759A197FEF92150FF687874C967FA (HUDController_tFA7DBD6E5D6A0DE8BEEE84909C96ECF7C85D1DD7* __this, const RuntimeMethod* method) 
{
	{
		Observer__ctor_mD95CBA4BF6814D1EEF10288DB1F74797B26395FD(__this, NULL);
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
// System.Void Chapter.Observer.Observer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer__ctor_mD95CBA4BF6814D1EEF10288DB1F74797B26395FD (Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Chapter.Observer.Subject::Attach(Chapter.Observer.Observer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subject_Attach_m1FD1D8984AE4F51C43919BB6BAAE904E154CDA8F (Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* __this, Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF* ___observer0, const RuntimeMethod* method) 
{
	{
		// _observers.Add(observer);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____observers_4;
		Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF* L_1 = ___observer0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Chapter.Observer.Subject::Detach(Chapter.Observer.Observer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subject_Detach_mB690D9DD9154BF0527970FE2BF75BC92BAEDDE31 (Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* __this, Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF* ___observer0, const RuntimeMethod* method) 
{
	{
		// _observers.Remove(observer);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____observers_4;
		Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF* L_1 = ___observer0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(35 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Chapter.Observer.Subject::NotifyObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subject_NotifyObservers_m26241F374FA80ED3B1571019BC7B5136D82042C1 (Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (Observer observer in _observers)
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____observers_4;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(31 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000e_1:
			{
				// foreach (Observer observer in _observers)
				RuntimeObject* L_5 = V_0;
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// observer.Notify(this);
				VirtualActionInvoker1< Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* >::Invoke(4 /* System.Void Chapter.Observer.Observer::Notify(Chapter.Observer.Subject) */, ((Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF*)CastclassClass((RuntimeObject*)L_6, Observer_tDFECC1B89755EE575679E37EB6D03A23A9FC5FAF_il2cpp_TypeInfo_var)), __this);
			}

IL_001f_1:
			{
				// foreach (Observer observer in _observers)
				RuntimeObject* L_7 = V_0;
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Chapter.Observer.Subject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subject__ctor_m9156C395F8F411C60837ACCBCD7124CFEB8A4F94 (Subject_t7DFC7D1815C337B5B373820260FB85489D3EF123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly
		//     ArrayList _observers = new ArrayList();
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->____observers_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____observers_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BikeController_get_IsTurboOn_mDD4756266DFDFFDA567965469BF6E4763E6F8755_inline (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	{
		// get; private set;
		bool L_0 = __this->___U3CIsTurboOnU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BikeController_set_IsTurboOn_m210AA6836E5F7B83132CC3A82DE09FBB7DEDFCF7_inline (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		bool L_0 = ___value0;
		__this->___U3CIsTurboOnU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BikeController_get_CurrentHealth_mD00BEAA242835548EA729C88BD35B7F343A43061_inline (BikeController_t0F4EAD73A0EE6960BA03186DBD8211144B1138ED* __this, const RuntimeMethod* method) 
{
	{
		// get { return health; }
		float L_0 = __this->___health_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
