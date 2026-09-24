#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { p1, p2, &p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9;
struct Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14;
struct EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93;
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E;
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6;
struct EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581;
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630;
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121;
struct Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E;
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D;
struct Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE;
struct Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct IEnumerable_1_tED602875C5D5C7BECAD2C641945DF5416536FA7B;
struct IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1;
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
struct IEnumerable_1_t4090E8CF3CA50BDD8A30A5ADC2C2A61569E8AAB1;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t9C73E2DA2A24734B7BEE3997930B156A82172C56;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tF74C952F97E24A4AFD21162637D82942513CB35B;
struct IOrderedEnumerable_1_tC720FA06F1A450C4355F836CB7F7A6E72A5BD8B6;
struct IOrderedEnumerable_1_t47B44EAE2700201C62BD67464EC9C6B062452808;
struct Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC;
struct List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C;
struct List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154;
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064;
struct List_1_tF9F2510E1F31EAAB4FF93BF5D2FD123A1BA401D8;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255;
struct Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7;
struct Predicate_1_tC70EF82F76454E8488FD15B6F05EDEBE7491B355;
struct ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76;
struct ReadOnlyCollection_1_t6B7DBAE606F01BC50D92947B4B66E0A9EB9BDF64;
struct VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810;
struct VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF;
struct VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC;
struct VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546;
struct VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF;
struct VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239;
struct VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8;
struct VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B;
struct VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98;
struct VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C;
struct VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312;
struct VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3;
struct VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86;
struct WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180;
struct WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547;
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6;
struct WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2;
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B;
struct WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121;
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0;
struct WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375;
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174;
struct WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379;
struct WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C;
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C;
struct WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601;
struct WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285;
struct ValueTuple_2U5BU5D_t76AF1876C6906F5A52DD507AC0D00139315E9453;
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959;
struct VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143;
struct VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct FieldInfo_t;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct VolumeCollection_t77FAA5F213B6C65136416F16C37041371D041408;
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
struct VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833;
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621;
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72;
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C  : public RuntimeObject
{
	Type_t* ___value;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14  : public RuntimeObject
{
};
struct EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93  : public RuntimeObject
{
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E  : public RuntimeObject
{
};
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6  : public RuntimeObject
{
};
struct EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581  : public RuntimeObject
{
};
struct Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Il2CppSharedGenericObject* ___current;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C  : public RuntimeObject
{
	ValueTuple_2U5BU5D_t76AF1876C6906F5A52DD507AC0D00139315E9453* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E  : public RuntimeObject
{
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255  : public RuntimeObject
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810  : public RuntimeObject
{
	int32_t ___U3CselectedComponentU3Ek__BackingField;
	int32_t ___m_SelectedCameraIndex;
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___m_CamerasArray;
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_Cameras;
	Type_t* ___U3CtargetRenderPipelineU3Ek__BackingField;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights;
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___volumes;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___savedStates;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621  : public RuntimeObject
{
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___U3CstackU3Ek__BackingField;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_BaseComponentTypeArray;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___U3CglobalDefaultProfileU3Ek__BackingField;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___U3CqualityDefaultProfileU3Ek__BackingField;
	ReadOnlyCollection_1_t6B7DBAE606F01BC50D92947B4B66E0A9EB9BDF64* ___U3CcustomDefaultProfilesU3Ek__BackingField;
	VolumeCollection_t77FAA5F213B6C65136416F16C37041371D041408* ___m_VolumeCollection;
	VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143* ___m_ComponentsDefaultState;
	VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103* ___m_ParametersDefaultState;
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___m_DefaultStack;
	List_1_tF9F2510E1F31EAAB4FF93BF5D2FD123A1BA401D8* ___m_CreatedVolumeStacks;
	bool ___U3CisInitializedU3Ek__BackingField;
};
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72  : public RuntimeObject
{
	bool ___m_OverrideState;
};
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8  : public RuntimeObject
{
	Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A* ___components;
	VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103* ___parameters;
	bool ___requiresReset;
	bool ___requiresResetForAllProperties;
	bool ___U3CisValidU3Ek__BackingField;
};
struct Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A 
{
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ____list;
	int32_t ____index;
	int32_t ____version;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____current;
};
struct Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 
{
	String_t* ___Item1;
	Type_t* ___Item2;
};
struct ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A 
{
	Il2CppSharedGenericObject* ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	bool ___m_Value;
};
struct VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	int32_t ___m_Value;
};
struct VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	float ___m_Value;
};
struct VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Il2CppSharedGenericObject* ___m_Value;
};
struct VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3 : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72 {};
struct VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	int32_t ___m_Value;
};
struct WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	int32_t ___index;
};
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6 : public RuntimeObject {};
struct WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174 : public RuntimeObject {};
struct WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___selector;
	int32_t ___index;
};
struct WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C : public RuntimeObject {};
struct WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___selector;
	RuntimeObject* ___enumerator;
};
struct WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FieldInfo_t  : public MemberInfo_t
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 
{
	uint32_t ___m_Bits;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___menu;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
};
struct VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_Value;
};
struct VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___m_Value;
};
struct VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Value;
};
struct VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Value;
};
struct VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Value;
};
struct WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ___enumerator;
};
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0 : public RuntimeObject {};
struct WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___selector;
	Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ___enumerator;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___selector;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	int32_t ___value__;
};
struct CameraType_tCA1017DBE96964E1D967942FB98F152F14121FCD 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833  : public VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CpipelineTypesU3Ek__BackingField;
};
struct DirtyState_tA2B5B7213371CBEB225ADD2494E395A7C3AC8BA9 
{
	int32_t ___value__;
};
struct WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180  : public RuntimeObject
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle;
	bool ___trackResurrection;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630  : public MulticastDelegate_t
{
};
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121  : public MulticastDelegate_t
{
};
struct Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E  : public MulticastDelegate_t
{
};
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D  : public MulticastDelegate_t
{
};
struct Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE  : public MulticastDelegate_t
{
};
struct Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A  : public MulticastDelegate_t
{
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___active;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103* ___parameterList;
	ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76* ___m_ParameterReadOnlyCollection;
};
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___components;
	int32_t ___dirtyState;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	uint32_t ___m_NonSerializedVersion;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ___m_IsGlobal;
	float ___priority;
	float ___blendDistance;
	float ___weight;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___sharedProfile;
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CachedGameObject;
	int32_t ___m_PreviousLayer;
	float ___m_PreviousPriority;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___m_InternalProfile;
};
struct U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields
{
	U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07* ___U3CU3E9;
	Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* ___U3CU3E9__34_0;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___U3CU3E9__36_0;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__43_0;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__43_1;
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___U3CU3E9__43_2;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6_StaticFields
{
	EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14_StaticFields
{
	EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* ___defaultComparer;
};
struct EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93_StaticFields
{
	EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* ___defaultComparer;
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer;
};
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields
{
	EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* ___defaultComparer;
};
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields
{
	EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* ___defaultComparer;
};
struct EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49_StaticFields
{
	EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields
{
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* ___defaultComparer;
};
struct List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C_StaticFields
{
	ValueTuple_2U5BU5D_t76AF1876C6906F5A52DD507AC0D00139315E9453* ___s_emptyArray;
};
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E_StaticFields
{
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___s_emptyArray;
};
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray;
};
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255_StaticFields
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___s_emptyArray;
};
struct VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields
{
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___s_ComponentTypes;
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___U3CadditionalCameraDatasU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfilerMarkerInitialize;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfilerMarkerInitializeBaseTypesArray;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfilerMarkerUpdate;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfilerMarkerReplaceData;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfilerMarkerEvaluateVolumeDefaultState;
	Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC* ___s_Instance;
	Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9* ___s_SupportedVolumeComponentsForRenderPipeline;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1_StaticFields
{
	RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___U3CdefaultRenderingLayerMaskU3Ek__BackingField;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959  : public RuntimeArray
{
	ALIGN_FIELD (8) Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* m_Items[1];

	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D  : public RuntimeArray
{
	ALIGN_FIELD (8) VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* m_Items[1];

	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAt(il2cpp_array_size_t i0, il2cpp_array_size_t i1) const
	{
		il2cpp_array_size_t i0Bound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i0, i0Bound);
		il2cpp_array_size_t i1Bound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i1, i1Bound);

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAt(il2cpp_array_size_t i0, il2cpp_array_size_t i1)
	{
		il2cpp_array_size_t i0Bound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i0, i0Bound);
		il2cpp_array_size_t i1Bound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i1, i1Bound);

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i0, il2cpp_array_size_t i1, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		il2cpp_array_size_t i0Bound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i0, i0Bound);
		il2cpp_array_size_t i1Bound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i1, i1Bound);

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAtUnchecked(il2cpp_array_size_t i0, il2cpp_array_size_t i1) const
	{
		il2cpp_array_size_t i1Bound = bounds[1].length;

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAtUnchecked(il2cpp_array_size_t i0, il2cpp_array_size_t i1)
	{
		il2cpp_array_size_t i1Bound = bounds[1].length;

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i0, il2cpp_array_size_t i1, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		il2cpp_array_size_t i1Bound = bounds[1].length;

		il2cpp_array_size_t index = i0 * i1Bound + i1;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedCameraIndex_mA77DC652AACBAE194B9089C22F70C96F3A85544C_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeDebugSettings_1_get_cameras_mADF83AF6C4BF0D5DB5211699B9A04F7C550928F3_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerable_ElementAt_TisIl2CppSharedGenericObject_mB3CDCD8267FCD7C366EC318D2EEE635E66A5449F_gshared (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisIl2CppSharedGenericObject_mF3369EA7F96F7D6C91301FC628A8EBBFE1B16F82_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisIl2CppSharedGenericObject_m28AC4EF899475CB4F9377453368991A021B312A8_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppSharedGenericObject** ___0_component, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedComponent_mDDD81E043C74714006904E94455F7318910C0F20_gshared_inline (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeDebugSettings_1_get_volumeComponentsPathAndType_mD06C58AF8184043EEEB75E3FADC2B0CADF55C64C_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A List_1_get_Item_m2F8C223A2466B2F86CF949A2A5C3DE50380C70B1_gshared (List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mDA63AA372C09CD402B80A33A5F5316F2FC611BDD_gshared (U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2D4A794EAB6A8DA0D064C54FCAC0DCD4145FAAB2_gshared (Predicate_1_tC70EF82F76454E8488FD15B6F05EDEBE7491B355* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mA423A19760D3D58D47DD42944D631B064206F184_gshared (List_1_t803345A2608AC0FE0B232DF70BA6DD3A04A07154* __this, Predicate_1_tC70EF82F76454E8488FD15B6F05EDEBE7491B355* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponent_m5C4F4AD8B1B6E0CA4A947C1CD28B04F61BA03924_gshared_inline (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* VolumeDebugSettings_1_get_selectedComponentType_mE3D08241596F4628F3898A3B2C225C4B9547458E_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m6803F93107C0B0DDA7DF4641CA447744E1CB9EEC_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___0_component, FieldInfo_t* ___1_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisIl2CppSharedGenericObject_m30F347C887F29E525C6BA3426F434E27A7738101_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, Il2CppSharedGenericObject** ___1_component, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD5CB9146005B12D9E7D7390E961933AB12147A62_gshared (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1826B059AE05490949E13D5D65BAEF9B786B8882_gshared (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisIl2CppSharedGenericObject_m60EAC1A330E00B2D7E6FD4AECBF783294EC34DF6_gshared (RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisIl2CppSharedGenericObject_mD3087AD5FEACECF5FDFD23C09A30D62701FFCEEB_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Enumerable_ToArray_TisIl2CppSharedGenericObject_mCEC6A846A11C893E2B3BE3B6D36035AD28BE6CF5_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisIl2CppSharedGenericObject_m736876ED8A48293C04D0EA2588523B8E02D19A36_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* VolumeDebugSettings_1_GetStates_m12C7E8CDB9628E0A375BE11E611CAA1EFA9E1C11_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_ChangedStates_m7A6DA4A4B84E0EFF84ACB419252A968513727106_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___0_newStates, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeDebugSettings_1_ComputeWeight_mF129240E543C352B39A84A7B1051F64A4A10D58D_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_triggerPos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9A091D2D3A9BB86C16A9FD560B3EC145822CDF1F_gshared (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m1FCB0AB8AA1295B54174A81C618C1069CBC7BE1D_gshared (RuntimeObject* ___0_source, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___1_keySelector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* Enumerable_ToList_TisIl2CppSharedGenericObject_mFF96E16527D742B009531AEA8672FF89A8A379E2_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* VolumeDebugSettings_1_get_additionalCameraDatas_mF2056E865A184BFECF646C2024BCC6601FF0F296_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m2B803AB4CFC534E1F7CBDFD8A9E8FA103899CBF8_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, bool ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m365BAB60E012F498CA8ED185B37F9F9338D56D2C_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* ___0_lhs, bool ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mD66BF5B24046A2C4B9E4132D8F476036F4C2A4C0_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1EF476645F5850C9D1AA95CA55F741FBBDB735B6_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mEBA6B22D06D46A72863645418176B2B791E4298E_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* EqualityComparer_1_get_Default_m8A94230D4FB56AB744C44882EC683E13F51A6F33_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m15F415AF2D5223BF39AAB744A4ADEB86D05D4254_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mF8DF607F38AF0959CC9AF26B10A025BD50BFAECD_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VolumeParameter_GetValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8B7E31181FEC2F5B762A80FEDF27DAF31E73C30F_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m7A6F00C74323CBDC5511BD9FFEF7A0E065473B2A_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, int32_t ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mB3FB376A5DFE74EFBB33AE12BE611246AAD6080C_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* ___0_lhs, int32_t ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m7D4548D6494840E1BEA38C35787CFBFD311723AB_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4319DCF1CDC5AEE67EE47027F2D95657332CBE54_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mF598242FF5BB25AF4058F0C037D218B94A606B11_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* EqualityComparer_1_get_Default_m7AFCDE94579F5CB2C18BE6D083953C19EE5D6C0D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m91EC3ECF0762496BBD86220098949F0DEC7DA5EE_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* ___0_lhs, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m65B18E6565CB450ACDCFDB52ED9865176787CAB1_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB VolumeParameter_GetValue_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mFD31FB50A06F90EB4FA089D0E635541E716E1B0D_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m9FAB30EECF5312F78D8C69CA0295F5F402041AEB_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* EqualityComparer_1_get_Default_mF1A82E96D060D6B82C312E403E68BF2295DF4E49_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m3CB43EF211BD373674FD15E2883A09398C83BE53_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* ___0_lhs, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mFE64880B420F713BF8EFC5418756927407CC1459_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 VolumeParameter_GetValue_TisRenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1_m3EE80C613431CD5972D6F7028792594EB126B22C_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m7B3C3D31406CB70EDBAD17087C61BE2F72E74B65_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, float ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mF12900D701F8933501AFD3ABB54E79CA9BE100E7_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* ___0_lhs, float ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m436DBD7738EA616BDB8D8B071E9DE7242A794996_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m726AF9294ED67B0B16638E5F5D846CE9C7F911DD_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m7D300F6DFB90CA62B4543FD742D4114B1B60611D_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m11A43D181D3DDE97F8397E3C99E54B69FC02A128_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m2EAE04A82CF93667E19E71B5ADC5BC47EC402537_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 VolumeParameter_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD6257CDB298BD9F43258404B48F12F640076E5CF_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m4A316505E0024C58728C0820BA2D1BC613430872_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m3F2BFD14AC786F44C7819FE86B934FEE9BDFB18B_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m0BD0D479690B17401797CB4441E114970A3476EB_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VolumeParameter_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0BFECF14A9561DC70FDFF99AD44E6C81E163840_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mE6EC5FD018557E4587232EEB1EFF72469EF04116_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* EqualityComparer_1_get_Default_m90A2DF3D4BA23B0DCCB322B1DEF2E808102952A2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mD9C48454E02B82560CAB02993BD3EFBEE7ECF3C5_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m68012375ECF20F176C5D1A529E688718D74D02DF_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 VolumeParameter_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA76DCA04631B12C65AAD65BAED699B30BB3C471B_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m13751D1A8F6AC4D8A296A07F0C14A396AD27D428_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, Il2CppSharedGenericObject* ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m2F6113C18AF0AAD9B14C33DC5BDCB435359EE3E9_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* ___0_lhs, Il2CppSharedGenericObject* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m88DB05E913382A1A6AE183B9877875349C866ED6_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* VolumeParameter_GetValue_TisIl2CppSharedGenericObject_m1A181CB708DB02EC52D3E7793AA3C4692A3188E4_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m70508BCB9F5865418A150EE673A6427870A59465_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, int32_t ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m5FD3D0F9F083CA946C24FEE5315560B181F1D4C0_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* ___0_lhs, int32_t ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m8ED6C08D00A26D41DD9529DE530240A83EAF381E_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE40AE16776FF3B42C9A2683D870A5648BACFC0D6_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m56E7381CF8F98C0E7BAE715681E43557C38E841E_gshared (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180* __this, Il2CppSharedGenericObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD_gshared (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m4A9B8B4E9C52A089FB47DF5F2DC936EF61EAF07F_gshared (WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_gshared_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5_gshared (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate1, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377_gshared (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100_gshared (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m0D34CE1A5CC641C5B010E503A0EDABA731F37317_gshared (WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_gshared_inline (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mA846116E73B9D1D46FEF744F0F0DEA950C8BA2C4_gshared (WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601* __this, RuntimeObject* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8_gshared (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A_gshared (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77_gshared (int32_t ___0_min, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* EqualityComparer_1_CreateComparer_m292E631CDD1D443ABAA4D42813991D22B0DF411C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* EqualityComparer_1_CreateComparer_m92D8CD42AF756A8892DDECEFB0ED82B99A1FC560_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* EqualityComparer_1_CreateComparer_m3A9FA9FF1F29EA76B7878EDBAB86B49866E4273A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_CreateComparer_m4F66B7A3ECD1D02DC13599965C749DBC67DDC516_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* EqualityComparer_1_CreateComparer_mEDDB86BF4859FA5C974D6CD81A4A7FDC3ABB1CC5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared (const RuntimeMethod* method) ;

inline int32_t VolumeDebugSettings_1_get_selectedCameraIndex_mA77DC652AACBAE194B9089C22F70C96F3A85544C (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, const RuntimeMethod*))VolumeDebugSettings_1_get_selectedCameraIndex_mA77DC652AACBAE194B9089C22F70C96F3A85544C_gshared)(__this, method);
}
inline RuntimeObject* VolumeDebugSettings_1_get_cameras_mADF83AF6C4BF0D5DB5211699B9A04F7C550928F3 (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, const RuntimeMethod*))VolumeDebugSettings_1_get_cameras_mADF83AF6C4BF0D5DB5211699B9A04F7C550928F3_gshared)(__this, method);
}
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisIl2CppSharedGenericObject_mB3CDCD8267FCD7C366EC318D2EEE635E66A5449F_gshared)(___0_source, ___1_index, method);
}
inline int32_t Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisIl2CppSharedGenericObject_mF3369EA7F96F7D6C91301FC628A8EBBFE1B16F82_gshared)(___0_source, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Math_Clamp_mAB687477D3AAC0E7243D724F45626026980CE2FF_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
inline void List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_allCamerasCount_m7B9CAA9E8F2BC5587942A4CCBF4D6CA1FFD01BDC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_GetAllCameras_m55D302710121EEBC17D2F6EE4AE975C37ECC53F4 (CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___0_cameras, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
inline bool Component_TryGetComponent_TisIl2CppSharedGenericObject_m28AC4EF899475CB4F9377453368991A021B312A8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppSharedGenericObject** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppSharedGenericObject**, const RuntimeMethod*))Component_TryGetComponent_TisIl2CppSharedGenericObject_m28AC4EF899475CB4F9377453368991A021B312A8_gshared)(__this, ___0_component, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline void List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline int32_t VolumeDebugSettings_1_get_selectedComponent_mDDD81E043C74714006904E94455F7318910C0F20_inline (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, const RuntimeMethod*))VolumeDebugSettings_1_get_selectedComponent_mDDD81E043C74714006904E94455F7318910C0F20_gshared_inline)(__this, method);
}
inline List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeDebugSettings_1_get_volumeComponentsPathAndType_mD06C58AF8184043EEEB75E3FADC2B0CADF55C64C (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method)
{
	return ((  List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, const RuntimeMethod*))VolumeDebugSettings_1_get_volumeComponentsPathAndType_mD06C58AF8184043EEEB75E3FADC2B0CADF55C64C_gshared)(__this, method);
}
inline ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286 (List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 (*) (List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C*, int32_t, const RuntimeMethod*))List_1_get_Item_m2F8C223A2466B2F86CF949A2A5C3DE50380C70B1_gshared)(__this, ___0_index, method);
}
inline void U3CU3Ec__DisplayClass22_0__ctor_mDA63AA372C09CD402B80A33A5F5316F2FC611BDD (U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C*, const RuntimeMethod*))U3CU3Ec__DisplayClass22_0__ctor_mDA63AA372C09CD402B80A33A5F5316F2FC611BDD_gshared)(__this, method);
}
inline void Predicate_1__ctor_m2A873182717A1B746A08E8A60B68D63ACFD144BF (Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2D4A794EAB6A8DA0D064C54FCAC0DCD4145FAAB2_gshared)(__this, ___0_object, ___1_method, method);
}
inline int32_t List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4 (List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* __this, Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C*, Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7*, const RuntimeMethod*))List_1_FindIndex_mA423A19760D3D58D47DD42944D631B064206F184_gshared)(__this, ___0_match, method);
}
inline void VolumeDebugSettings_1_set_selectedComponent_m5C4F4AD8B1B6E0CA4A947C1CD28B04F61BA03924_inline (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, int32_t, const RuntimeMethod*))VolumeDebugSettings_1_set_selectedComponent_m5C4F4AD8B1B6E0CA4A947C1CD28B04F61BA03924_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* GraphicsSettings_get_currentRenderPipelineAssetType_m72CAAF0AAB3BD48DDAEF0087B12ACDDD6B007404 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeManager_GetVolumeComponentsForDisplay_m5D246FCE6526D6F83485745E8F4CFC694AFECDE8 (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, Type_t* ___0_currentPipelineAssetType, const RuntimeMethod* method) ;
inline Type_t* VolumeDebugSettings_1_get_selectedComponentType_mE3D08241596F4628F3898A3B2C225C4B9547458E (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, const RuntimeMethod*))VolumeDebugSettings_1_get_selectedComponentType_mE3D08241596F4628F3898A3B2C225C4B9547458E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m6803F93107C0B0DDA7DF4641CA447744E1CB9EEC (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___0_component, FieldInfo_t* ___1_field, const RuntimeMethod* method)
{
	return ((  VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1*, FieldInfo_t*, const RuntimeMethod*))VolumeDebugSettings_1_GetParameter_m6803F93107C0B0DDA7DF4641CA447744E1CB9EEC_gshared)(__this, ___0_component, ___1_field, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4 (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
inline bool VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9 (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1** ___1_component, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*, Type_t*, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1**, const RuntimeMethod*))VolumeProfile_TryGet_TisIl2CppSharedGenericObject_m30F347C887F29E525C6BA3426F434E27A7738101_gshared)(__this, ___0_type, ___1_component, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Volume_get_isGlobal_m09C1E1FB39D06DD9EC78DF276DE9A1FBE3E42763_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* Volume_get_colliders_m0950CE61A71643C572215A4598F769824E1C2E4C_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
inline Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420 (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared)(__this, method);
}
inline void Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A*, const RuntimeMethod*))Enumerator_Dispose_mD5CB9146005B12D9E7D7390E961933AB12147A62_gshared)(__this, method);
}
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_inline (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A*, const RuntimeMethod*))Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1 (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A*, const RuntimeMethod*))Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* VolumeManager_GetVolumes_mCD6F01BC37F4C6833FF56635904021D3E087BBDA (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_layerMask, const RuntimeMethod* method) ;
inline void Func_2__ctor_mE062569723CD2676B37650ADE8A6BBE243E2CA72 (Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1826B059AE05490949E13D5D65BAEF9B786B8882_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055 (RuntimeObject* ___0_source, Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E*, const RuntimeMethod*))Enumerable_Where_TisIl2CppSharedGenericObject_m60EAC1A330E00B2D7E6FD4AECBF783294EC34DF6_gshared)(___0_source, ___1_predicate, method);
}
inline RuntimeObject* Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisIl2CppSharedGenericObject_mD3087AD5FEACECF5FDFD23C09A30D62701FFCEEB_gshared)(___0_source, method);
}
inline VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppSharedGenericObject_mCEC6A846A11C893E2B3BE3B6D36035AD28BE6CF5_gshared)(___0_source, method);
}
inline void Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3 (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1826B059AE05490949E13D5D65BAEF9B786B8882_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90 (RuntimeObject* ___0_source, Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*, const RuntimeMethod*))Enumerable_Where_TisIl2CppSharedGenericObject_m60EAC1A330E00B2D7E6FD4AECBF783294EC34DF6_gshared)(___0_source, ___1_predicate, method);
}
inline FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppSharedGenericObject_mCEC6A846A11C893E2B3BE3B6D36035AD28BE6CF5_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline bool Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisIl2CppSharedGenericObject_m736876ED8A48293C04D0EA2588523B8E02D19A36_gshared)(___0_first, ___1_second, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* VolumeDebugSettings_1_GetStates_m12C7E8CDB9628E0A375BE11E611CAA1EFA9E1C11 (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method)
{
	return ((  VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, const RuntimeMethod*))VolumeDebugSettings_1_GetStates_m12C7E8CDB9628E0A375BE11E611CAA1EFA9E1C11_gshared)(__this, method);
}
inline bool VolumeDebugSettings_1_ChangedStates_m7A6DA4A4B84E0EFF84ACB419252A968513727106 (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___0_newStates, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*, const RuntimeMethod*))VolumeDebugSettings_1_ChangedStates_m7A6DA4A4B84E0EFF84ACB419252A968513727106_gshared)(__this, ___0_newStates, method);
}
inline float VolumeDebugSettings_1_ComputeWeight_mF129240E543C352B39A84A7B1051F64A4A10D58D (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_triggerPos, const RuntimeMethod* method)
{
	return ((  float (*) (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810*, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))VolumeDebugSettings_1_ComputeWeight_mF129240E543C352B39A84A7B1051F64A4A10D58D_gshared)(__this, ___0_volume, ___1_triggerPos, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* VolumeManager_get_baseComponentTypeArray_mA7074538EEBCE5CA3CBAD4A72919B3BB8B6095C4 (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1826B059AE05490949E13D5D65BAEF9B786B8882_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8 (RuntimeObject* ___0_source, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Where_TisIl2CppSharedGenericObject_m60EAC1A330E00B2D7E6FD4AECBF783294EC34DF6_gshared)(___0_source, ___1_predicate, method);
}
inline void Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897 (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m9A091D2D3A9BB86C16A9FD560B3EC145822CDF1F_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8 (RuntimeObject* ___0_source, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, const RuntimeMethod*))Enumerable_OrderBy_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m1FCB0AB8AA1295B54174A81C618C1069CBC7BE1D_gshared)(___0_source, ___1_keySelector, method);
}
inline List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisIl2CppSharedGenericObject_mFF96E16527D742B009531AEA8672FF89A8A379E2_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* CustomAttributeExtensions_GetCustomAttribute_m8451F6949BEA92A69AE673CD95D6AD767B66880A (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, bool ___2_inherit, const RuntimeMethod* method) ;
inline List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* VolumeDebugSettings_1_get_additionalCameraDatas_mF2056E865A184BFECF646C2024BCC6601FF0F296_inline (const RuntimeMethod* method)
{
	return ((  List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* (*) (const RuntimeMethod*))VolumeDebugSettings_1_get_additionalCameraDatas_mF2056E865A184BFECF646C2024BCC6601FF0F296_gshared_inline)(method);
}
inline bool List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline bool List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796_gshared)(__this, ___0_item, method);
}
inline void List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_m2B803AB4CFC534E1F7CBDFD8A9E8FA103899CBF8 (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, bool ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*, bool, bool, const RuntimeMethod*))VolumeParameter_1__ctor_m2B803AB4CFC534E1F7CBDFD8A9E8FA103899CBF8_gshared)(__this, ___0_value, ___1_overrideState, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2 (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_m09E29FD8CDADF609FD8CF4145BFD4843174569A1 (bool* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_m365BAB60E012F498CA8ED185B37F9F9338D56D2C (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* ___0_lhs, bool ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*, bool, const RuntimeMethod*))VolumeParameter_1_op_Equality_m365BAB60E012F498CA8ED185B37F9F9338D56D2C_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_mD66BF5B24046A2C4B9E4132D8F476036F4C2A4C0 (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*, VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*, const RuntimeMethod*))VolumeParameter_1_Equals_mD66BF5B24046A2C4B9E4132D8F476036F4C2A4C0_gshared)(__this, ___0_other, method);
}
inline bool VolumeParameter_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1EF476645F5850C9D1AA95CA55F741FBBDB735B6 (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1EF476645F5850C9D1AA95CA55F741FBBDB735B6_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_mEBA6B22D06D46A72863645418176B2B791E4298E (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, bool, const RuntimeMethod*))VolumeParameter_1__ctor_mEBA6B22D06D46A72863645418176B2B791E4298E_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* EqualityComparer_1_get_Default_m8A94230D4FB56AB744C44882EC683E13F51A6F33_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m8A94230D4FB56AB744C44882EC683E13F51A6F33_gshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m2981EEA1DEFE55254945D7D03BE64D4F56BA58D0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_m24E409BF329F25774C6577F18EFD3DE1253684D6_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_m15F415AF2D5223BF39AAB744A4ADEB86D05D4254 (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))VolumeParameter_1_op_Equality_m15F415AF2D5223BF39AAB744A4ADEB86D05D4254_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_mF8DF607F38AF0959CC9AF26B10A025BD50BFAECD (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*, VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*, const RuntimeMethod*))VolumeParameter_1_Equals_mF8DF607F38AF0959CC9AF26B10A025BD50BFAECD_gshared)(__this, ___0_other, method);
}
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VolumeParameter_GetValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8B7E31181FEC2F5B762A80FEDF27DAF31E73C30F (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8B7E31181FEC2F5B762A80FEDF27DAF31E73C30F_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_m7A6F00C74323CBDC5511BD9FFEF7A0E065473B2A (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, int32_t ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*, int32_t, bool, const RuntimeMethod*))VolumeParameter_1__ctor_m7A6F00C74323CBDC5511BD9FFEF7A0E065473B2A_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_mB3FB376A5DFE74EFBB33AE12BE611246AAD6080C (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* ___0_lhs, int32_t ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*, int32_t, const RuntimeMethod*))VolumeParameter_1_op_Equality_mB3FB376A5DFE74EFBB33AE12BE611246AAD6080C_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_m7D4548D6494840E1BEA38C35787CFBFD311723AB (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*, VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*, const RuntimeMethod*))VolumeParameter_1_Equals_m7D4548D6494840E1BEA38C35787CFBFD311723AB_gshared)(__this, ___0_other, method);
}
inline int32_t VolumeParameter_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4319DCF1CDC5AEE67EE47027F2D95657332CBE54 (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4319DCF1CDC5AEE67EE47027F2D95657332CBE54_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_mF598242FF5BB25AF4058F0C037D218B94A606B11 (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, bool, const RuntimeMethod*))VolumeParameter_1__ctor_mF598242FF5BB25AF4058F0C037D218B94A606B11_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* EqualityComparer_1_get_Default_m7AFCDE94579F5CB2C18BE6D083953C19EE5D6C0D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7AFCDE94579F5CB2C18BE6D083953C19EE5D6C0D_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_m91EC3ECF0762496BBD86220098949F0DEC7DA5EE (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* ___0_lhs, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, const RuntimeMethod*))VolumeParameter_1_op_Equality_m91EC3ECF0762496BBD86220098949F0DEC7DA5EE_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_m65B18E6565CB450ACDCFDB52ED9865176787CAB1 (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*, VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*, const RuntimeMethod*))VolumeParameter_1_Equals_m65B18E6565CB450ACDCFDB52ED9865176787CAB1_gshared)(__this, ___0_other, method);
}
inline LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB VolumeParameter_GetValue_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mFD31FB50A06F90EB4FA089D0E635541E716E1B0D (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mFD31FB50A06F90EB4FA089D0E635541E716E1B0D_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_m9FAB30EECF5312F78D8C69CA0295F5F402041AEB (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1, bool, const RuntimeMethod*))VolumeParameter_1__ctor_m9FAB30EECF5312F78D8C69CA0295F5F402041AEB_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* EqualityComparer_1_get_Default_mF1A82E96D060D6B82C312E403E68BF2295DF4E49_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF1A82E96D060D6B82C312E403E68BF2295DF4E49_gshared_inline)(method);
}
inline bool VolumeParameter_1_op_Equality_m3CB43EF211BD373674FD15E2883A09398C83BE53 (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* ___0_lhs, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1, const RuntimeMethod*))VolumeParameter_1_op_Equality_m3CB43EF211BD373674FD15E2883A09398C83BE53_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_mFE64880B420F713BF8EFC5418756927407CC1459 (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*, VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*, const RuntimeMethod*))VolumeParameter_1_Equals_mFE64880B420F713BF8EFC5418756927407CC1459_gshared)(__this, ___0_other, method);
}
inline RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 VolumeParameter_GetValue_TisRenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1_m3EE80C613431CD5972D6F7028792594EB126B22C (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisRenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1_m3EE80C613431CD5972D6F7028792594EB126B22C_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_m7B3C3D31406CB70EDBAD17087C61BE2F72E74B65 (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, float ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*, float, bool, const RuntimeMethod*))VolumeParameter_1__ctor_m7B3C3D31406CB70EDBAD17087C61BE2F72E74B65_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_mF12900D701F8933501AFD3ABB54E79CA9BE100E7 (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* ___0_lhs, float ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*, float, const RuntimeMethod*))VolumeParameter_1_op_Equality_mF12900D701F8933501AFD3ABB54E79CA9BE100E7_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_m436DBD7738EA616BDB8D8B071E9DE7242A794996 (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*, VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*, const RuntimeMethod*))VolumeParameter_1_Equals_m436DBD7738EA616BDB8D8B071E9DE7242A794996_gshared)(__this, ___0_other, method);
}
inline float VolumeParameter_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m726AF9294ED67B0B16638E5F5D846CE9C7F911DD (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  float (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m726AF9294ED67B0B16638E5F5D846CE9C7F911DD_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_m7D300F6DFB90CA62B4543FD742D4114B1B60611D (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool, const RuntimeMethod*))VolumeParameter_1__ctor_m7D300F6DFB90CA62B4543FD742D4114B1B60611D_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_gshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_m11A43D181D3DDE97F8397E3C99E54B69FC02A128 (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))VolumeParameter_1_op_Equality_m11A43D181D3DDE97F8397E3C99E54B69FC02A128_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_m2EAE04A82CF93667E19E71B5ADC5BC47EC402537 (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*, VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*, const RuntimeMethod*))VolumeParameter_1_Equals_m2EAE04A82CF93667E19E71B5ADC5BC47EC402537_gshared)(__this, ___0_other, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 VolumeParameter_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD6257CDB298BD9F43258404B48F12F640076E5CF (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD6257CDB298BD9F43258404B48F12F640076E5CF_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_m4A316505E0024C58728C0820BA2D1BC613430872 (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, const RuntimeMethod*))VolumeParameter_1__ctor_m4A316505E0024C58728C0820BA2D1BC613430872_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_gshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_m3F2BFD14AC786F44C7819FE86B934FEE9BDFB18B (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))VolumeParameter_1_op_Equality_m3F2BFD14AC786F44C7819FE86B934FEE9BDFB18B_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_m0BD0D479690B17401797CB4441E114970A3476EB (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*, VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*, const RuntimeMethod*))VolumeParameter_1_Equals_m0BD0D479690B17401797CB4441E114970A3476EB_gshared)(__this, ___0_other, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VolumeParameter_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0BFECF14A9561DC70FDFF99AD44E6C81E163840 (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0BFECF14A9561DC70FDFF99AD44E6C81E163840_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_mE6EC5FD018557E4587232EEB1EFF72469EF04116 (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, bool, const RuntimeMethod*))VolumeParameter_1__ctor_mE6EC5FD018557E4587232EEB1EFF72469EF04116_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* EqualityComparer_1_get_Default_m90A2DF3D4BA23B0DCCB322B1DEF2E808102952A2_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m90A2DF3D4BA23B0DCCB322B1DEF2E808102952A2_gshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_mD9C48454E02B82560CAB02993BD3EFBEE7ECF3C5 (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))VolumeParameter_1_op_Equality_mD9C48454E02B82560CAB02993BD3EFBEE7ECF3C5_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_m68012375ECF20F176C5D1A529E688718D74D02DF (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*, VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*, const RuntimeMethod*))VolumeParameter_1_Equals_m68012375ECF20F176C5D1A529E688718D74D02DF_gshared)(__this, ___0_other, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 VolumeParameter_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA76DCA04631B12C65AAD65BAED699B30BB3C471B (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA76DCA04631B12C65AAD65BAED699B30BB3C471B_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_m13751D1A8F6AC4D8A296A07F0C14A396AD27D428 (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, Il2CppSharedGenericObject* ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*, Il2CppSharedGenericObject*, bool, const RuntimeMethod*))VolumeParameter_1__ctor_m13751D1A8F6AC4D8A296A07F0C14A396AD27D428_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline bool VolumeParameter_1_op_Equality_m2F6113C18AF0AAD9B14C33DC5BDCB435359EE3E9 (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* ___0_lhs, Il2CppSharedGenericObject* ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*, Il2CppSharedGenericObject*, const RuntimeMethod*))VolumeParameter_1_op_Equality_m2F6113C18AF0AAD9B14C33DC5BDCB435359EE3E9_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_m88DB05E913382A1A6AE183B9877875349C866ED6 (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*, VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*, const RuntimeMethod*))VolumeParameter_1_Equals_m88DB05E913382A1A6AE183B9877875349C866ED6_gshared)(__this, ___0_other, method);
}
inline Il2CppSharedGenericObject* VolumeParameter_GetValue_TisIl2CppSharedGenericObject_m1A181CB708DB02EC52D3E7793AA3C4692A3188E4 (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_TisIl2CppSharedGenericObject_m1A181CB708DB02EC52D3E7793AA3C4692A3188E4_gshared)(__this, method);
}
inline void VolumeParameter_1__ctor_m70508BCB9F5865418A150EE673A6427870A59465 (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, int32_t ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*, int32_t, bool, const RuntimeMethod*))VolumeParameter_1__ctor_m70508BCB9F5865418A150EE673A6427870A59465_gshared)(__this, ___0_value, ___1_overrideState, method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_m5FD3D0F9F083CA946C24FEE5315560B181F1D4C0 (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* ___0_lhs, int32_t ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*, int32_t, const RuntimeMethod*))VolumeParameter_1_op_Equality_m5FD3D0F9F083CA946C24FEE5315560B181F1D4C0_gshared)(___0_lhs, ___1_rhs, method);
}
inline bool VolumeParameter_1_Equals_m8ED6C08D00A26D41DD9529DE530240A83EAF381E (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*, VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*, const RuntimeMethod*))VolumeParameter_1_Equals_m8ED6C08D00A26D41DD9529DE530240A83EAF381E_gshared)(__this, ___0_other, method);
}
inline int32_t VolumeParameter_GetValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE40AE16776FF3B42C9A2683D870A5648BACFC0D6 (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, const RuntimeMethod*))VolumeParameter_GetValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE40AE16776FF3B42C9A2683D870A5648BACFC0D6_gshared)(__this, method);
}
inline void WeakReference_1__ctor_m56E7381CF8F98C0E7BAE715681E43557C38E841E (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180* __this, Il2CppSharedGenericObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180*, Il2CppSharedGenericObject*, bool, const RuntimeMethod*))WeakReference_1__ctor_m56E7381CF8F98C0E7BAE715681E43557C38E841E_gshared)(__this, ___0_target, ___1_trackResurrection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline void Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*, const RuntimeMethod*))Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD_gshared)(__this, method);
}
inline void WhereArrayIterator_1__ctor_m4A9B8B4E9C52A089FB47DF5F2DC936EF61EAF07F (WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereArrayIterator_1__ctor_m4A9B8B4E9C52A089FB47DF5F2DC936EF61EAF07F_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_gshared_inline)(__this, ___0_arg, method);
}
inline Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5 (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate1, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate2, const RuntimeMethod* method)
{
	return ((  Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* (*) (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5_gshared)(___0_predicate1, ___1_predicate2, method);
}
inline void WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377 (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*, RuntimeObject*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100 (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*, const RuntimeMethod*))Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100_gshared)(__this, method);
}
inline void WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, const RuntimeMethod*))Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25 (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, const RuntimeMethod*))Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared)(__this, method);
}
inline void WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120 (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, Il2CppSharedGenericObject*, const RuntimeMethod*))Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m0D34CE1A5CC641C5B010E503A0EDABA731F37317 (WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379*, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m0D34CE1A5CC641C5B010E503A0EDABA731F37317_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, int32_t, const RuntimeMethod*))Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline)(__this, ___0_arg, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_inline (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A*, int32_t, const RuntimeMethod*))Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384 (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C*, RuntimeObject*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_mA846116E73B9D1D46FEF744F0F0DEA950C8BA2C4 (WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601* __this, RuntimeObject* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601*, RuntimeObject*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_mA846116E73B9D1D46FEF744F0F0DEA950C8BA2C4_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868 (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5 (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8 (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 (*) (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, const RuntimeMethod*))List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*, const RuntimeMethod*))Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*, const RuntimeMethod*))Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A_gshared)(__this, method);
}
inline void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared)(__this, ___0_src, ___1_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared)(__this, ___0_index, method);
}
inline void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared)(__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline)(__this, method);
}
inline int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared)(__this, method);
}
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared)(__this, ___0_compare, method);
}
inline void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared)(__this, ___0_src, ___1_srcLen, method);
}
inline void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___0_index, il2cppRetVal, method);
}
inline void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline)(__this, method);
}
inline int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared)(__this, method);
}
inline void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared)(__this, ___0_compare, method);
}
inline void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared)(__this, ___0_src, ___1_srcLen, method);
}
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared)(__this, ___0_index, method);
}
inline void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared)(__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline)(__this, method);
}
inline int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared)(__this, method);
}
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared)(__this, ___0_compare, method);
}
inline void Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77 (int32_t ___0_min, int32_t ___1_max, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, const RuntimeMethod*))Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77_gshared)(___0_min, ___1_max, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_mFC1D60D5423E6FD6F09901574970AB1A0EBA79C3_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m42D903BD13F5B2B0CA3C4BA0643B6995913BDD43_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mCDC7C901C16B9E1EC609F5060C341FD08A826107_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mA01C8C5CB420C84117174B2AD9EDBC986C55074C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_SetRef_m89BDD13EED80A828682061BEF6D21F334AE45FC7_inline (intptr_t ___0_handle, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_GetTargetHandle_mE33A9DC8A8FA880F9CAA057300E28BC8AE743CED (RuntimeObject* ___0_obj, intptr_t ___1_handle, int32_t ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared)(method);
}
inline EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* EqualityComparer_1_CreateComparer_m292E631CDD1D443ABAA4D42813991D22B0DF411C (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m292E631CDD1D443ABAA4D42813991D22B0DF411C_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* EqualityComparer_1_CreateComparer_m92D8CD42AF756A8892DDECEFB0ED82B99A1FC560 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m92D8CD42AF756A8892DDECEFB0ED82B99A1FC560_gshared)(method);
}
inline EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* EqualityComparer_1_CreateComparer_m3A9FA9FF1F29EA76B7878EDBAB86B49866E4273A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3A9FA9FF1F29EA76B7878EDBAB86B49866E4273A_gshared)(method);
}
inline EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002_gshared)(method);
}
inline EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_CreateComparer_m4F66B7A3ECD1D02DC13599965C749DBC67DDC516 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4F66B7A3ECD1D02DC13599965C749DBC67DDC516_gshared)(method);
}
inline EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B_gshared)(method);
}
inline EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* EqualityComparer_1_CreateComparer_mEDDB86BF4859FA5C974D6CD81A4A7FDC3ABB1CC5 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEDDB86BF4859FA5C974D6CD81A4A7FDC3ABB1CC5_gshared)(method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedComponent_mDDD81E043C74714006904E94455F7318910C0F20_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CselectedComponentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponent_m5C4F4AD8B1B6E0CA4A947C1CD28B04F61BA03924_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CselectedComponentU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* VolumeDebugSettings_1_get_selectedCamera_m8380256B3B52D5A89F9C935B5E0424C76754CD26_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = VolumeDebugSettings_1_get_selectedCameraIndex_mA77DC652AACBAE194B9089C22F70C96F3A85544C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VolumeDebugSettings_1_get_cameras_mADF83AF6C4BF0D5DB5211699B9A04F7C550928F3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_2;
		L_2 = VolumeDebugSettings_1_get_selectedCameraIndex_mA77DC652AACBAE194B9089C22F70C96F3A85544C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F(L_1, L_2, Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F_RuntimeMethod_var);
		return L_3;
	}

IL_001b:
	{
		return (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedCameraIndex_mA77DC652AACBAE194B9089C22F70C96F3A85544C_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = VolumeDebugSettings_1_get_cameras_mADF83AF6C4BF0D5DB5211699B9A04F7C550928F3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_1;
		L_1 = Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8(L_0, Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}

IL_0012:
	{
		int32_t L_3 = __this->___m_SelectedCameraIndex;
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Clamp_mAB687477D3AAC0E7243D724F45626026980CE2FF_inline(L_3, 0, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedCameraIndex_m6AA4790FC790A302E25B406B8225BAF4E74F3D05_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = VolumeDebugSettings_1_get_cameras_mADF83AF6C4BF0D5DB5211699B9A04F7C550928F3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_1;
		L_1 = Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8(L_0, Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___0_value;
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Clamp_mAB687477D3AAC0E7243D724F45626026980CE2FF_inline(L_2, 0, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), NULL);
		__this->___m_SelectedCameraIndex = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeDebugSettings_1_get_cameras_mADF83AF6C4BF0D5DB5211699B9A04F7C550928F3_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* V_0 = NULL;
	int32_t V_1 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_2 = NULL;
	Il2CppSharedGenericObject* V_3 = NULL;
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = __this->___m_Cameras;
		NullCheck(L_0);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_0, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_1 = __this->___m_CamerasArray;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_2 = __this->___m_CamerasArray;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		int32_t L_4;
		L_4 = Camera_get_allCamerasCount_m7B9CAA9E8F2BC5587942A4CCBF4D6CA1FFD01BDC(NULL);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}

IL_0022:
	{
		int32_t L_5;
		L_5 = Camera_get_allCamerasCount_m7B9CAA9E8F2BC5587942A4CCBF4D6CA1FFD01BDC(NULL);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_6 = (CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B*)(CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B*)SZArrayNew(CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___m_CamerasArray = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CamerasArray), (void*)L_6);
	}

IL_0032:
	{
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_7 = __this->___m_CamerasArray;
		int32_t L_8;
		L_8 = Camera_GetAllCameras_m55D302710121EEBC17D2F6EE4AE975C37ECC53F4(L_7, NULL);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_9 = __this->___m_CamerasArray;
		V_0 = L_9;
		V_1 = 0;
		goto IL_009d;
	}

IL_0049:
	{
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_15)
		{
			goto IL_0099;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_16, NULL);
		if ((((int32_t)L_17) == ((int32_t)4)))
		{
			goto IL_0099;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_18, NULL);
		if ((((int32_t)L_19) == ((int32_t)((int32_t)16))))
		{
			goto IL_0099;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = V_2;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_20);
		bool L_21;
		L_21 = Component_TryGetComponent_TisIl2CppSharedGenericObject_m28AC4EF899475CB4F9377453368991A021B312A8((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_20, (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = V_2;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_22, NULL);
		NullCheck(L_23);
		Il2CppSharedGenericObject* L_24;
		L_24 = GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD(L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_3 = L_24;
	}

IL_007f:
	{
		Il2CppSharedGenericObject* L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0099;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_27 = __this->___m_Cameras;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = V_2;
		NullCheck(L_27);
		List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline(L_27, L_28, List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var);
	}

IL_0099:
	{
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_009d:
	{
		int32_t L_30 = V_1;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0049;
		}
	}
	{
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_33 = __this->___m_Cameras;
		return (RuntimeObject*)L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* VolumeDebugSettings_1_get_selectedComponentType_mE3D08241596F4628F3898A3B2C225C4B9547458E_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = VolumeDebugSettings_1_get_selectedComponent_mDDD81E043C74714006904E94455F7318910C0F20_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return (Type_t*)NULL;
	}

IL_000b:
	{
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_1;
		L_1 = VolumeDebugSettings_1_get_volumeComponentsPathAndType_mD06C58AF8184043EEEB75E3FADC2B0CADF55C64C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		int32_t L_2;
		L_2 = VolumeDebugSettings_1_get_selectedComponent_mDDD81E043C74714006904E94455F7318910C0F20_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_1);
		ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 L_3;
		L_3 = List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286(L_1, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286_RuntimeMethod_var);
		Type_t* L_4 = L_3.___Item2;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponentType_m510B295369726325F59AF982F23AD94B311915C1_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C* L_0 = (U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
		U3CU3Ec__DisplayClass22_0__ctor_mDA63AA372C09CD402B80A33A5F5316F2FC611BDD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C* L_1 = V_0;
		Type_t* L_2 = ___0_value;
		NullCheck(L_1);
		L_1->___value = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___value), (void*)L_2);
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_3;
		L_3 = VolumeDebugSettings_1_get_volumeComponentsPathAndType_mD06C58AF8184043EEEB75E3FADC2B0CADF55C64C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		U3CU3Ec__DisplayClass22_0_t9B0B459D8DB833B819DFD924BD1FEAFD2D44392C* L_4 = V_0;
		Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7* L_5 = (Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7*)il2cpp_codegen_object_new(Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m2A873182717A1B746A08E8A60B68D63ACFD144BF(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 11)), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4(L_3, L_5, List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4_RuntimeMethod_var);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_1;
		VolumeDebugSettings_1_set_selectedComponent_m5C4F4AD8B1B6E0CA4A947C1CD28B04F61BA03924_inline(__this, ((int32_t)il2cpp_codegen_add(L_8, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeDebugSettings_1_get_volumeComponentsPathAndType_mD06C58AF8184043EEEB75E3FADC2B0CADF55C64C_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* L_0;
		L_0 = VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C(NULL);
		il2cpp_codegen_runtime_class_init_inline(GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = GraphicsSettings_get_currentRenderPipelineAssetType_m72CAAF0AAB3BD48DDAEF0087B12ACDDD6B007404(NULL);
		NullCheck(L_0);
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_2;
		L_2 = VolumeManager_GetVolumeComponentsForDisplay_m5D246FCE6526D6F83485745E8F4CFC694AFECDE8(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* VolumeDebugSettings_1_get_targetRenderPipeline_mCD231F8640F3D7D297AB245119EA53A51E2433BB_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CtargetRenderPipelineU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m6803F93107C0B0DDA7DF4641CA447744E1CB9EEC_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___0_component, FieldInfo_t* ___1_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FieldInfo_t* L_0 = ___1_field;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_1 = ___0_component;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21, L_0, (RuntimeObject*)L_1);
		return ((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)CastclassClass((RuntimeObject*)L_2, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m8EC13093417BC569CDF776F8D3375D892325E52A_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, FieldInfo_t* ___0_field, const RuntimeMethod* method) 
{
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* V_0 = NULL;
	{
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_0;
		L_0 = VirtualFuncInvoker0< VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* >::Invoke(19, __this);
		V_0 = L_0;
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_2 = V_0;
		Type_t* L_3;
		L_3 = VolumeDebugSettings_1_get_selectedComponentType_mE3D08241596F4628F3898A3B2C225C4B9547458E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck(L_2);
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_4;
		L_4 = VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844(L_2, L_3, NULL);
		FieldInfo_t* L_5 = ___0_field;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_6;
		L_6 = VolumeDebugSettings_1_GetParameter_m6803F93107C0B0DDA7DF4641CA447744E1CB9EEC(__this, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_6;
	}

IL_001e:
	{
		return (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m74903BADDF91B331C92EEBD0C0FA31AA03E87DA2_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, FieldInfo_t* ___1_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_0 = NULL;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* V_1 = NULL;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* G_B3_0 = NULL;
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_0 = ___0_volume;
		NullCheck(L_0);
		bool L_1;
		L_1 = Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_2 = ___0_volume;
		NullCheck(L_2);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_3 = L_2->___sharedProfile;
		G_B3_0 = L_3;
		goto IL_0016;
	}

IL_0010:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_4 = ___0_volume;
		NullCheck(L_4);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_5;
		L_5 = Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0016:
	{
		Type_t* L_6;
		L_6 = VolumeDebugSettings_1_get_selectedComponentType_mE3D08241596F4628F3898A3B2C225C4B9547458E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck(G_B3_0);
		bool L_7;
		L_7 = VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9(G_B3_0, L_6, (&V_0), VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		return (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)NULL;
	}

IL_0027:
	{
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_8 = V_0;
		FieldInfo_t* L_9 = ___1_field;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_10;
		L_10 = VolumeDebugSettings_1_GetParameter_m6803F93107C0B0DDA7DF4641CA447744E1CB9EEC(__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_1 = L_10;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_11 = V_1;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(5, L_11);
		if (L_12)
		{
			goto IL_003a;
		}
	}
	{
		return (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)NULL;
	}

IL_003a:
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeDebugSettings_1_ComputeWeight_mF129240E543C352B39A84A7B1051F64A4A10D58D_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_triggerPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* V_0 = NULL;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A V_5;
	memset((&V_5), 0, sizeof(V_5));
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_6 = NULL;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* G_B5_0 = NULL;
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_0 = ___0_volume;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_2 = ___0_volume;
		NullCheck(L_2);
		bool L_3;
		L_3 = Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4(L_2, NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_4 = ___0_volume;
		NullCheck(L_4);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_5 = L_4->___sharedProfile;
		G_B5_0 = L_5;
		goto IL_0025;
	}

IL_001f:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_6 = ___0_volume;
		NullCheck(L_6);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_7;
		L_7 = Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D(L_6, NULL);
		G_B5_0 = L_7;
	}

IL_0025:
	{
		V_0 = G_B5_0;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_8 = ___0_volume;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_9, NULL);
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		return (0.0f);
	}

IL_0039:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_11 = ___0_volume;
		NullCheck((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_11);
		bool L_12;
		L_12 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_11, NULL);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_0057;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_15 = ___0_volume;
		NullCheck(L_15);
		float L_16 = L_15->___weight;
		if ((!(((float)L_16) <= ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}

IL_0057:
	{
		return (0.0f);
	}

IL_005d:
	{
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_17 = V_0;
		Type_t* L_18;
		L_18 = VolumeDebugSettings_1_get_selectedComponentType_mE3D08241596F4628F3898A3B2C225C4B9547458E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck(L_17);
		bool L_19;
		L_19 = VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9(L_17, L_18, (&V_1), VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		return (0.0f);
	}

IL_0073:
	{
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_20 = V_1;
		NullCheck(L_20);
		bool L_21 = L_20->___active;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		return (0.0f);
	}

IL_0081:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_22 = ___0_volume;
		NullCheck(L_22);
		float L_23 = L_22->___weight;
		float L_24;
		L_24 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_23, NULL);
		V_2 = L_24;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_25 = ___0_volume;
		NullCheck(L_25);
		bool L_26;
		L_26 = Volume_get_isGlobal_m09C1E1FB39D06DD9EC78DF276DE9A1FBE3E42763_inline(L_25, NULL);
		if (L_26)
		{
			goto IL_012b;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_27 = ___0_volume;
		NullCheck(L_27);
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_28;
		L_28 = Volume_get_colliders_m0950CE61A71643C572215A4598F769824E1C2E4C_inline(L_27, NULL);
		V_3 = (std::numeric_limits<float>::infinity());
		NullCheck(L_28);
		Enumerator_t3411ABDBCC75D9A3CF54484CC49FA3DBF6B2342A L_29;
		L_29 = List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420(L_28, List_1_GetEnumerator_m1D5E48528014F2A36980D68EC7CDB6FF03B83420_RuntimeMethod_var);
		V_5 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00eb:
			{
				Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D((&V_5), Enumerator_Dispose_mAF70E9B39A0AD39183DE4B5A7789CE0B0D28BE2D_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ad_1:
			{
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_30;
				L_30 = Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_inline((&V_5), Enumerator_get_Current_m9822B326FC4E04A23C53BBB2A7E1F1D89C2E9245_RuntimeMethod_var);
				V_6 = L_30;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_31 = V_6;
				NullCheck(L_31);
				bool L_32;
				L_32 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_31, NULL);
				if (!L_32)
				{
					goto IL_00e0_1;
				}
			}
			{
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_33 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___1_triggerPos;
				NullCheck(L_33);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
				L_35 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_33, L_34, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___1_triggerPos;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
				L_37 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_35, L_36, NULL);
				V_8 = L_37;
				float L_38;
				L_38 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_8), NULL);
				V_7 = L_38;
				float L_39 = V_7;
				float L_40 = V_3;
				if ((!(((float)L_39) < ((float)L_40))))
				{
					goto IL_00e0_1;
				}
			}
			{
				float L_41 = V_7;
				V_3 = L_41;
			}

IL_00e0_1:
			{
				bool L_42;
				L_42 = Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1((&V_5), Enumerator_MoveNext_m6561DC83C402739651BBB6140E6FCC142CA315E1_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_00ad_1;
				}
			}
			{
				goto IL_00f9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f9:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_43 = ___0_volume;
		NullCheck(L_43);
		float L_44 = L_43->___blendDistance;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_45 = ___0_volume;
		NullCheck(L_45);
		float L_46 = L_45->___blendDistance;
		V_4 = ((float)il2cpp_codegen_multiply(L_44, L_46));
		float L_47 = V_3;
		float L_48 = V_4;
		if ((!(((float)L_47) > ((float)L_48))))
		{
			goto IL_0115;
		}
	}
	{
		V_2 = (0.0f);
		goto IL_012b;
	}

IL_0115:
	{
		float L_49 = V_4;
		if ((!(((float)L_49) > ((float)(0.0f)))))
		{
			goto IL_012b;
		}
	}
	{
		float L_50 = V_2;
		float L_51 = V_3;
		float L_52 = V_4;
		V_2 = ((float)il2cpp_codegen_multiply(L_50, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_51/L_52))))));
	}

IL_012b:
	{
		float L_53 = V_2;
		return L_53;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* VolumeDebugSettings_1_GetVolumes_m6C7FD1F583C0E865DD2363169F88E7B5282F85E4_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* G_B2_0 = NULL;
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* G_B2_1 = NULL;
	Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* G_B1_0 = NULL;
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* G_B1_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* L_0;
		L_0 = VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C(NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(20, __this);
		NullCheck(L_0);
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_2;
		L_2 = VolumeManager_GetVolumes_mCD6F01BC37F4C6833FF56635904021D3E087BBDA(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_3 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18)))->___U3CU3E9__34_0;
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
		G_B1_0 = L_4;
		G_B1_1 = L_2;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
		U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07* L_5 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18)))->___U3CU3E9;
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_6 = (Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E*)il2cpp_codegen_object_new(Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E_il2cpp_TypeInfo_var);
		Func_2__ctor_mE062569723CD2676B37650ADE8A6BBE243E2CA72(L_6, (RuntimeObject*)L_5, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 19)), NULL);
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_7 = L_6;
		((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18)))->___U3CU3E9__34_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18)))->___U3CU3E9__34_0), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055_RuntimeMethod_var);
		RuntimeObject* L_9;
		L_9 = Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B(L_8, Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B_RuntimeMethod_var);
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_10;
		L_10 = Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB(L_9, Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB_RuntimeMethod_var);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* VolumeDebugSettings_1_GetStates_m12C7E8CDB9628E0A375BE11E611CAA1EFA9E1C11_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_0 = NULL;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* V_1 = NULL;
	int32_t V_2 = 0;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_3 = NULL;
	int32_t V_4 = 0;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* V_5 = NULL;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B2_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* G_B2_1 = NULL;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B1_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* G_B1_1 = NULL;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* G_B6_0 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* G_B10_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* G_B9_2 = NULL;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* G_B11_3 = NULL;
	{
		Type_t* L_0;
		L_0 = VolumeDebugSettings_1_get_selectedComponentType_mE3D08241596F4628F3898A3B2C225C4B9547458E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck(L_0);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_1;
		L_1 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(84, L_0, (int32_t)((int32_t)52));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_2 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18)))->___U3CU3E9__36_0;
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002c;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
		U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07* L_4 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18)))->___U3CU3E9;
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_5 = (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*)il2cpp_codegen_object_new(Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 20)), NULL);
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_6 = L_5;
		((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18)))->___U3CU3E9__36_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18)))->___U3CU3E9__36_0), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_8;
		L_8 = Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145(L_7, Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145_RuntimeMethod_var);
		V_0 = L_8;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_9 = __this->___volumes;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		il2cpp_array_size_t L_14[] = { (il2cpp_array_size_t)L_10, (il2cpp_array_size_t)L_12 };
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_13 = (VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)GenArrayNew(VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D_il2cpp_TypeInfo_var, L_14);
		V_1 = L_13;
		V_2 = 0;
		goto IL_00c0;
	}

IL_004c:
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_15 = __this->___volumes;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		bool L_19;
		L_19 = Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4(L_18, NULL);
		if (L_19)
		{
			goto IL_006a;
		}
	}
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_20 = __this->___volumes;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_24 = L_23->___sharedProfile;
		G_B6_0 = L_24;
		goto IL_0077;
	}

IL_006a:
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_25 = __this->___volumes;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_29;
		L_29 = Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D(L_28, NULL);
		G_B6_0 = L_29;
	}

IL_0077:
	{
		Type_t* L_30;
		L_30 = VolumeDebugSettings_1_get_selectedComponentType_mE3D08241596F4628F3898A3B2C225C4B9547458E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck(G_B6_0);
		bool L_31;
		L_31 = VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9(G_B6_0, L_30, (&V_3), VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		if (!L_31)
		{
			goto IL_00bc;
		}
	}
	{
		V_4 = 0;
		goto IL_00b5;
	}

IL_008b:
	{
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_32 = V_3;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_33 = V_0;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		FieldInfo_t* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_37;
		L_37 = VolumeDebugSettings_1_GetParameter_m6803F93107C0B0DDA7DF4641CA447744E1CB9EEC(__this, L_32, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_5 = L_37;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_38 = V_1;
		int32_t L_39 = V_2;
		int32_t L_40 = V_4;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_41 = V_5;
		NullCheck(L_41);
		bool L_42;
		L_42 = VirtualFuncInvoker0< bool >::Invoke(5, L_41);
		if (L_42)
		{
			G_B10_0 = L_40;
			G_B10_1 = L_39;
			G_B10_2 = L_38;
			goto IL_00a8;
		}
		G_B9_0 = L_40;
		G_B9_1 = L_39;
		G_B9_2 = L_38;
	}
	{
		G_B11_0 = ((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)(NULL));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_00aa;
	}

IL_00a8:
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_43 = V_5;
		G_B11_0 = L_43;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_00aa:
	{
		NullCheck(G_B11_3);
		(G_B11_3)->SetAt(G_B11_2, G_B11_1, G_B11_0);
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00b5:
	{
		int32_t L_45 = V_4;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_46)->max_length),NULL));
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_008b;
		}
	}

IL_00bc:
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00c0:
	{
		int32_t L_49 = V_2;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_50 = __this->___volumes;
		NullCheck(L_50);
		int32_t L_51 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_50)->max_length),NULL));
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_004c;
		}
	}
	{
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_52 = V_1;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_ChangedStates_m7A6DA4A4B84E0EFF84ACB419252A968513727106_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___0_newStates, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_0 = __this->___savedStates;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 1, NULL);
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_2 = ___0_newStates;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		V_0 = 0;
		goto IL_0055;
	}

IL_001b:
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_001f:
	{
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_4 = __this->___savedStates;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_7;
		L_7 = (L_4)->GetAt(L_5, L_6);
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_8 = ___0_newStates;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_11;
		L_11 = (L_8)->GetAt(L_9, L_10);
		if ((((int32_t)((((RuntimeObject*)(VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)((((RuntimeObject*)(VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0))))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)1;
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0042:
	{
		int32_t L_13 = V_1;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_14 = __this->___savedStates;
		NullCheck((RuntimeArray*)L_14);
		int32_t L_15;
		L_15 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_14, 1, NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		int32_t L_17 = V_0;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_18 = __this->___savedStates;
		NullCheck((RuntimeArray*)L_18);
		int32_t L_19;
		L_19 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_18, 0, NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_RefreshVolumes_m307075A9157016AE5559D691BAD0F5F182B84A58_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___0_newVolumes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = (bool)0;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_0 = __this->___volumes;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_1 = ___0_newVolumes;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_2 = __this->___volumes;
		bool L_3;
		L_3 = Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21((RuntimeObject*)L_1, (RuntimeObject*)L_2, Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0039;
		}
	}

IL_0018:
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_4 = ___0_newVolumes;
		NullCheck((RuntimeArray*)L_4);
		RuntimeObject* L_5;
		L_5 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_4, NULL);
		__this->___volumes = ((VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)Castclass((RuntimeObject*)L_5, VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___volumes), (void*)((VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)Castclass((RuntimeObject*)L_5, VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var)));
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_6;
		L_6 = VolumeDebugSettings_1_GetStates_m12C7E8CDB9628E0A375BE11E611CAA1EFA9E1C11(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		__this->___savedStates = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedStates), (void*)L_6);
		V_0 = (bool)1;
		goto IL_005a;
	}

IL_0039:
	{
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_7;
		L_7 = VolumeDebugSettings_1_GetStates_m12C7E8CDB9628E0A375BE11E611CAA1EFA9E1C11(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_2 = L_7;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_8 = __this->___savedStates;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_9 = V_2;
		bool L_10;
		L_10 = VolumeDebugSettings_1_ChangedStates_m7A6DA4A4B84E0EFF84ACB419252A968513727106(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		if (!L_10)
		{
			goto IL_005a;
		}
	}

IL_0051:
	{
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_11 = V_2;
		__this->___savedStates = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedStates), (void*)L_11);
		V_0 = (bool)1;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(21, __this);
		V_1 = L_12;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_13 = __this->___volumes;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_14);
		__this->___weights = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weights), (void*)L_15);
		V_3 = 0;
		goto IL_0093;
	}

IL_0078:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___weights;
		int32_t L_17 = V_3;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_18 = __this->___volumes;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23;
		L_23 = VolumeDebugSettings_1_ComputeWeight_mF129240E543C352B39A84A7B1051F64A4A10D58D(__this, L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (float)L_23);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0093:
	{
		int32_t L_25 = V_3;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_26 = __this->___volumes;
		NullCheck(L_26);
		int32_t L_27 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_26)->max_length),NULL));
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0078;
		}
	}
	{
		bool L_28 = V_0;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeDebugSettings_1_GetVolumeWeight_mE6E14A669170945498D712DA44B8EDA702CC1593_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(21, __this);
		V_0 = L_0;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_1 = ___0_volume;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3;
		L_3 = VolumeDebugSettings_1_ComputeWeight_mF129240E543C352B39A84A7B1051F64A4A10D58D(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_VolumeHasInfluence_mFCA5EC08604D832F4C438A64BA4EB957751F90E8_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(21, __this);
		V_0 = L_0;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_1 = ___0_volume;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3;
		L_3 = VolumeDebugSettings_1_ComputeWeight_mF129240E543C352B39A84A7B1051F64A4A10D58D(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		return (bool)((((float)L_3) > ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* VolumeDebugSettings_1_get_componentTypes_m6E3B1846C867824A2DD633C67A9F6769F2772BC3_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B3_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B3_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B2_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B2_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___s_ComponentTypes;
		if (L_0)
		{
			goto IL_008a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* L_1;
		L_1 = VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C(NULL);
		NullCheck(L_1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2;
		L_2 = VolumeManager_get_baseComponentTypeArray_mA7074538EEBCE5CA3CBAD4A72919B3BB8B6095C4(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_3 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9__43_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_4 = L_3;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_0033;
		}
		G_B2_0 = L_4;
		G_B2_1 = L_2;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07* L_5 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_6 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_6, (RuntimeObject*)L_5, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26)), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_7 = L_6;
		((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9__43_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9__43_0), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_0033:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8((RuntimeObject*)G_B3_1, G_B3_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_9 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9__43_1;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_10 = L_9;
		if (L_10)
		{
			G_B5_0 = L_10;
			G_B5_1 = L_8;
			goto IL_0057;
		}
		G_B4_0 = L_10;
		G_B4_1 = L_8;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07* L_11 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_12 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27)), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_13 = L_12;
		((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9__43_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9__43_1), (void*)L_13);
		G_B5_0 = L_13;
		G_B5_1 = G_B4_1;
	}

IL_0057:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8(G_B5_1, G_B5_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_15 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9__43_2;
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_16 = L_15;
		if (L_16)
		{
			G_B7_0 = L_16;
			G_B7_1 = L_14;
			goto IL_007b;
		}
		G_B6_0 = L_16;
		G_B6_1 = L_14;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07* L_17 = ((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9;
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_18 = (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*)il2cpp_codegen_object_new(Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897(L_18, (RuntimeObject*)L_17, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28)), NULL);
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_19 = L_18;
		((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9__43_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB97CBCD9089A2E83EFCE8694E61D493694F87C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 18)))->___U3CU3E9__43_2), (void*)L_19);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_1;
	}

IL_007b:
	{
		RuntimeObject* L_20;
		L_20 = Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8(G_B7_1, G_B7_0, Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_21;
		L_21 = Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E((RuntimeObject*)L_20, Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___s_ComponentTypes = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___s_ComponentTypes), (void*)L_21);
	}

IL_008a:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_22 = ((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___s_ComponentTypes;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeDebugSettings_1_ComponentDisplayName_m045D949B7B1B85AE27BCF7091B43F2ADE3C9F9A7_gshared (Type_t* ___0_component, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* V_0 = NULL;
	VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* V_1 = NULL;
	{
		Type_t* L_0 = ___0_component;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = CustomAttributeExtensions_GetCustomAttribute_m8451F6949BEA92A69AE673CD95D6AD767B66880A((MemberInfo_t*)L_0, L_2, (bool)0, NULL);
		V_0 = ((VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833*)IsInstClass((RuntimeObject*)L_3, VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_il2cpp_TypeInfo_var));
		VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = ((VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9*)L_5)->___menu;
		return L_6;
	}

IL_0021:
	{
		Type_t* L_7 = ___0_component;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10;
		L_10 = CustomAttributeExtensions_GetCustomAttribute_m8451F6949BEA92A69AE673CD95D6AD767B66880A((MemberInfo_t*)L_7, L_9, (bool)0, NULL);
		V_1 = ((VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833*)IsInstClass((RuntimeObject*)L_10, VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_il2cpp_TypeInfo_var));
		VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* L_11 = V_1;
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = ((VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9*)L_12)->___menu;
		return L_13;
	}

IL_0042:
	{
		Type_t* L_14 = ___0_component;
		NullCheck((MemberInfo_t*)L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* VolumeDebugSettings_1_get_additionalCameraDatas_mF2056E865A184BFECF646C2024BCC6601FF0F296_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___U3CadditionalCameraDatasU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_additionalCameraDatas_mE87B305957C924C49399980D9F99A17F79954B8F_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___U3CadditionalCameraDatasU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___U3CadditionalCameraDatasU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_RegisterCamera_m77363C5546C53A74EC0620BE7B4EF927C0CFEC91_gshared (Il2CppSharedGenericObject* ___0_additionalCamera, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0;
		L_0 = VolumeDebugSettings_1_get_additionalCameraDatas_mF2056E865A184BFECF646C2024BCC6601FF0F296_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Il2CppSharedGenericObject* L_1 = ___0_additionalCamera;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3;
		L_3 = VolumeDebugSettings_1_get_additionalCameraDatas_mF2056E865A184BFECF646C2024BCC6601FF0F296_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Il2CppSharedGenericObject* L_4 = ___0_additionalCamera;
		NullCheck(L_3);
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_UnRegisterCamera_mBBCA35081C4D785AD8FC2A6CBF48F5BFE064ABBF_gshared (Il2CppSharedGenericObject* ___0_additionalCamera, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0;
		L_0 = VolumeDebugSettings_1_get_additionalCameraDatas_mF2056E865A184BFECF646C2024BCC6601FF0F296_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Il2CppSharedGenericObject* L_1 = ___0_additionalCamera;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m63E643DC9A821297E2EBF9085D93B39BFC2F9DCE(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3;
		L_3 = VolumeDebugSettings_1_get_additionalCameraDatas_mF2056E865A184BFECF646C2024BCC6601FF0F296_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		Il2CppSharedGenericObject* L_4 = ___0_additionalCamera;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m0AC731A08F1400089DD478E2D366804833660796(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1__ctor_m73A93D4DE9910DA8DB9B3652FB08320E2D9A25FE_gshared (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_SelectedCameraIndex = (-1);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*)il2cpp_codegen_object_new(List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681(L_0, List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		__this->___m_Cameras = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cameras), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1__cctor_m36E11261C6093A432B9851A7AC9977C32F55F996_gshared (const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___U3CadditionalCameraDatasU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___U3CadditionalCameraDatasU3Ek__BackingField), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_get_value_mB2867295879147144D64807232154ABCD315B7C5_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_mF983456D522DE192C4ADB507527DB334CE0CA2F4_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m31EF22CA3B01ACF732500E02581D0D3531F81568_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		VolumeParameter_1__ctor_m2B803AB4CFC534E1F7CBDFD8A9E8FA103899CBF8(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m2B803AB4CFC534E1F7CBDFD8A9E8FA103899CBF8_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, bool ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		bool L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m1CBE24BC527D6455EA997E98DA33F66D303F68D1_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(14, ((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(14, ((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< bool, bool, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mEF5140303DB56961B43915E73E8178F8CB131C2F_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, bool ___0_from, bool ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* G_B2_0 = NULL;
	VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* G_B1_0 = NULL;
	bool G_B3_0 = false;
	VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		bool L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		bool L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_mD7A518E8D8725F6BE4806FAAAC7CB5EF39E411AE_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, bool ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		bool L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mA2CF632FC60162AF81FCC82A55AF29A79B5AAA14_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		bool L_1 = ((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m1AE2F6B0EC07E7CD52A48B2C5E8E9B389B82898D_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
		bool L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(14, __this);
		V_2 = L_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_9;
		L_9 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m1B65C9B571F29ACF95E29ED0C4101F0722542832_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(14, __this);
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m365BAB60E012F498CA8ED185B37F9F9338D56D2C_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* ___0_lhs, bool ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* L_1 = ___0_lhs;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* L_3 = ___0_lhs;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(14, L_3);
		V_0 = L_4;
		bool L_5 = ___1_rhs;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_8;
		L_8 = Boolean_Equals_m09E29FD8CDADF609FD8CF4145BFD4843174569A1((&V_0), L_7, NULL);
		return L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m1078452C0984D78AD36833B696BAA1C70368FEC7_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* ___0_lhs, bool ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* L_0 = ___0_lhs;
		bool L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_m365BAB60E012F498CA8ED185B37F9F9338D56D2C(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mD66BF5B24046A2C4B9E4132D8F476036F4C2A4C0_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)__this) == ((RuntimeObject*)(VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		bool L_3 = __this->___m_Value;
		VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* L_4 = ___0_other;
		NullCheck(L_4);
		bool L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m823E1A46F392DD1803B48A1E8B0060216CB310D2_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_mD66BF5B24046A2C4B9E4132D8F476036F4C2A4C0(__this, ((VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_mCC205987E3A50931697713D5D0FC1FACB59460B5_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_0;
		L_0 = VolumeParameter_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1EF476645F5850C9D1AA95CA55F741FBBDB735B6((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* L_2 = (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_m2B803AB4CFC534E1F7CBDFD8A9E8FA103899CBF8(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Explicit_mEB8C7C43CF9478621300515715DB40CA7B49888A_gshared (VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF* L_0 = ___0_prop;
		NullCheck(L_0);
		bool L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VolumeParameter_1_get_value_m82C08C3B163C97BD461B66B71BA1EC68FB882B9E_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_mA4FBCCFB246AC5FD2B773A9D2F491B9EF5E2BC9E_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mEE02E21FAFF6323A154C120BDC926FA33D42EAF4_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		VolumeParameter_1__ctor_mEBA6B22D06D46A72863645418176B2B791E4298E(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mEBA6B22D06D46A72863645418176B2B791E4298E_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mECA84783F2AE02C3FF4F080E35A9A11FC3B3CDC6_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(14, ((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(14, ((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m7384019F362C6FAEF1E4C78C13361C08C77E74B2_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_from, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* G_B2_0 = NULL;
	VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m5AD7817D88FC0729338DAE7DF8D6CAFEBE44ACFC_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m8615D8B2683D279F6AA18987A77A9D64CB3D5EA2_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mD933FEB706CECC131B62CF327A627407A054EF45_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_3;
		L_3 = EqualityComparer_1_get_Default_m8A94230D4FB56AB744C44882EC683E13F51A6F33_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(14, __this);
		V_2 = L_8;
		int32_t L_9;
		L_9 = Color_GetHashCode_m2981EEA1DEFE55254945D7D03BE64D4F56BA58D0_inline((&V_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m7FC3F60142ED0CC7635DE47FC4B0623FCE45023E_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(14, __this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m15F415AF2D5223BF39AAB744A4ADEB86D05D4254_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* L_1 = ___0_lhs;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* L_3 = ___0_lhs;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(14, L_3);
		V_0 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_rhs;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Color_Equals_m24E409BF329F25774C6577F18EFD3DE1253684D6_inline((&V_0), L_7, NULL);
		return L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_mEF5DA337413DF7C9E0D703CE11D70CD72ECDA9DD_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* L_0 = ___0_lhs;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_m15F415AF2D5223BF39AAB744A4ADEB86D05D4254(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mF8DF607F38AF0959CC9AF26B10A025BD50BFAECD_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)__this) == ((RuntimeObject*)(VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_2;
		L_2 = EqualityComparer_1_get_Default_m8A94230D4FB56AB744C44882EC683E13F51A6F33_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Value;
		VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* L_4 = ___0_other;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m3F110DA083C81A2F7B4D80D896C4A20CA1083177_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_mF8DF607F38AF0959CC9AF26B10A025BD50BFAECD(__this, ((VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_m124B8FBF19C6507A50933BCD2685C7448DE669CB_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = VolumeParameter_GetValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8B7E31181FEC2F5B762A80FEDF27DAF31E73C30F((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* L_2 = (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_mEBA6B22D06D46A72863645418176B2B791E4298E(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F VolumeParameter_1_op_Explicit_m1C906998E2AF92E9250ACB017020952C578B8317_gshared (VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC* L_0 = ___0_prop;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_get_value_m49EB8E85200E13B043E670625C69E2A478F3489D_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m34B875563C2E1014F9B4E372D39A9EAB81293177_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m022F747AFC8EC46BBE0A9F5AAAC63FDAF972D558_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		VolumeParameter_1__ctor_m7A6F00C74323CBDC5511BD9FFEF7A0E065473B2A(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m7A6F00C74323CBDC5511BD9FFEF7A0E065473B2A_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, int32_t ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		int32_t L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mB8153AD5CB7262434083F258C6F5917591DAB290_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(14, ((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(14, ((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m939A4F8CF2BE2A446D8A5E7700D4A6A8C6C1392D_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, int32_t ___0_from, int32_t ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* G_B2_0 = NULL;
	VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m817521D45DB6201C0E33383C561206A6D9DC8C6A_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		int32_t L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mA65C32C960CE3304B4003E684A70F32B8B5700AE_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		int32_t L_1 = ((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m28756ADA1052B02F8559DD1780D203ABDEDCD928_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(14, __this);
		V_2 = L_8;
		int32_t L_9;
		L_9 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m65AD2B168B3B4B6022E0AC592A8F568044336209_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(14, __this);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mB3FB376A5DFE74EFBB33AE12BE611246AAD6080C_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* ___0_lhs, int32_t ___1_rhs, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* L_1 = ___0_lhs;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* L_3 = ___0_lhs;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(14, L_3);
		V_0 = L_4;
		int32_t L_5 = ___1_rhs;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((&V_0), L_7, NULL);
		return L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m02585ABE774B0277BF0368E0ED35A0E7EE0F4CFE_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* ___0_lhs, int32_t ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* L_0 = ___0_lhs;
		int32_t L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_mB3FB376A5DFE74EFBB33AE12BE611246AAD6080C(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m7D4548D6494840E1BEA38C35787CFBFD311723AB_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)__this) == ((RuntimeObject*)(VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_3 = __this->___m_Value;
		VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* L_4 = ___0_other;
		NullCheck(L_4);
		int32_t L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m697C973A1BAEE560F294A360FBA3F0147773A543_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_m7D4548D6494840E1BEA38C35787CFBFD311723AB(__this, ((VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_m40E5136CBE2C9DB3101E3928E5907C0FE4D3A619_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		int32_t L_0;
		L_0 = VolumeParameter_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4319DCF1CDC5AEE67EE47027F2D95657332CBE54((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* L_2 = (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_m7A6F00C74323CBDC5511BD9FFEF7A0E065473B2A(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_op_Explicit_m236705A78FFE4327D8ADAE51A4F2EF8BDDC569AF_gshared (VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546* L_0 = ___0_prop;
		NullCheck(L_0);
		int32_t L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB VolumeParameter_1_get_value_mF2E3E171ECD000693B4A3BDEBE6F23593D034FC6_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, const RuntimeMethod* method) 
{
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_mA3188270EAC2462AB51C9FCA338B8DAAE7A686F4_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_value, const RuntimeMethod* method) 
{
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mEFB3F88294AB74A5984AC0E0ACE5484DB3C1404B_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, const RuntimeMethod* method) 
{
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = V_0;
		VolumeParameter_1__ctor_mF598242FF5BB25AF4058F0C037D218B94A606B11(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mF598242FF5BB25AF4058F0C037D218B94A606B11_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mF694517D1C1034D558F921B5349C3FE062371CAB_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(14, ((VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3;
		L_3 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(14, ((VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m4B55BF79D8E91FE17C29EA8DBA442EEE0C35927C_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_from, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* G_B2_0 = NULL;
	VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* G_B1_0 = NULL;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m4156D520175112F3643264853DBC97D87920DFB6_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mCE83521A9022D81D39D69189E0EEC64FAE09348A_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = ((VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m63F0FFF16F9F8D1FE4C690710FE3BD8A826E8C8B_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* L_3;
		L_3 = EqualityComparer_1_get_Default_m7AFCDE94579F5CB2C18BE6D083953C19EE5D6C0D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4;
		L_4 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB));
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8;
		L_8 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(14, __this);
		V_2 = L_8;
		Il2CppFakeBox<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB> L_9(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), V_2);
		int32_t L_10;
		L_10 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_9), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_10));
	}

IL_004c:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m302BF8C936FFF816D5938C497CE58FC1753933F7_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(14, __this);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m91EC3ECF0762496BBD86220098949F0DEC7DA5EE_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* ___0_lhs, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_rhs, const RuntimeMethod* method) 
{
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* L_1 = ___0_lhs;
		NullCheck(L_1);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2;
		L_2 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* L_3 = ___0_lhs;
		NullCheck(L_3);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4;
		L_4 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(14, L_3);
		V_0 = L_4;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = ___1_rhs;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB> L_8(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), V_0);
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		return L_9;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m4BDD5FFE420B0EAC7F3C0064901E277350F8E645_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* ___0_lhs, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* L_0 = ___0_lhs;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_m91EC3ECF0762496BBD86220098949F0DEC7DA5EE(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m65B18E6565CB450ACDCFDB52ED9865176787CAB1_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)__this) == ((RuntimeObject*)(VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* L_2;
		L_2 = EqualityComparer_1_get_Default_m7AFCDE94579F5CB2C18BE6D083953C19EE5D6C0D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___m_Value;
		VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* L_4 = ___0_other;
		NullCheck(L_4);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mD70280A63A5DE2BAFD5211163CEA8A624B29608B_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_m65B18E6565CB450ACDCFDB52ED9865176787CAB1(__this, ((VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_m44C0CD910CB24145B4F676D412AAF73C16684C31_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = VolumeParameter_GetValue_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mFD31FB50A06F90EB4FA089D0E635541E716E1B0D((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* L_2 = (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_mF598242FF5BB25AF4058F0C037D218B94A606B11(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB VolumeParameter_1_op_Explicit_m38460517C2D2966C8B1DBA2ADDB09A1CC353758D_gshared (VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tA31BB11EB7ABD3D3D53EF680B63B550EA34156EF* L_0 = ___0_prop;
		NullCheck(L_0);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 VolumeParameter_1_get_value_m6B67A18461668F8083E740BFEC146ED0C6C7A946_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, const RuntimeMethod* method) 
{
	{
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m566DDA1FB97AC22E06624C79CF3E4F56DF71DC2F_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___0_value, const RuntimeMethod* method) 
{
	{
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m2C58929661D681D13C573373EE0E02011FE589C8_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, const RuntimeMethod* method) 
{
	RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1));
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_0 = V_0;
		VolumeParameter_1__ctor_m9FAB30EECF5312F78D8C69CA0295F5F402041AEB(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m9FAB30EECF5312F78D8C69CA0295F5F402041AEB_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m0BE9AFCDA16C8940B7503922D5C105141B4A35ED_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_1;
		L_1 = VirtualFuncInvoker0< RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 >::Invoke(14, ((VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_3;
		L_3 = VirtualFuncInvoker0< RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 >::Invoke(14, ((VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m620B4DDAD8D29F15C069CBDEA0CAB93A3D33F367_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___0_from, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* G_B2_0 = NULL;
	VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* G_B1_0 = NULL;
	RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m2A0AA90CD07E98A2FAE8F118E6671C84049607C4_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m7E59E44BCD2978FAC0A20F8F78C04F570552411D_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_1 = ((VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mAF97627DC49B844D228DDF24CCA97B2A9BD637DF_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* L_3;
		L_3 = EqualityComparer_1_get_Default_mF1A82E96D060D6B82C312E403E68BF2295DF4E49_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_4;
		L_4 = VirtualFuncInvoker0< RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1));
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_8;
		L_8 = VirtualFuncInvoker0< RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 >::Invoke(14, __this);
		V_2 = L_8;
		Il2CppFakeBox<RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1> L_9(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), V_2);
		int32_t L_10;
		L_10 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_9), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_10));
	}

IL_004c:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_mE577CA67D4EC18FF6231832650B78A45BFFA8472_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_0;
		L_0 = VirtualFuncInvoker0< RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 >::Invoke(14, __this);
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m3CB43EF211BD373674FD15E2883A09398C83BE53_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* ___0_lhs, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___1_rhs, const RuntimeMethod* method) 
{
	RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* L_1 = ___0_lhs;
		NullCheck(L_1);
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_2;
		L_2 = VirtualFuncInvoker0< RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* L_3 = ___0_lhs;
		NullCheck(L_3);
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_4;
		L_4 = VirtualFuncInvoker0< RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 >::Invoke(14, L_3);
		V_0 = L_4;
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_5 = ___1_rhs;
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1> L_8(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), V_0);
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		return L_9;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m6B15FD776D43BB521DD82815A7014DB6DAD0CF91_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* ___0_lhs, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* L_0 = ___0_lhs;
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_m3CB43EF211BD373674FD15E2883A09398C83BE53(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mFE64880B420F713BF8EFC5418756927407CC1459_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)__this) == ((RuntimeObject*)(VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* L_2;
		L_2 = EqualityComparer_1_get_Default_mF1A82E96D060D6B82C312E403E68BF2295DF4E49_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_3 = __this->___m_Value;
		VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* L_4 = ___0_other;
		NullCheck(L_4);
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1, RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mC3A747E44DA4F7E2808BBBF11F8898E01E550EEC_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_mFE64880B420F713BF8EFC5418756927407CC1459(__this, ((VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_m00A8BFE1A7ECAAB5BC95EB3352BD06FF2DA8F8E1_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_0;
		L_0 = VolumeParameter_GetValue_TisRenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1_m3EE80C613431CD5972D6F7028792594EB126B22C((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* L_2 = (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_m9FAB30EECF5312F78D8C69CA0295F5F402041AEB(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 VolumeParameter_1_op_Explicit_m47B888ACD3E1A278B76AC2ADE3AD4C68BB0917CF_gshared (VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tBACBEB1521BD77F067B180B99B3CC70E049F9239* L_0 = ___0_prop;
		NullCheck(L_0);
		RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_1_get_value_m0849ED41F9200EBC5BD223A83852A971C6D02626_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m5415747DC53464A5A498AE66975A7320E233544E_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m6428533CF0E467C6CC9CB9D9BA24DCEA7B9C0BC4_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_0 = V_0;
		VolumeParameter_1__ctor_m7B3C3D31406CB70EDBAD17087C61BE2F72E74B65(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m7B3C3D31406CB70EDBAD17087C61BE2F72E74B65_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, float ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		float L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m0CF41F8FBC4CEDB6BE5F2A8F940159A35566A477_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(14, ((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(14, ((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< float, float, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m81D78077BA066946631DE149457EA7CAEE3F58E6_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* G_B2_0 = NULL;
	VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		float L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		float L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_mC346E68FEB631DC3D367126E958B371099C991E0_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, float ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		float L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m26B25FB1235EEA3F33512A1B32CF45E7C7CFAC88_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_1 = ((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mE3607EB6C24FCF9CCA46C817214F708C853AD1B8_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3;
		L_3 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(float));
		float L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(14, __this);
		V_2 = L_8;
		int32_t L_9;
		L_9 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_mEB80D8BA1872D6C40B9AAEDA4E3D4AF019264A91_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = VirtualFuncInvoker0< float >::Invoke(14, __this);
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mF12900D701F8933501AFD3ABB54E79CA9BE100E7_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* ___0_lhs, float ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* L_1 = ___0_lhs;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* L_3 = ___0_lhs;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(14, L_3);
		V_0 = L_4;
		float L_5 = ___1_rhs;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&V_0), L_7, NULL);
		return L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_mDDFE734CEEAD27BF3EC3216C3892E1B5390E060F_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* ___0_lhs, float ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* L_0 = ___0_lhs;
		float L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_mF12900D701F8933501AFD3ABB54E79CA9BE100E7(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m436DBD7738EA616BDB8D8B071E9DE7242A794996_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)__this) == ((RuntimeObject*)(VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_2;
		L_2 = EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		float L_3 = __this->___m_Value;
		VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* L_4 = ___0_other;
		NullCheck(L_4);
		float L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, float, float >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mFF46390422C7498068F857E68A18461A2F0ED0D0_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_m436DBD7738EA616BDB8D8B071E9DE7242A794996(__this, ((VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_m8A528822990E249B11EFD558574747732CE870A5_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		float L_0;
		L_0 = VolumeParameter_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m726AF9294ED67B0B16638E5F5D846CE9C7F911DD((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* L_2 = (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_m7B3C3D31406CB70EDBAD17087C61BE2F72E74B65(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_1_op_Explicit_m752F8A192DB1E5E3468FF7DF5CF0A4338AEE67D3_gshared (VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8* L_0 = ___0_prop;
		NullCheck(L_0);
		float L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 VolumeParameter_1_get_value_mD19331E7F3E751A3A3EB3E4993DF9AAA61096588_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m2B32AD03E2902927B56783438FADEECFA012787B_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m56B1B2B767B58D29961FF3D3E36C4846F9088BCB_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		VolumeParameter_1__ctor_m7D300F6DFB90CA62B4543FD742D4114B1B60611D(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m7D300F6DFB90CA62B4543FD742D4114B1B60611D_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m3C78B649D203CD9368CAE44ED815DB734290A16C_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(14, ((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(14, ((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mA49D4EC3737142F8A5B045398A4CCBA411001709_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* G_B2_0 = NULL;
	VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* G_B1_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m06F3874DF3DB465096322FE46B4989F12D93E0CA_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m32E44B50E9894B7A679EEBC9BDEDD5F6A59C048D_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mB17A6D2E3008FF35E17CA737093E0AFB0F1B3D37_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_3;
		L_3 = EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(14, __this);
		V_2 = L_8;
		int32_t L_9;
		L_9 = Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline((&V_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m23F686960018A6ADF47C14AA247B50061B22F7DC_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(14, __this);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m11A43D181D3DDE97F8397E3C99E54B69FC02A128_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* L_1 = ___0_lhs;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* L_3 = ___0_lhs;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(14, L_3);
		V_0 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_rhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline((&V_0), L_7, NULL);
		return L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m3FB73D5751B49F42758EF6F117ECD1DBE9F95282_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* L_0 = ___0_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_m11A43D181D3DDE97F8397E3C99E54B69FC02A128(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m2EAE04A82CF93667E19E71B5ADC5BC47EC402537_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)__this) == ((RuntimeObject*)(VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_2;
		L_2 = EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___m_Value;
		VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* L_4 = ___0_other;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m8CEB43A17910A16004300FEB2F675BECAF4E2FF7_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_m2EAE04A82CF93667E19E71B5ADC5BC47EC402537(__this, ((VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_m99AF7FF8E2D154950333A5448DE1B7E9833287BD_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = VolumeParameter_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD6257CDB298BD9F43258404B48F12F640076E5CF((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* L_2 = (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_m7D300F6DFB90CA62B4543FD742D4114B1B60611D(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 VolumeParameter_1_op_Explicit_mE5A4C3DFF6EB3A5902D3DC07787C225E9281083A_gshared (VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B* L_0 = ___0_prop;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VolumeParameter_1_get_value_m532F0E7C2BE97CC8918766153D2DDD669B5348B3_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m8767E4A6BCC06CA025497EC97836CF654DBDA29B_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mB88262731E069310FFC030D39E9CB9C678763AE9_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		VolumeParameter_1__ctor_m4A316505E0024C58728C0820BA2D1BC613430872(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m4A316505E0024C58728C0820BA2D1BC613430872_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m746695DBE741312D33BB0A19B57D94DF55D25EE2_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14, ((VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14, ((VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mE61302F0C63BD210245F978BD7CE4A952136B76D_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* G_B2_0 = NULL;
	VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m2C4FDBC18FA50CD909A3417530581124767A20B6_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mD6BF85FBE5F5EBD9E19A6F63A566B280A4892DEE_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m585FB86BA6CAB628B98EAE47D28628EEE8C83541_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_3;
		L_3 = EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14, __this);
		V_2 = L_8;
		int32_t L_9;
		L_9 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m05A951866A0BAC8C20279C2E9BCAF0225307D8A3_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14, __this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m3F2BFD14AC786F44C7819FE86B934FEE9BDFB18B_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* L_1 = ___0_lhs;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* L_3 = ___0_lhs;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14, L_3);
		V_0 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_rhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline((&V_0), L_7, NULL);
		return L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m30712319EE7E9F6BA7AFB5308C1DF73087F7C7A1_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_m3F2BFD14AC786F44C7819FE86B934FEE9BDFB18B(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m0BD0D479690B17401797CB4441E114970A3476EB_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)__this) == ((RuntimeObject*)(VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_2;
		L_2 = EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_Value;
		VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* L_4 = ___0_other;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m148E13E16FAC6A2033E4D7B1C400AE9E034BED31_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_m0BD0D479690B17401797CB4441E114970A3476EB(__this, ((VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_mD8595769A3C542BE3F904E675846BE47B72039E7_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VolumeParameter_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0BFECF14A9561DC70FDFF99AD44E6C81E163840((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* L_2 = (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_m4A316505E0024C58728C0820BA2D1BC613430872(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VolumeParameter_1_op_Explicit_m949655AF464EC632A865BD85A080E86D7A588B2E_gshared (VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t0431AA06DC397751CD5A3958FD8D447C58C33B98* L_0 = ___0_prop;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 VolumeParameter_1_get_value_m1CB32AF530B5FF9C2E3DBF1C0675DE0542F9A496_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_mAE8C0A02561014326EC966D797CFFD157F4A9525_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mC4DCB99C4CA0051280714877BD4644BC30EF656E_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = V_0;
		VolumeParameter_1__ctor_mE6EC5FD018557E4587232EEB1EFF72469EF04116(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mE6EC5FD018557E4587232EEB1EFF72469EF04116_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mE3FBDC7570586EE9ED56A56B7FC55028079F6A76_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(14, ((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(14, ((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m351AA7779BE7DB032E20954FBF03E9277CE45E5E_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_from, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* G_B2_0 = NULL;
	VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* G_B1_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m0575FA25119E29ED043A155E6DCF12D21572615F_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mDBF7C9ACF42239B2696EF4C6DDF13BFEE298224D_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mC0E0F2B5592F55316F83115BB123F5A64C384224_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_3;
		L_3 = EqualityComparer_1_get_Default_m90A2DF3D4BA23B0DCCB322B1DEF2E808102952A2_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(14, __this);
		V_2 = L_8;
		int32_t L_9;
		L_9 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_mF26377A7607DA6FE15867065879B1680ED9009D9_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(14, __this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mD9C48454E02B82560CAB02993BD3EFBEE7ECF3C5_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* L_1 = ___0_lhs;
		NullCheck(L_1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* L_3 = ___0_lhs;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(14, L_3);
		V_0 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___1_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline((&V_0), L_7, NULL);
		return L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m685347981E02681312B983337E84845405441AB8_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* L_0 = ___0_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_mD9C48454E02B82560CAB02993BD3EFBEE7ECF3C5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m68012375ECF20F176C5D1A529E688718D74D02DF_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)__this) == ((RuntimeObject*)(VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_2;
		L_2 = EqualityComparer_1_get_Default_m90A2DF3D4BA23B0DCCB322B1DEF2E808102952A2_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = __this->___m_Value;
		VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* L_4 = ___0_other;
		NullCheck(L_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m3AA8DB7B0E47B2F58F1FA3A7162C9FBA2ADE76B9_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_m68012375ECF20F176C5D1A529E688718D74D02DF(__this, ((VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_mBB97B3C986F45C4F7DDD79E21FA03357A5AD67A6_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = VolumeParameter_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mA76DCA04631B12C65AAD65BAED699B30BB3C471B((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* L_2 = (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_mE6EC5FD018557E4587232EEB1EFF72469EF04116(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 VolumeParameter_1_op_Explicit_mE96B1BE1283BA83CFA6418E1ED445F050E00F4E9_gshared (VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_tF55730717D62BD99642CBDBBD61DC4E5E5396E1C* L_0 = ___0_prop;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* VolumeParameter_1_get_value_m7C8143952AA1397E3D826A3C1939E67027C30D2A_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m8B917C3FFC4374C570A32699F289FEAAC6A216CD_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_value;
		__this->___m_Value = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Value), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mAC1CE3AA69E4C204C31F734E0E6999E382B525AB_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_0 = V_0;
		VolumeParameter_1__ctor_m13751D1A8F6AC4D8A296A07F0C14A396AD27D428(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m13751D1A8F6AC4D8A296A07F0C14A396AD27D428_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, Il2CppSharedGenericObject* ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		Il2CppSharedGenericObject* L_0 = ___0_value;
		__this->___m_Value = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Value), (void*)L_0);
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m82234AB0B09302CB67529E8A9A383BB74C641687_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Il2CppSharedGenericObject* L_1;
		L_1 = VirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(14, ((VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Il2CppSharedGenericObject* L_3;
		L_3 = VirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(14, ((VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mCC771857A93890C8BB28B695E478424921092804_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, Il2CppSharedGenericObject* ___0_from, Il2CppSharedGenericObject* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* G_B2_0 = NULL;
	VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* G_B1_0 = NULL;
	Il2CppSharedGenericObject* G_B3_0 = NULL;
	VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		Il2CppSharedGenericObject* L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		Il2CppSharedGenericObject* L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_Value), (void*)G_B3_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m7F64A7565F6EF0722752CB4EE8A6D6BDC0E4B628_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, Il2CppSharedGenericObject* ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		Il2CppSharedGenericObject* L_0 = ___0_x;
		__this->___m_Value = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Value), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m8CA0CD7FE6883FD9E95B8EEC21FD390051347BA1_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Il2CppSharedGenericObject* L_1 = ((VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Value), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m857FCD46247E4E7ED5D77E76D900B307E86DBD1A_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3;
		L_3 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Il2CppSharedGenericObject* L_4;
		L_4 = VirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		Il2CppSharedGenericObject* L_8;
		L_8 = VirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(14, __this);
		V_2 = L_8;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(V_2));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_mAA1F588D2348B5F5050434AB9828100DDF4681BE_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = VirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(14, __this);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.boolean_class, &L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, (RuntimeObject*)L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m2F6113C18AF0AAD9B14C33DC5BDCB435359EE3E9_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* ___0_lhs, Il2CppSharedGenericObject* ___1_rhs, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* L_1 = ___0_lhs;
		NullCheck(L_1);
		Il2CppSharedGenericObject* L_2;
		L_2 = VirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(14, L_1);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* L_3 = ___0_lhs;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_4;
		L_4 = VirtualFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(14, L_3);
		V_0 = L_4;
		Il2CppSharedGenericObject* L_5 = ___1_rhs;
		NullCheck((RuntimeObject*)(V_0));
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)(V_0), (RuntimeObject*)L_5);
		return L_6;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_mC32EBCAB171E9BCBE06F69984EB94321C54DFE54_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* ___0_lhs, Il2CppSharedGenericObject* ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* L_0 = ___0_lhs;
		Il2CppSharedGenericObject* L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_m2F6113C18AF0AAD9B14C33DC5BDCB435359EE3E9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m88DB05E913382A1A6AE183B9877875349C866ED6_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)__this) == ((RuntimeObject*)(VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		Il2CppSharedGenericObject* L_3 = __this->___m_Value;
		VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* L_4 = ___0_other;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m77ED452A02BE474BCC2A2906A97B787C9D2205FC_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_m88DB05E913382A1A6AE183B9877875349C866ED6(__this, ((VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_mA5CB292699FEA68D191FA194B98C651640D1A8F4_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		Il2CppSharedGenericObject* L_0;
		L_0 = VolumeParameter_GetValue_TisIl2CppSharedGenericObject_m1A181CB708DB02EC52D3E7793AA3C4692A3188E4((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* L_2 = (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_m13751D1A8F6AC4D8A296A07F0C14A396AD27D428(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* VolumeParameter_1_op_Explicit_m52FA9CD08CE01C0939D71C9ED15C5955A598D8C2_gshared (VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t51ABCD1432B78497E606BC6E400443404D44C312* L_0 = ___0_prop;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_get_value_m130C88D03ABADB576A908E2E26FE90E24881F7DB_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m09FF3C49735C8ECA8ACA4572044EA393D95C6376_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mA616936A4E10317580AE921071D36637ED0A3FE9_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(V_0, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_0: *(void**)L_0), (bool)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m863FDCA6A4AE26E8D21738715A6E337BB7D5FDD8_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m0CA46FB75295800D8B2A7C02F66F7DDD9384D23C_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), (Il2CppFullySharedGenericAny*)L_1);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), (Il2CppFullySharedGenericAny*)L_3);
		float L_4 = ___2_t;
		VirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float >::Invoke(16, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_3: *(void**)L_3), L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mA5DD59296A4481DBEC4ACDE08B11497E0838684F_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_from, Il2CppFullySharedGenericAny ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* G_B2_0 = NULL;
	VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(G_B3_0, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this);
			goto IL_000c;
		}
		G_B1_0 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this);
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_from : &___0_from), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(G_B3_0, L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		G_B3_1 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)G_B1_0);
		goto IL_000d;
	}

IL_000c:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___1_to : &___1_to), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(G_B3_0, L_2, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		G_B3_1 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)G_B2_0);
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		il2cpp_codegen_write_instance_field_data(G_B3_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), G_B3_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m7C1B4B87F845CEF17B9FE1DC7C476741E2AA73C2_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_x, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_x : &___0_x), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mC22AF6C46073698212DA5E411F582D8D1A4F2589_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m67709A9D28380EB1F99B0D0877445D25828E5891_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(V_2, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, __this, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_5: *(void**)L_5));
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, __this, (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(V_2, L_8, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (void*)(Il2CppFullySharedGenericAny*)V_2, &L_10, L_9);
		typedef int32_t ( *func_L_12)(void*,const RuntimeMethod*);
		int32_t L_13 = ((func_L_12)L_11)(L_10.thisPtr,L_10.method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_13));
	}

IL_004c:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m1DC4E78F08D48194AF38E9ED9EB63B4C4195E86E_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, __this, (Il2CppFullySharedGenericAny*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_0);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.boolean_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_1, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mFB9A5ACACD63E673940ABCCD71BFBCF5939514B3_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_lhs, Il2CppFullySharedGenericAny ___1_rhs, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(V_0, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_1 = ___0_lhs;
		NullCheck(L_1);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, L_1, (Il2CppFullySharedGenericAny*)L_2);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_2);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_4 = ___0_lhs;
		NullCheck(L_4);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___1_rhs : &___1_rhs), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_6);
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), (void*)(Il2CppFullySharedGenericAny*)V_0, &L_9, L_8);
		typedef bool ( *func_L_11)(void*,RuntimeObject*,const RuntimeMethod*);
		bool L_12 = ((func_L_11)L_10)(L_9.thisPtr, L_7,L_9.method);
		return L_12;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m8551AFE47546E9FE859077FB75033B4DABB36AA8_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_lhs, Il2CppFullySharedGenericAny ___1_rhs, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___0_lhs;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___1_rhs : &___1_rhs), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mE6CB1D07EC2DE1DE825EB7AE097CA54AB980218F_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this) == ((RuntimeObject*)(VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_4 = ___0_other;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_5: *(void**)L_5));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m72DBE726E1E91E1E6FBB9463C65FB181504FAC57_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = ((  bool (*) (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*, VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_m6C0CD60546286A326AA2237501E028E5E537DBF5_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (Il2CppFullySharedGenericAny*)L_0);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_2 = (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_0: *(void**)L_0), L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_op_Explicit_m06E2D8024C6E6B043D67E524AD2FB6A0EA25BF4F_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_prop, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___0_prop;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_get_value_mE7E0EA96FE2D033B78B3388805C197F6E3D2CB4A_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Value;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m2430F79CB005B691569C13BBEF245ACB7A1E173A_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mCE7BAC371D0CC606A8FC2DFCF878B3815A20A31D_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		VolumeParameter_1__ctor_m70508BCB9F5865418A150EE673A6427870A59465(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m70508BCB9F5865418A150EE673A6427870A59465_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, int32_t ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	{
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		int32_t L_0 = ___0_value;
		__this->___m_Value = L_0;
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mA64C4D08ADCFE7F0BBFC1C4338988FF5007625F7_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(14, ((VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(14, ((VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		float L_4 = ___2_t;
		VirtualActionInvoker3< int32_t, int32_t, float >::Invoke(16, __this, L_1, L_3, L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m5460772FCEE7252515E21F9463C3326C14BFEB8B_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, int32_t ___0_from, int32_t ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* G_B2_0 = NULL;
	VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* G_B3_1 = NULL;
	{
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_1 = ___0_from;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_2 = ___1_to;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Value = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m091F07F79726EAF45D71CEFF91E51A11812B59F3_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		int32_t L_0 = ___0_x;
		__this->___m_Value = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_m6597CAE3F4B89DC94E15D73E01A54ABF4EB1D5CE_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		NullCheck(((VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		int32_t L_1 = ((VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___m_Value;
		__this->___m_Value = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_mB92F585C7A157ED9D17CB1BF5DBDBFE151860C84_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_3;
		L_3 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(14, __this);
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		int32_t L_5 = V_2;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_4, L_5);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(14, __this);
		V_2 = L_8;
		int32_t L_9;
		L_9 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m07DC5211B941BB2A168731CE06FE045018BD4169_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(14, __this);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_1);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.boolean_class, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m5FD3D0F9F083CA946C24FEE5315560B181F1D4C0_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* ___0_lhs, int32_t ___1_rhs, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* L_1 = ___0_lhs;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(14, L_1);
	}
	{
		VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* L_3 = ___0_lhs;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(14, L_3);
		V_0 = L_4;
		int32_t L_5 = ___1_rhs;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int32_t> L_8(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), V_0);
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		return L_9;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m56D5EF2C851D135927A1794452BB8BA7F899B0C3_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* ___0_lhs, int32_t ___1_rhs, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* L_0 = ___0_lhs;
		int32_t L_1 = ___1_rhs;
		bool L_2;
		L_2 = VolumeParameter_1_op_Equality_m5FD3D0F9F083CA946C24FEE5315560B181F1D4C0(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m8ED6C08D00A26D41DD9529DE530240A83EAF381E_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* ___0_other, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)__this) == ((RuntimeObject*)(VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_2;
		L_2 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_3 = __this->___m_Value;
		VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* L_4 = ___0_other;
		NullCheck(L_4);
		int32_t L_5 = L_4->___m_Value;
		NullCheck(L_2);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_2, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mAE49ADEC70E22AEC8A1A22015CB8206B065F90AD_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VolumeParameter_1_Equals_m8ED6C08D00A26D41DD9529DE530240A83EAF381E(__this, ((VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_m4F59043C242AE03A381FA85D21CCF35EEA9C3865_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		int32_t L_0;
		L_0 = VolumeParameter_GetValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mE40AE16776FF3B42C9A2683D870A5648BACFC0D6((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* L_2 = (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_m70508BCB9F5865418A150EE673A6427870A59465(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_op_Explicit_m88A520EA8A8EDBA70AD9BCABEDEA00D829D544CF_gshared (VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* ___0_prop, const RuntimeMethod* method) 
{
	{
		VolumeParameter_1_t049BE85379CBBDCCBB6793EA2A5E5A1D519E0C86* L_0 = ___0_prop;
		NullCheck(L_0);
		int32_t L_1 = L_0->___m_Value;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m2DF2E9240755AD44CD007215336336988FB94970_gshared (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180* __this, Il2CppSharedGenericObject* ___0_target, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_target;
		WeakReference_1__ctor_m56E7381CF8F98C0E7BAE715681E43557C38E841E(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m56E7381CF8F98C0E7BAE715681E43557C38E841E_gshared (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180* __this, Il2CppSharedGenericObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___1_trackResurrection;
		__this->___trackResurrection = L_0;
		bool L_1 = ___1_trackResurrection;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		Il2CppSharedGenericObject* L_2 = ___0_target;
		int32_t L_3 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_2, L_3, NULL);
		__this->___handle = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m26B6C20B9417150055843B01C492BE853F888ED6_gshared (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		NullCheck(L_2);
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, NULL);
		__this->___trackResurrection = L_3;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_4, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_6, NULL);
		V_0 = L_7;
		bool L_8 = __this->___trackResurrection;
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_9, L_10, NULL);
		__this->___handle = L_11;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m12FA42C2A3928DF070B0FB1604D23E96E650100B_gshared (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		bool L_3 = __this->___trackResurrection;
		NullCheck(L_2);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, L_3, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_7 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		RuntimeObject* L_8;
		L_8 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline(L_7, NULL);
		NullCheck(L_6);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_6, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_8, NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		NullCheck(L_9);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_9, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_mDE725E23AF954B676DFE5B39328B17786CBE09F9_gshared (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180* __this, Il2CppSharedGenericObject* ___0_target, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		Il2CppSharedGenericObject* L_1 = ___0_target;
		GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D_inline(L_0, (RuntimeObject*)L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_mBE4F373E7AC9285E659FCC2CE05E7820CF84C814_gshared (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180* __this, Il2CppSharedGenericObject** ___0_target, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppSharedGenericObject** L_2 = ___0_target;
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_0016:
	{
		Il2CppSharedGenericObject** L_3 = ___0_target;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline(L_4, NULL);
		*(Il2CppSharedGenericObject**)L_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_3, (void*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		Il2CppSharedGenericObject** L_6 = ___0_target;
		Il2CppSharedGenericObject* L_7 = (*(Il2CppSharedGenericObject**)L_6);
		return (bool)((!(((RuntimeObject*)(Il2CppSharedGenericObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_m7E4CC88F283E425189EB1C8BC510906088E6FBE8_gshared (WeakReference_1_t1F6FA975EAE72BD674152D029627A536B687C180* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
			GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_0, NULL);
			goto IL_0014;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m4A9B8B4E9C52A089FB47DF5F2DC936EF61EAF07F_gshared (WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereArrayIterator_1_Clone_mE31EE28C8C3AF73A465E9182B4EE6DA783E0DCC8_gshared (WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547* __this, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547* L_2 = (WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereArrayIterator_1__ctor_m4A9B8B4E9C52A089FB47DF5F2DC936EF61EAF07F(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m2CC945527E27709DF2A77749EF065B340B1DAABF_gshared (WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_6 = __this->___predicate;
		Il2CppSharedGenericObject* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		Il2CppSharedGenericObject* L_9 = V_0;
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = __this->___index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->___source;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mACF36D740BA7870CDEF62F71205CC9B7AA921FCB_gshared (WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = ___0_predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_3;
		L_3 = Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547* L_4 = (WhereArrayIterator_1_t1058A0FE615541593E1259BC6FD75D42B1865547*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereArrayIterator_1__ctor_m4A9B8B4E9C52A089FB47DF5F2DC936EF61EAF07F(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereArrayIterator_1_Clone_m1D80001794E47D2DF00A77273FD71D61987E8A44_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_2 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m42FC055181A1CDD12BBB46A9EE9ED76C6048BA07_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	memset(V_0, 0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mB2C59E78355E518D359A6D5035BCD6254337B84E_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_4 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377_gshared (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereEnumerableIterator_1_Clone_m147E8C6841D1F56383B65AB9442D5F8572E0C4A0_gshared (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_2 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mB5CFE2E915EAE2A54092B3BF72CF0AE757569B0C_gshared (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m3E17222A4C6715CC745CCE37FDA4B1F349DDA260_gshared (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6;
		L_6 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		Il2CppSharedGenericObject* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Il2CppSharedGenericObject* L_10 = V_1;
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m6827EA1DFE793999773F608F522A3DAC4E550561_gshared (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = ___0_predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_3;
		L_3 = Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_4 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereEnumerableIterator_1_Clone_m0317D203B88386A9A479C72FA9D62763FD0A91D3_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_2 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m2583FECFDC8EDFE66C959C7C386F99E287C5763E_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m1A18D4050C069B6C4310DAB9857281E37DCB2C69_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	memset(V_1, 0, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_10, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mC623267514B4299E409A01161DBBDA5362CEDFC2_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_4 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereListIterator_1_Clone_mD1DC0907762FD59A96CDD4DDC5DF1C2BB20818A8_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* L_2 = (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mA5874C778A5BE1094329ADAA040BFD8EDD1FBCE0_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_4;
		L_4 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_5 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		Il2CppSharedGenericObject* L_6;
		L_6 = Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		Il2CppSharedGenericObject* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Il2CppSharedGenericObject* L_10 = V_1;
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_11 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		bool L_12;
		L_12 = Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m14EE1FAA82AE63BE42B030236807F4DA4B8D5520_gshared (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_2 = ___0_predicate;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_3;
		L_3 = Enumerable_CombinePredicates_TisIl2CppSharedGenericObject_mB19C4BC845EA4B1A994D49127DEAD390E9D1D3F5(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121* L_4 = (WhereListIterator_1_tD6AC6F805CA10186E04E5B47FB806E4B91D79121*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_m02289C26CC479D5E26D8B625E633C0EB9BC4F00A(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereListIterator_1_Clone_mAA3ED56493E5FF2F49FE37EB7CDF6C0A957698B5_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_2 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mB5E4EB089AD8CF7156B8972C7FB61739C466ED5E_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	memset(V_1, 0, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_4, SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		return (bool)1;
	}

IL_004e:
	{
		bool L_10;
		L_10 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_10)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mC767815DE2249E70B38D6D172A0C61B028D7A44B_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_4 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectArrayIterator_2_Clone_m129509AA57628EC2BAACE1BAD0FE298C284E14FA_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* L_3 = (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m26CDB54B705AA05B43649E3E7388F4EBBE61B120(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m2D19DEC399673E08D0C217881BF0416EEE5356E9_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		Il2CppSharedGenericObject* L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_10 = __this->___selector;
		Il2CppSharedGenericObject* L_11 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12;
		L_12 = Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mFB641A55162A05D1965399C37BE6A3C15EA3992F_gshared (WhereSelectArrayIterator_2_t683CE530AC127C0638FB749D7F6917FA13DAA375* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectArrayIterator_2_Clone_mFBF81AE0E2B6F7A7A79FC98398E7A6AC0FD330E9_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* L_3 = (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEF7E8E7B117D6D1147C53CAE838836974171392C_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	memset(V_0, 0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD81DB59B1D07BC8DDB099A652B22BA9C1538D7A3_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m0D34CE1A5CC641C5B010E503A0EDABA731F37317_gshared (WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectArrayIterator_2_Clone_m9EB3AB293A4F3DE86245553D1576AE27C3AE93A5_gshared (WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379* L_3 = (WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m0D34CE1A5CC641C5B010E503A0EDABA731F37317(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m82765A5346D0143B538CA4E93C264BEFCD212A15_gshared (WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_10 = __this->___selector;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12;
		L_12 = Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_14 = __this->___source;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mA0921868611C1B38F8C7CF5A730AFCF007747871_gshared (WhereSelectArrayIterator_2_t35C6C5B7279F90A9D4ECEBB1B96A1BB3656AD379* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectEnumerableIterator_2_Clone_m820E73DBEE027CB08633E586A635098AAD4B0243_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* L_3 = (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_mECCDD8DA6646F701A2A3D4FB5B23F8763CAB1384(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m811F2ABD9BC8A5CEEA64C0123A2887B865BF5823_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m1504811E695B69625751EA73048935D19FA8114E_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6;
		L_6 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_8 = __this->___predicate;
		Il2CppSharedGenericObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_11 = __this->___selector;
		Il2CppSharedGenericObject* L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mC9CB40941D1E86FB75CBB2F3A1101759C942F24F_gshared (WhereSelectEnumerableIterator_2_t7498B95D87F85E9A85C46A5E7C49DF65B0193B3C* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectEnumerableIterator_2_Clone_mD773B8B24D1459B11BA4462A6DD68865514ADC9E_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* L_3 = (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m640FAC111BC786414B40480BB03E4F84B2FFB179_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB384EFAF6366166F28EDFDBA272EEC1089E1A115_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_12 = L_6;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	memset(V_1, 0, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_11);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_13, SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB8ACBBFA48460E67B18647EF16E6EE4D0BE08679_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mA846116E73B9D1D46FEF744F0F0DEA950C8BA2C4_gshared (WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601* __this, RuntimeObject* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectEnumerableIterator_2_Clone_mFA5597D069F08318E2CED77FF132D242D473AA9F_gshared (WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601* L_3 = (WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_mA846116E73B9D1D46FEF744F0F0DEA950C8BA2C4(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mBDC4F6B5AA2698914EA5009039E22D9E7F8B105C_gshared (WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		Iterator_1_Dispose_m3FF3E0013D3AFCD08A82EF3E6376086A3EF89100((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m9C218ABE79B327077F99E7F771F1854E3381BA48_gshared (WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB443B47E9D28AAFAE71C3469A5F04F9C4824BA6E_gshared (WhereSelectEnumerableIterator_2_tBDA3AB3BAD5C31E1698E01C05B1DF56C8A3B2601* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_mA526287F988AD67F1AFD8DDA6ED50D6223EB1F01_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___source;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_1 = __this->___predicate;
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_2 = __this->___selector;
		WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* L_3 = (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mED7281169C838528A02E92FA050F9B60918EB868(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m330FDD6ED7F4BEE49DCBC8A651E09A6A353C395E_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_4;
		L_4 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_5 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		Il2CppSharedGenericObject* L_6;
		L_6 = Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_8 = __this->___predicate;
		Il2CppSharedGenericObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* L_11 = __this->___selector;
		Il2CppSharedGenericObject* L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* L_14 = (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m188F9A25121C29C31230434548BA57C395C1C9DE_gshared (WhereSelectListIterator_2_t48846732A4E5DA4823ED35B3AC44BFDCACD8F4F9* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_m2E7761856CBD3CB0B74488A8297A4D03C6C5224C_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = __this->___selector;
		WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* L_3 = (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m87B4188E471597108BBA231B780E29AB9D962A9B_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_14 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m09AB57C26990601C313EB1AD262947B08F85A06E_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44>(__this);
	WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B2_0 = NULL;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B3_1 = NULL;
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_src;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start = L_1;
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_src;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = ___0_src;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44>(__this);
	WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44>(__this);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _returnValue;
	_returnValue = WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44>(__this);
	WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067(_thisAdjusted, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44>(__this);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44>(__this);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_5 = ___0_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_AdjustorThunk (RuntimeObject* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44>(__this);
	WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809>(__this);
	WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B2_0 = NULL;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B3_1 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start = L_1;
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_src;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_src;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809>(__this);
	WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809>(__this);
	WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), L_3, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809>(__this);
	WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F(_thisAdjusted, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809>(__this);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809>(__this);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_5 = ___0_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_AdjustorThunk (RuntimeObject* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809>(__this);
	WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87>(__this);
	WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B2_0 = NULL;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B3_1 = NULL;
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start = L_1;
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_src;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_7 = ___0_src;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87>(__this);
	WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87>(__this);
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 _returnValue;
	_returnValue = WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) 
{
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87>(__this);
	WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663(_thisAdjusted, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87>(__this);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87>(__this);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_5 = ___0_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_AdjustorThunk (RuntimeObject* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87>(__this);
	WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Math_Clamp_mAB687477D3AAC0E7243D724F45626026980CE2FF_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_min;
		int32_t L_1 = ___2_max;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_2 = ___1_min;
		int32_t L_3 = ___2_max;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77(L_2, L_3, Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77_RuntimeMethod_var);
	}

IL_000b:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___1_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_6 = ___1_min;
		return L_6;
	}

IL_0011:
	{
		int32_t L_7 = ___0_value;
		int32_t L_8 = ___2_max;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_9 = ___2_max;
		return L_9;
	}

IL_0017:
	{
		int32_t L_10 = ___0_value;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0018;
		}
	}
	{
		float L_1 = ___0_value;
		if ((((float)L_1) > ((float)(1.0f))))
		{
			goto IL_0012;
		}
	}
	{
		float L_2 = ___0_value;
		return L_2;
	}

IL_0012:
	{
		return (1.0f);
	}

IL_0018:
	{
		return (0.0f);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Volume_get_isGlobal_m09C1E1FB39D06DD9EC78DF276DE9A1FBE3E42763_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_IsGlobal;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* Volume_get_colliders_m0950CE61A71643C572215A4598F769824E1C2E4C_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) 
{
	{
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = __this->___m_Colliders;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		(&V_0)->___x = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		(&V_0)->___y = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		(&V_0)->___z = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m2981EEA1DEFE55254945D7D03BE64D4F56BA58D0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&__this->___r);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___g);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&__this->___b);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (float*)(&__this->___a);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_m24E409BF329F25774C6577F18EFD3DE1253684D6_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var)));
		bool L_2;
		L_2 = Color_Equals_mFC1D60D5423E6FD6F09901574970AB1A0EBA79C3_inline(__this, (&V_0), NULL);
		return L_2;
	}

IL_0018:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&__this->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		return ((int32_t)(L_1^((int32_t)(L_3<<2))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var)));
		bool L_2;
		L_2 = Vector2_Equals_m42D903BD13F5B2B0CA3C4BA0643B6995913BDD43_inline(__this, (&V_0), NULL);
		return L_2;
	}

IL_0018:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&__this->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&__this->___z);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		return ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)));
		bool L_2;
		L_2 = Vector3_Equals_mCDC7C901C16B9E1EC609F5060C341FD08A826107_inline(__this, (&V_0), NULL);
		return L_2;
	}

IL_0018:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&__this->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&__this->___z);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (float*)(&__this->___w);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_other;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)));
		bool L_2;
		L_2 = Vector4_Equals_mA01C8C5CB420C84117174B2AD9EDBC986C55074C_inline(__this, (&V_0), NULL);
		return L_2;
	}

IL_0018:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		intptr_t L_2 = __this->___handle;
		RuntimeObject* L_3 = ___0_value;
		GCHandle_SetRef_m89BDD13EED80A828682061BEF6D21F334AE45FC7_inline(L_2, L_3, NULL);
		return;
	}

IL_001a:
	{
		RuntimeObject* L_4 = ___0_value;
		intptr_t L_5 = __this->___handle;
		intptr_t L_6;
		L_6 = GCHandle_GetTargetHandle_mE33A9DC8A8FA880F9CAA057300E28BC8AE743CED(L_4, L_5, (-1), NULL);
		__this->___handle = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mCCC05B98943E8F4E0F6FBF47063A269048AE71E5_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedComponent_mDDD81E043C74714006904E94455F7318910C0F20_gshared_inline (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CselectedComponentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponent_m5C4F4AD8B1B6E0CA4A947C1CD28B04F61BA03924_gshared_inline (VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CselectedComponentU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* VolumeDebugSettings_1_get_additionalCameraDatas_mF2056E865A184BFECF646C2024BCC6601FF0F296_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ((VolumeDebugSettings_1_t34BECA1FC7DA9B4FEBB46DDCC260BC5B09F3E810_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 25)))->___U3CadditionalCameraDatasU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* EqualityComparer_1_get_Default_m8A94230D4FB56AB744C44882EC683E13F51A6F33_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* V_0 = NULL;
	{
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_0 = ((EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m292E631CDD1D443ABAA4D42813991D22B0DF411C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t221F691FC7274577F2A0F3CAE50CEF86B29F5DC6* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* EqualityComparer_1_get_Default_m7AFCDE94579F5CB2C18BE6D083953C19EE5D6C0D_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* V_0 = NULL;
	{
		EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* L_0 = ((EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m92D8CD42AF756A8892DDECEFB0ED82B99A1FC560(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE099B7A2D643AAB486C0D6A65F6D18E883A06C14* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* EqualityComparer_1_get_Default_mF1A82E96D060D6B82C312E403E68BF2295DF4E49_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* V_0 = NULL;
	{
		EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* L_0 = ((EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3A9FA9FF1F29EA76B7878EDBAB86B49866E4273A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t277395118063958E28F0FD109A0B92A5783A5B93* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* EqualityComparer_1_get_Default_m20A1B9861324559044977270E1FAFB09BBE14234_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* V_0 = NULL;
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4055D46D61B6AD80A0F2D4624577D7FE9D15B002(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* EqualityComparer_1_get_Default_mB416E612CF5DF00141878F67290CCF47A257028B_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* V_0 = NULL;
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_0 = ((EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4F66B7A3ECD1D02DC13599965C749DBC67DDC516(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* EqualityComparer_1_get_Default_m1366122B2D69C2D467D898811414E10F4DF12E4C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* V_0 = NULL;
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_0 = ((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m603EA3CBC7DB9CF5557BE0CD39079883BA0B305B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* EqualityComparer_1_get_Default_m90A2DF3D4BA23B0DCCB322B1DEF2E808102952A2_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* V_0 = NULL;
	{
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_0 = ((EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEDDB86BF4859FA5C974D6CD81A4A7FDC3ABB1CC5(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* V_0 = NULL;
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0 = ((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mDFD235952DAD602D1DFB25297EC22590CE99B6F5_gshared_inline (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m0E8D5B2914DF50FFC02B2CFEF6FF956D55AC12DE_gshared_inline (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, Il2CppSharedGenericObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_gshared_inline (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_mFC1D60D5423E6FD6F09901574970AB1A0EBA79C3_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_other, const RuntimeMethod* method) 
{
	{
		float* L_0 = (float*)(&__this->___r);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1 = ___0_other;
		float L_2 = L_1->___r;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		float* L_4 = (float*)(&__this->___g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = ___0_other;
		float L_6 = L_5->___g;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		float* L_8 = (float*)(&__this->___b);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = ___0_other;
		float L_10 = L_9->___b;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		float* L_12 = (float*)(&__this->___a);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = ___0_other;
		float L_14 = L_13->___a;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		return L_15;
	}

IL_004b:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m42D903BD13F5B2B0CA3C4BA0643B6995913BDD43_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_other, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___0_other;
		float L_2 = L_1->___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		float L_3 = __this->___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = ___0_other;
		float L_5 = L_4->___y;
		return (bool)((((float)L_3) == ((float)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mCDC7C901C16B9E1EC609F5060C341FD08A826107_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_other, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___0_other;
		float L_2 = L_1->___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		float L_3 = __this->___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___0_other;
		float L_5 = L_4->___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		float L_6 = __this->___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_other;
		float L_8 = L_7->___z;
		return (bool)((((float)L_6) == ((float)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mA01C8C5CB420C84117174B2AD9EDBC986C55074C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_other, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1 = ___0_other;
		float L_2 = L_1->___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_0039;
		}
	}
	{
		float L_3 = __this->___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4 = ___0_other;
		float L_5 = L_4->___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		float L_6 = __this->___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_7 = ___0_other;
		float L_8 = L_7->___z;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_0039;
		}
	}
	{
		float L_9 = __this->___w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_10 = ___0_other;
		float L_11 = L_10->___w;
		return (bool)((((float)L_9) == ((float)L_11))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((intptr_t)((intptr_t)(L_0&L_1))) == ((intptr_t)L_2))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_SetRef_m89BDD13EED80A828682061BEF6D21F334AE45FC7_inline (intptr_t ___0_handle, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = ___1_value;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_2, (RuntimeObject*)L_3);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		return;
	}
}
