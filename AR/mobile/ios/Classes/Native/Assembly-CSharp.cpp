#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// CylinderCut
struct CylinderCut_t3614A0598C59581B604AF6E9AD0877F3DF1F7087;
// DoubleVerticals
struct DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9;
// EventBus
struct EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852;
// HeightEvent
struct HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062;
// MeshEditorPoint
struct MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C;
// MeshEditorPoint/MoveDelegate
struct MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508;
// ModelMeshEditor
struct ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957;
// NewControl
struct NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195;
// NewControl/<GetRequest>d__7
struct U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52;
// NewControl/<Move>d__8
struct U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39;
// PuppetDrill
struct PuppetDrill_t824C6B471A382CA70EA1030190CF0718BE5B0338;
// PuppetPiece
struct PuppetPiece_t242E97D65C6FF13E7135CC6F13BB91E60BF5F272;
// Subscription`1<HeightEvent>
struct Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB;
// Subscription`1<System.Object>
struct Subscription_1_t4BE3B4FCF286F627E61679369F07F5E720E988AF;
// System.Action`1<HeightEvent>
struct Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Int32>>[]
struct EntryU5BU5D_t60C6F39C129F0ED5FC3442C36FBFFB0170A77B12;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.IList>[]
struct EntryU5BU5D_t5AF9FD4B6B6D375C545A66AFBB75C095432C4400;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Vector3,System.Int32>[]
struct EntryU5BU5D_t523BCA3AF6D2654C20274C7979E887544792A250;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Int32>>
struct KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.IList>
struct KeyCollection_tBB9F5EE4039BA6AFBC4462AF7ECAEC5BEB61C7F2;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3,System.Int32>
struct KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Int32>>
struct ValueCollection_tD67DD0079B75647C364C199FF479C7B83AE29B48;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.IList>
struct ValueCollection_tA2E91FFD1AC7D15CB1B8CD0C3536ECACCFECFDF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector3,System.Int32>
struct ValueCollection_t64044A87CBBA26A0A28D31C5C6E33247E08D9801;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.IList>
struct Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>
struct Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_tD6EAC43B8F82FF1C475D47067CC43C2BDA9E9B6F;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3>
struct IEqualityComparer_1_t8FA1EB64105528A08ED1DD8559ECA2CE36352CEE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// VertexGenerator
struct VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106;
// WebRequest
struct WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9;
// WebRequest/<GetRequest>d__2
struct U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0803DF4FF1650933D2FFE6BE04D4B21432134252;
IL2CPP_EXTERN_C String_t* _stringLiteral0871DEF2947BA963BC29C71E75AFCE8478756E90;
IL2CPP_EXTERN_C String_t* _stringLiteral11AE5C698A59D456D5D3387543B2438552529090;
IL2CPP_EXTERN_C String_t* _stringLiteral2758E3273DD1670B2F6F59AFA8542D89C80D20A6;
IL2CPP_EXTERN_C String_t* _stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral63143B6F8007B98C53CA2149822777B3566F9241;
IL2CPP_EXTERN_C String_t* _stringLiteral758EAD9D7EED73D1576E2157E7EA5022E5B3808F;
IL2CPP_EXTERN_C String_t* _stringLiteral7CE01F6381463362CF6AEF2F843A59261E8F5587;
IL2CPP_EXTERN_C String_t* _stringLiteral9A830C714BB2B52B8F817649335855437EBCB701;
IL2CPP_EXTERN_C String_t* _stringLiteralA7887C34AB10ABB0F567CB5C82439262617DD0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralECBCB0E424C40D9931C2C7C8B44C33C5F4E12465;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m6FE0F35A1DBC2D121FE43C718D2A76E7AFB26E50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m01A4C79F3249F0ADC0C6C5BBD018D2E93FF79365_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m08669E08F649DEBCB507A5E9DD56770CF899BEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF877DE353865F5D40ED8958FF63D9F2EADB637FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsValue_mCE3D9C202670540847AD2A2B8F99727727D97CA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m519F6A98BA789EFE72129CE9C5821197F2BAAA46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7067EEB3CF8A52DE17DCCA02E2ABF40CC224BF28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA6DED850C86DFE3FB0684689AF050D68569AD76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m05C0A4646E278C4C21055C5DCA6214C4A4E24D3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB9A615F7F8755140F09C9FC6B26B7313E2FE5E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC0D3814EBA03E00A609E8673EF92FA974904D592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4650C41D5ECC9FF76A08CB22E41AC9450EC74C51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBus_Publish_TisHeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_mE146E6946579E6591377BFC8055C761E93BBC4D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBus_Subscribe_TisHeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_m1C86DBEFE89E406F661ED05B22A4F3353D2B3471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C_m906C3EFBF7A2E87FD4D66EFB71E5BA500C9F49C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mBEE7CEE0B48C270C77E4D03AF982812E0629D607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m799F0CACA92FA19591DF233D8CE17AF6AEF1FF2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_m85B99F5FD098C15030F95FDB712F4CBF166CD743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB59D528B0017953D5CB28B8B9BE96CD8EB324FB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m382AE9892EF39343FAEF436BA9801BDE7AFE23D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshEditorPoint_updateHeight_mD64A893E4C0086D520DDE056E84B8DACADBC10B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModelMeshEditor_PointMove_m2BF953872B8340BEAA98A7946115B77B43D4814E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRequestU3Ed__2_System_Collections_IEnumerator_Reset_m73874A2326A0E1ECF72D895BDDE9D3CDFF6DC69B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRequestU3Ed__7_System_Collections_IEnumerator_Reset_m2D45F430E869D0BD69A35893361B7B7E0B7D2088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveU3Ed__8_System_Collections_IEnumerator_Reset_m67C4BA98997D7F1CF69E7508E188183805B0493D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexGenerator_PointMove_m53142BF5C8229C31ADCCAB4AE674957D52AE55BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CylinderCut_Start_m53BB4DFF9217DE3680A1A9D23AF828F6252FB25D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CylinderCut_Update_m87D87D8AB56D15D4A03DE7A8CE3EB01A29E7737C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DoubleVerticals_GetReusltVertices_mE7049D3023531CD0D6C5642815822391ED352B6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DoubleVerticals_IncreseVertices_mD940147F2C0580F8AD2589FE49F8353ED95BB056_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DoubleVerticals_Start_mBA9F213B30FD5CCC719F8BAC4E85AFE19B3EB03A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DoubleVerticals_Update_mDBEAE4A38F3BBEE1522800B54B4FC9A25252E24D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EventBus__cctor_mD2B35B0073E78E1AD4E54FC1FFA7A49BB25FBEB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditorPoint_OnTriggerStay_m6D52DC5A7D015E677C334DA70865F9E6BE424587_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditorPoint_Start_m760C93B27594D53993FF270374C811A03D29AF1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshEditorPoint_Update_m30F9F4CA9C866308657C382F984A64518F351311_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModelMeshEditor_CreateEditorPoint_mB020C70A718311248403507C0394A294D03CF8EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModelMeshEditor_PointMove_m2BF953872B8340BEAA98A7946115B77B43D4814E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModelMeshEditor_String2Vector_mFB58BF87B55526A4F3F232219D094644F89381C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModelMeshEditor_Update_m1612692B4D40EF11480F8E4285564F09891A39E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModelMeshEditor_Vector2String_m76D87D59AD9C700BE15934B5AD1E7A867619AE94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModelMeshEditor__ctor_m8DBAB2E6A8D3EA1CB84856EA503C01A2D213A519_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveDelegate_BeginInvoke_m19E4004A46E8A45CC2EAE37608625C5FED13850C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NewControl_GetRequest_mCCB1832503FB14C51A5818FB386A02A9C2243D50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NewControl_Move_m3081AE0653598397D0B18C19CFDFF16E2E52C9E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NewControl_Update_m12FD43D58ED1C2E3662AE1AF361985C285D4AD9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PuppetPiece_Start_m995EE6D1DCDFF1452A7798EF21AE9F5F6CA6CC4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PuppetPiece_Update_m21F59378D85ECFE6826644FC0CA5239C02164D48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetRequestU3Ed__2_MoveNext_m9E107817666447E083AF74429356660D4601C339_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetRequestU3Ed__2_System_Collections_IEnumerator_Reset_m73874A2326A0E1ECF72D895BDDE9D3CDFF6DC69B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetRequestU3Ed__2_U3CU3Em__Finally1_mC172A13B9E938CF8A6549DF5667528AC9899A4EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetRequestU3Ed__7_MoveNext_mA597866BC1BBE60F0CB222F8876605E55229CED5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetRequestU3Ed__7_System_Collections_IEnumerator_Reset_m2D45F430E869D0BD69A35893361B7B7E0B7D2088_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetRequestU3Ed__7_U3CU3Em__Finally1_m6933D4A1EC85C6D82601B8E8C08D24E0432BA8EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMoveU3Ed__8_MoveNext_m6DB103703E72EA06D2A5428FC180E3EC1DFEAE25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMoveU3Ed__8_System_Collections_IEnumerator_Reset_m67C4BA98997D7F1CF69E7508E188183805B0493D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator_Awake_m9205D2F7C0F5824AE48564B7B13309CAAADC2F54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator_CreateEditorPoint_m841C1B67746F49FCE8E293F15B46B79440E46F7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator_GetReusltVertices_m5A44D37536F471E013F6D0EB816158483D2A00E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator_IncreseVertices_m8D469912D529472FA270750CD04C56E264B2CBF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator_PointMove_m53142BF5C8229C31ADCCAB4AE674957D52AE55BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator_Start_m623A2892A702ADD045D327DFA9AC2FFC74B778EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator_String2Vector_m5867D9D13203D4A8B48C21A4012811C7169CB2B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator_Vector2String_m4AC7B4087D55D915D7CC8747BE4FB79669778588_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VertexGenerator__ctor_m03CCB7DF44C38B5A32170D21EC5375F2E9C2B020_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRequest_GetRequest_m785F2676FC5ABB4EB8D0B8005F29A7524037A11C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRequest_Update_mCC222596702E26820E093EBE921E51038FE01E79_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// EventBus
struct  EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852  : public RuntimeObject
{
public:

public:
};

struct EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.IList> EventBus::_topics
	Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998 * ____topics_0;

public:
	inline static int32_t get_offset_of__topics_0() { return static_cast<int32_t>(offsetof(EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852_StaticFields, ____topics_0)); }
	inline Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998 * get__topics_0() const { return ____topics_0; }
	inline Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998 ** get_address_of__topics_0() { return &____topics_0; }
	inline void set__topics_0(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998 * value)
	{
		____topics_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____topics_0), (void*)value);
	}
};


// HeightEvent
struct  HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062  : public RuntimeObject
{
public:
	// System.Single HeightEvent::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};


// NewControl_<GetRequest>d__7
struct  U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52  : public RuntimeObject
{
public:
	// System.Int32 NewControl_<GetRequest>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NewControl_<GetRequest>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// NewControl NewControl_<GetRequest>d__7::<>4__this
	NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * ___U3CU3E4__this_2;
	// System.String NewControl_<GetRequest>d__7::uri
	String_t* ___uri_3;
	// UnityEngine.Networking.UnityWebRequest NewControl_<GetRequest>d__7::<webRequest>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52, ___U3CU3E4__this_2)); }
	inline NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_uri_3() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52, ___uri_3)); }
	inline String_t* get_uri_3() const { return ___uri_3; }
	inline String_t** get_address_of_uri_3() { return &___uri_3; }
	inline void set_uri_3(String_t* value)
	{
		___uri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52, ___U3CwebRequestU3E5__2_4)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3E5__2_4() const { return ___U3CwebRequestU3E5__2_4; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3E5__2_4() { return &___U3CwebRequestU3E5__2_4; }
	inline void set_U3CwebRequestU3E5__2_4(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_4), (void*)value);
	}
};


// Subscription`1<HeightEvent>
struct  Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB  : public RuntimeObject
{
public:
	// System.Action`1<T> Subscription`1::<callback>k__BackingField
	Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 * ___U3CcallbackU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CcallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB, ___U3CcallbackU3Ek__BackingField_0)); }
	inline Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 * get_U3CcallbackU3Ek__BackingField_0() const { return ___U3CcallbackU3Ek__BackingField_0; }
	inline Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 ** get_address_of_U3CcallbackU3Ek__BackingField_0() { return &___U3CcallbackU3Ek__BackingField_0; }
	inline void set_U3CcallbackU3Ek__BackingField_0(Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 * value)
	{
		___U3CcallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcallbackU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2_KeyCollection<System.String,System.Collections.Generic.List`1<System.Int32>>
struct  KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection::dictionary
	Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76, ___dictionary_0)); }
	inline Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_KeyCollection<UnityEngine.Vector3,System.Int32>
struct  KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection::dictionary
	Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2, ___dictionary_0)); }
	inline Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>
struct  Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t60C6F39C129F0ED5FC3442C36FBFFB0170A77B12* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD67DD0079B75647C364C199FF479C7B83AE29B48 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ___entries_1)); }
	inline EntryU5BU5D_t60C6F39C129F0ED5FC3442C36FBFFB0170A77B12* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t60C6F39C129F0ED5FC3442C36FBFFB0170A77B12** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t60C6F39C129F0ED5FC3442C36FBFFB0170A77B12* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ___keys_7)); }
	inline KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ___values_8)); }
	inline ValueCollection_tD67DD0079B75647C364C199FF479C7B83AE29B48 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD67DD0079B75647C364C199FF479C7B83AE29B48 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD67DD0079B75647C364C199FF479C7B83AE29B48 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.IList>
struct  Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5AF9FD4B6B6D375C545A66AFBB75C095432C4400* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBB9F5EE4039BA6AFBC4462AF7ECAEC5BEB61C7F2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA2E91FFD1AC7D15CB1B8CD0C3536ECACCFECFDF3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ___entries_1)); }
	inline EntryU5BU5D_t5AF9FD4B6B6D375C545A66AFBB75C095432C4400* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5AF9FD4B6B6D375C545A66AFBB75C095432C4400** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5AF9FD4B6B6D375C545A66AFBB75C095432C4400* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ___keys_7)); }
	inline KeyCollection_tBB9F5EE4039BA6AFBC4462AF7ECAEC5BEB61C7F2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBB9F5EE4039BA6AFBC4462AF7ECAEC5BEB61C7F2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBB9F5EE4039BA6AFBC4462AF7ECAEC5BEB61C7F2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ___values_8)); }
	inline ValueCollection_tA2E91FFD1AC7D15CB1B8CD0C3536ECACCFECFDF3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA2E91FFD1AC7D15CB1B8CD0C3536ECACCFECFDF3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA2E91FFD1AC7D15CB1B8CD0C3536ECACCFECFDF3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>
struct  Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t523BCA3AF6D2654C20274C7979E887544792A250* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t64044A87CBBA26A0A28D31C5C6E33247E08D9801 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ___entries_1)); }
	inline EntryU5BU5D_t523BCA3AF6D2654C20274C7979E887544792A250* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t523BCA3AF6D2654C20274C7979E887544792A250** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t523BCA3AF6D2654C20274C7979E887544792A250* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ___keys_7)); }
	inline KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ___values_8)); }
	inline ValueCollection_t64044A87CBBA26A0A28D31C5C6E33247E08D9801 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t64044A87CBBA26A0A28D31C5C6E33247E08D9801 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t64044A87CBBA26A0A28D31C5C6E33247E08D9801 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// WebRequest_<GetRequest>d__2
struct  U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2  : public RuntimeObject
{
public:
	// System.Int32 WebRequest_<GetRequest>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WebRequest_<GetRequest>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// WebRequest WebRequest_<GetRequest>d__2::<>4__this
	WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * ___U3CU3E4__this_2;
	// System.String WebRequest_<GetRequest>d__2::uri
	String_t* ___uri_3;
	// UnityEngine.Networking.UnityWebRequest WebRequest_<GetRequest>d__2::<webRequest>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2, ___U3CU3E4__this_2)); }
	inline WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_uri_3() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2, ___uri_3)); }
	inline String_t* get_uri_3() const { return ___uri_3; }
	inline String_t** get_address_of_uri_3() { return &___uri_3; }
	inline void set_uri_3(String_t* value)
	{
		___uri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2, ___U3CwebRequestU3E5__2_4)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3E5__2_4() const { return ___U3CwebRequestU3E5__2_4; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3E5__2_4() { return &___U3CwebRequestU3E5__2_4; }
	inline void set_U3CwebRequestU3E5__2_4(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_4), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator<System.Object,System.Object>
struct  Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator<System.String,System.Collections.Generic.List`1<System.Int32>>
struct  Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::dictionary
	Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2_KeyCollection_Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149, ___dictionary_0)); }
	inline Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149, ___currentKey_3)); }
	inline String_t* get_currentKey_3() const { return ___currentKey_3; }
	inline String_t** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(String_t* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// NewControl_<Move>d__8
struct  U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39  : public RuntimeObject
{
public:
	// System.Int32 NewControl_<Move>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NewControl_<Move>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// NewControl NewControl_<Move>d__8::<>4__this
	NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 NewControl_<Move>d__8::<start>5__2
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CstartU3E5__2_3;
	// UnityEngine.Vector3 NewControl_<Move>d__8::<end>5__3
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CendU3E5__3_4;
	// System.Single NewControl_<Move>d__8::<progress>5__4
	float ___U3CprogressU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39, ___U3CU3E4__this_2)); }
	inline NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39, ___U3CstartU3E5__2_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CstartU3E5__2_3() const { return ___U3CstartU3E5__2_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CstartU3E5__2_3() { return &___U3CstartU3E5__2_3; }
	inline void set_U3CstartU3E5__2_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CstartU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CendU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39, ___U3CendU3E5__3_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CendU3E5__3_4() const { return ___U3CendU3E5__3_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CendU3E5__3_4() { return &___U3CendU3E5__3_4; }
	inline void set_U3CendU3E5__3_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CendU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CprogressU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39, ___U3CprogressU3E5__4_5)); }
	inline float get_U3CprogressU3E5__4_5() const { return ___U3CprogressU3E5__4_5; }
	inline float* get_address_of_U3CprogressU3E5__4_5() { return &___U3CprogressU3E5__4_5; }
	inline void set_U3CprogressU3E5__4_5(float value)
	{
		___U3CprogressU3E5__4_5 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// MeshEditorPoint_MoveDelegate
struct  MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<HeightEvent>
struct  Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// CylinderCut
struct  CylinderCut_t3614A0598C59581B604AF6E9AD0877F3DF1F7087  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single CylinderCut::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Vector3 CylinderCut::centerOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___centerOffset_5;
	// System.Single CylinderCut::height
	float ___height_6;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(CylinderCut_t3614A0598C59581B604AF6E9AD0877F3DF1F7087, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_centerOffset_5() { return static_cast<int32_t>(offsetof(CylinderCut_t3614A0598C59581B604AF6E9AD0877F3DF1F7087, ___centerOffset_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_centerOffset_5() const { return ___centerOffset_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_centerOffset_5() { return &___centerOffset_5; }
	inline void set_centerOffset_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___centerOffset_5 = value;
	}

	inline static int32_t get_offset_of_height_6() { return static_cast<int32_t>(offsetof(CylinderCut_t3614A0598C59581B604AF6E9AD0877F3DF1F7087, ___height_6)); }
	inline float get_height_6() const { return ___height_6; }
	inline float* get_address_of_height_6() { return &___height_6; }
	inline void set_height_6(float value)
	{
		___height_6 = value;
	}
};


// DoubleVerticals
struct  DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Mesh DoubleVerticals::mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_4;
	// UnityEngine.Vector3[] DoubleVerticals::origVertices
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___origVertices_5;
	// System.Int32[] DoubleVerticals::origTrangles
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___origTrangles_6;

public:
	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9, ___mesh_4)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_origVertices_5() { return static_cast<int32_t>(offsetof(DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9, ___origVertices_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_origVertices_5() const { return ___origVertices_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_origVertices_5() { return &___origVertices_5; }
	inline void set_origVertices_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___origVertices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origVertices_5), (void*)value);
	}

	inline static int32_t get_offset_of_origTrangles_6() { return static_cast<int32_t>(offsetof(DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9, ___origTrangles_6)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_origTrangles_6() const { return ___origTrangles_6; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_origTrangles_6() { return &___origTrangles_6; }
	inline void set_origTrangles_6(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___origTrangles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origTrangles_6), (void*)value);
	}
};


// MeshEditorPoint
struct  MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String MeshEditorPoint::pointid
	String_t* ___pointid_4;
	// UnityEngine.Vector3 MeshEditorPoint::lastPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lastPosition_5;
	// MeshEditorPoint_MoveDelegate MeshEditorPoint::onMove
	MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * ___onMove_6;
	// System.Single MeshEditorPoint::height
	float ___height_7;
	// Subscription`1<HeightEvent> MeshEditorPoint::heightSub
	Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB * ___heightSub_8;

public:
	inline static int32_t get_offset_of_pointid_4() { return static_cast<int32_t>(offsetof(MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C, ___pointid_4)); }
	inline String_t* get_pointid_4() const { return ___pointid_4; }
	inline String_t** get_address_of_pointid_4() { return &___pointid_4; }
	inline void set_pointid_4(String_t* value)
	{
		___pointid_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointid_4), (void*)value);
	}

	inline static int32_t get_offset_of_lastPosition_5() { return static_cast<int32_t>(offsetof(MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C, ___lastPosition_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lastPosition_5() const { return ___lastPosition_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lastPosition_5() { return &___lastPosition_5; }
	inline void set_lastPosition_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lastPosition_5 = value;
	}

	inline static int32_t get_offset_of_onMove_6() { return static_cast<int32_t>(offsetof(MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C, ___onMove_6)); }
	inline MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * get_onMove_6() const { return ___onMove_6; }
	inline MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 ** get_address_of_onMove_6() { return &___onMove_6; }
	inline void set_onMove_6(MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * value)
	{
		___onMove_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onMove_6), (void*)value);
	}

	inline static int32_t get_offset_of_height_7() { return static_cast<int32_t>(offsetof(MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C, ___height_7)); }
	inline float get_height_7() const { return ___height_7; }
	inline float* get_address_of_height_7() { return &___height_7; }
	inline void set_height_7(float value)
	{
		___height_7 = value;
	}

	inline static int32_t get_offset_of_heightSub_8() { return static_cast<int32_t>(offsetof(MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C, ___heightSub_8)); }
	inline Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB * get_heightSub_8() const { return ___heightSub_8; }
	inline Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB ** get_address_of_heightSub_8() { return &___heightSub_8; }
	inline void set_heightSub_8(Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB * value)
	{
		___heightSub_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heightSub_8), (void*)value);
	}
};


// ModelMeshEditor
struct  ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single ModelMeshEditor::pointScale
	float ___pointScale_4;
	// System.Single ModelMeshEditor::lastPointScale
	float ___lastPointScale_5;
	// UnityEngine.GameObject ModelMeshEditor::editorpoint
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___editorpoint_6;
	// UnityEngine.Mesh ModelMeshEditor::mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ModelMeshEditor::positionList
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___positionList_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ModelMeshEditor::positionObjList
	List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * ___positionObjList_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> ModelMeshEditor::pointmap
	Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * ___pointmap_10;

public:
	inline static int32_t get_offset_of_pointScale_4() { return static_cast<int32_t>(offsetof(ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957, ___pointScale_4)); }
	inline float get_pointScale_4() const { return ___pointScale_4; }
	inline float* get_address_of_pointScale_4() { return &___pointScale_4; }
	inline void set_pointScale_4(float value)
	{
		___pointScale_4 = value;
	}

	inline static int32_t get_offset_of_lastPointScale_5() { return static_cast<int32_t>(offsetof(ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957, ___lastPointScale_5)); }
	inline float get_lastPointScale_5() const { return ___lastPointScale_5; }
	inline float* get_address_of_lastPointScale_5() { return &___lastPointScale_5; }
	inline void set_lastPointScale_5(float value)
	{
		___lastPointScale_5 = value;
	}

	inline static int32_t get_offset_of_editorpoint_6() { return static_cast<int32_t>(offsetof(ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957, ___editorpoint_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_editorpoint_6() const { return ___editorpoint_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_editorpoint_6() { return &___editorpoint_6; }
	inline void set_editorpoint_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___editorpoint_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorpoint_6), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_7() { return static_cast<int32_t>(offsetof(ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957, ___mesh_7)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_mesh_7() const { return ___mesh_7; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_mesh_7() { return &___mesh_7; }
	inline void set_mesh_7(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___mesh_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_7), (void*)value);
	}

	inline static int32_t get_offset_of_positionList_8() { return static_cast<int32_t>(offsetof(ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957, ___positionList_8)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_positionList_8() const { return ___positionList_8; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_positionList_8() { return &___positionList_8; }
	inline void set_positionList_8(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___positionList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionList_8), (void*)value);
	}

	inline static int32_t get_offset_of_positionObjList_9() { return static_cast<int32_t>(offsetof(ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957, ___positionObjList_9)); }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * get_positionObjList_9() const { return ___positionObjList_9; }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B ** get_address_of_positionObjList_9() { return &___positionObjList_9; }
	inline void set_positionObjList_9(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * value)
	{
		___positionObjList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionObjList_9), (void*)value);
	}

	inline static int32_t get_offset_of_pointmap_10() { return static_cast<int32_t>(offsetof(ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957, ___pointmap_10)); }
	inline Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * get_pointmap_10() const { return ___pointmap_10; }
	inline Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 ** get_address_of_pointmap_10() { return &___pointmap_10; }
	inline void set_pointmap_10(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * value)
	{
		___pointmap_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointmap_10), (void*)value);
	}
};


// NewControl
struct  NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject NewControl::drill
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___drill_4;
	// UnityEngine.Vector3 NewControl::initial
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___initial_5;
	// System.Int32 NewControl::id
	int32_t ___id_6;
	// System.Single NewControl::x
	float ___x_7;
	// System.Single NewControl::y
	float ___y_8;
	// System.Single NewControl::z
	float ___z_9;
	// System.Boolean NewControl::idLock
	bool ___idLock_10;

public:
	inline static int32_t get_offset_of_drill_4() { return static_cast<int32_t>(offsetof(NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195, ___drill_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_drill_4() const { return ___drill_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_drill_4() { return &___drill_4; }
	inline void set_drill_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___drill_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drill_4), (void*)value);
	}

	inline static int32_t get_offset_of_initial_5() { return static_cast<int32_t>(offsetof(NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195, ___initial_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_initial_5() const { return ___initial_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_initial_5() { return &___initial_5; }
	inline void set_initial_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___initial_5 = value;
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195, ___id_6)); }
	inline int32_t get_id_6() const { return ___id_6; }
	inline int32_t* get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(int32_t value)
	{
		___id_6 = value;
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195, ___x_7)); }
	inline float get_x_7() const { return ___x_7; }
	inline float* get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(float value)
	{
		___x_7 = value;
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195, ___y_8)); }
	inline float get_y_8() const { return ___y_8; }
	inline float* get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(float value)
	{
		___y_8 = value;
	}

	inline static int32_t get_offset_of_z_9() { return static_cast<int32_t>(offsetof(NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195, ___z_9)); }
	inline float get_z_9() const { return ___z_9; }
	inline float* get_address_of_z_9() { return &___z_9; }
	inline void set_z_9(float value)
	{
		___z_9 = value;
	}

	inline static int32_t get_offset_of_idLock_10() { return static_cast<int32_t>(offsetof(NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195, ___idLock_10)); }
	inline bool get_idLock_10() const { return ___idLock_10; }
	inline bool* get_address_of_idLock_10() { return &___idLock_10; }
	inline void set_idLock_10(bool value)
	{
		___idLock_10 = value;
	}
};


// PuppetDrill
struct  PuppetDrill_t824C6B471A382CA70EA1030190CF0718BE5B0338  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject PuppetDrill::puppet
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___puppet_4;

public:
	inline static int32_t get_offset_of_puppet_4() { return static_cast<int32_t>(offsetof(PuppetDrill_t824C6B471A382CA70EA1030190CF0718BE5B0338, ___puppet_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_puppet_4() const { return ___puppet_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_puppet_4() { return &___puppet_4; }
	inline void set_puppet_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___puppet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puppet_4), (void*)value);
	}
};


// PuppetPiece
struct  PuppetPiece_t242E97D65C6FF13E7135CC6F13BB91E60BF5F272  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject PuppetPiece::puppet
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___puppet_4;

public:
	inline static int32_t get_offset_of_puppet_4() { return static_cast<int32_t>(offsetof(PuppetPiece_t242E97D65C6FF13E7135CC6F13BB91E60BF5F272, ___puppet_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_puppet_4() const { return ___puppet_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_puppet_4() { return &___puppet_4; }
	inline void set_puppet_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___puppet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___puppet_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// VertexGenerator
struct  VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single VertexGenerator::pointScale
	float ___pointScale_4;
	// UnityEngine.GameObject VertexGenerator::editorpoint
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___editorpoint_5;
	// UnityEngine.Mesh VertexGenerator::mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> VertexGenerator::positionList
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___positionList_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> VertexGenerator::positionObjList
	List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * ___positionObjList_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> VertexGenerator::pointmap
	Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * ___pointmap_9;
	// System.Int32 VertexGenerator::iteration
	int32_t ___iteration_10;
	// UnityEngine.Vector3[] VertexGenerator::origVertices
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___origVertices_11;
	// System.Int32[] VertexGenerator::origTrangles
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___origTrangles_12;

public:
	inline static int32_t get_offset_of_pointScale_4() { return static_cast<int32_t>(offsetof(VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106, ___pointScale_4)); }
	inline float get_pointScale_4() const { return ___pointScale_4; }
	inline float* get_address_of_pointScale_4() { return &___pointScale_4; }
	inline void set_pointScale_4(float value)
	{
		___pointScale_4 = value;
	}

	inline static int32_t get_offset_of_editorpoint_5() { return static_cast<int32_t>(offsetof(VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106, ___editorpoint_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_editorpoint_5() const { return ___editorpoint_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_editorpoint_5() { return &___editorpoint_5; }
	inline void set_editorpoint_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___editorpoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorpoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_6() { return static_cast<int32_t>(offsetof(VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106, ___mesh_6)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_mesh_6() const { return ___mesh_6; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_mesh_6() { return &___mesh_6; }
	inline void set_mesh_6(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___mesh_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_6), (void*)value);
	}

	inline static int32_t get_offset_of_positionList_7() { return static_cast<int32_t>(offsetof(VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106, ___positionList_7)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_positionList_7() const { return ___positionList_7; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_positionList_7() { return &___positionList_7; }
	inline void set_positionList_7(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___positionList_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionList_7), (void*)value);
	}

	inline static int32_t get_offset_of_positionObjList_8() { return static_cast<int32_t>(offsetof(VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106, ___positionObjList_8)); }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * get_positionObjList_8() const { return ___positionObjList_8; }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B ** get_address_of_positionObjList_8() { return &___positionObjList_8; }
	inline void set_positionObjList_8(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * value)
	{
		___positionObjList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionObjList_8), (void*)value);
	}

	inline static int32_t get_offset_of_pointmap_9() { return static_cast<int32_t>(offsetof(VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106, ___pointmap_9)); }
	inline Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * get_pointmap_9() const { return ___pointmap_9; }
	inline Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 ** get_address_of_pointmap_9() { return &___pointmap_9; }
	inline void set_pointmap_9(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * value)
	{
		___pointmap_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointmap_9), (void*)value);
	}

	inline static int32_t get_offset_of_iteration_10() { return static_cast<int32_t>(offsetof(VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106, ___iteration_10)); }
	inline int32_t get_iteration_10() const { return ___iteration_10; }
	inline int32_t* get_address_of_iteration_10() { return &___iteration_10; }
	inline void set_iteration_10(int32_t value)
	{
		___iteration_10 = value;
	}

	inline static int32_t get_offset_of_origVertices_11() { return static_cast<int32_t>(offsetof(VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106, ___origVertices_11)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_origVertices_11() const { return ___origVertices_11; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_origVertices_11() { return &___origVertices_11; }
	inline void set_origVertices_11(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___origVertices_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origVertices_11), (void*)value);
	}

	inline static int32_t get_offset_of_origTrangles_12() { return static_cast<int32_t>(offsetof(VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106, ___origTrangles_12)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_origTrangles_12() const { return ___origTrangles_12; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_origTrangles_12() { return &___origTrangles_12; }
	inline void set_origTrangles_12(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___origTrangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origTrangles_12), (void*)value);
	}
};


// WebRequest
struct  WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text WebRequest::info
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___info_4;
	// System.Boolean WebRequest::idLock
	bool ___idLock_5;

public:
	inline static int32_t get_offset_of_info_4() { return static_cast<int32_t>(offsetof(WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9, ___info_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_info_4() const { return ___info_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_info_4() { return &___info_4; }
	inline void set_info_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___info_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___info_4), (void*)value);
	}

	inline static int32_t get_offset_of_idLock_5() { return static_cast<int32_t>(offsetof(WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9, ___idLock_5)); }
	inline bool get_idLock_5() const { return ___idLock_5; }
	inline bool* get_address_of_idLock_5() { return &___idLock_5; }
	inline void set_idLock_5(bool value)
	{
		___idLock_5 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void EventBus::Publish<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBus_Publish_TisRuntimeObject_m42F6A40FC40AF02CE4C154B9463B7B0094E30F43_gshared (RuntimeObject * ___published_event0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCA6DED850C86DFE3FB0684689AF050D68569AD76_gshared (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_gshared (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::ContainsValue(!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mCE3D9C202670540847AD2A2B8F99727727D97CA8_gshared (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mF877DE353865F5D40ED8958FF63D9F2EADB637FE_gshared (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m01A4C79F3249F0ADC0C6C5BBD018D2E93FF79365_gshared (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040_gshared (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_m85B99F5FD098C15030F95FDB712F4CBF166CD743_gshared (KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Subscription`1<T> EventBus::Subscribe<System.Object>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Subscription_1_t4BE3B4FCF286F627E61679369F07F5E720E988AF * EventBus_Subscribe_TisRuntimeObject_mE548B417E8FAAA1270229EC7721FE6D30EBE33D3_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___callback0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210  KeyCollection_GetEnumerator_m5266F82C7802D6360C7309C1F1AFBF418E2720A4_gshared (KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m408718285307B20591360EC502455AD7600484F5_gshared_inline (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD31B08C2C495C4E36212D895023AA5FF66C8519A_gshared (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m68022351A81C9EF02FD42CFB383B00B5FD3CEA70_gshared (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m382AE9892EF39343FAEF436BA9801BDE7AFE23D7_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CapsuleCollider_get_center_m415B40B8ADB6B1C29F3EF4C23839D5514BBA18AE (CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_mA0F14683CEDB4F32B59D0262AB7507574228EF75 (CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void HeightEvent::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightEvent__ctor_mCE32AC9DAE963F2DC978B3C68006DCC0B87B6EB3 (HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062 * __this, float ____height0, const RuntimeMethod* method);
// System.Void EventBus::Publish<HeightEvent>(T)
inline void EventBus_Publish_TisHeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_mE146E6946579E6591377BFC8055C761E93BBC4D5 (HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062 * ___published_event0, const RuntimeMethod* method)
{
	((  void (*) (HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062 *, const RuntimeMethod*))EventBus_Publish_TisRuntimeObject_m42F6A40FC40AF02CE4C154B9463B7B0094E30F43_gshared)(___published_event0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD95998D19E698E66D5396829BC6865C8E87E1E4B (String_t* ___name0, const RuntimeMethod* method);
// System.Void DoubleVerticals::IncreseVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleVerticals_IncreseVertices_mD940147F2C0580F8AD2589FE49F8353ED95BB056 (DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mE6F1153EA724F831AD11F10807ABE664CC02E0AF (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Mesh_get_triangles_mAAAFC770B8EE3F56992D5764EF8C2EC06EF743AC (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mCA6DED850C86DFE3FB0684689AF050D68569AD76 (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 *, const RuntimeMethod*))Dictionary_2__ctor_mCA6DED850C86DFE3FB0684689AF050D68569AD76_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Boolean DoubleVerticals::AddVertices(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415 (DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9 * __this, Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * ___verticesResultDic0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vertice1, int32_t ___index2, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14 (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3[] DoubleVerticals::GetReusltVertices(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* DoubleVerticals_GetReusltVertices_mE7049D3023531CD0D6C5642815822391ED352B6C (DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9 * __this, Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * ___verticesResultDic0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m143A1C262BADCFACE43587EBA2CDC6EBEB5DFAED (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_m1BF701FE2CEA4E8E1183FF878B812808ED1EBA49 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::ContainsValue(!1)
inline bool Dictionary_2_ContainsValue_mCE3D9C202670540847AD2A2B8F99727727D97CA8 (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsValue_mCE3D9C202670540847AD2A2B8F99727727D97CA8_gshared)(__this, ___value0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mF877DE353865F5D40ED8958FF63D9F2EADB637FE (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))Dictionary_2_ContainsKey_mF877DE353865F5D40ED8958FF63D9F2EADB637FE_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m01A4C79F3249F0ADC0C6C5BBD018D2E93FF79365 (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t, const RuntimeMethod*))Dictionary_2_Add_m01A4C79F3249F0ADC0C6C5BBD018D2E93FF79365_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::get_Keys()
inline KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040 (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * (*) (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 *, const RuntimeMethod*))Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3,System.Int32>::get_Count()
inline int32_t KeyCollection_get_Count_m85B99F5FD098C15030F95FDB712F4CBF166CD743 (KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 *, const RuntimeMethod*))KeyCollection_get_Count_m85B99F5FD098C15030F95FDB712F4CBF166CD743_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C_gshared)(__this, ___collection0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.IList>::.ctor()
inline void Dictionary_2__ctor_m519F6A98BA789EFE72129CE9C5821197F2BAAA46 (Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Action`1<HeightEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6FE0F35A1DBC2D121FE43C718D2A76E7AFB26E50 (Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// Subscription`1<T> EventBus::Subscribe<HeightEvent>(System.Action`1<T>)
inline Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB * EventBus_Subscribe_TisHeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_m1C86DBEFE89E406F661ED05B22A4F3353D2B3471 (Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 * ___callback0, const RuntimeMethod* method)
{
	return ((  Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB * (*) (Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 *, const RuntimeMethod*))EventBus_Subscribe_TisRuntimeObject_mE548B417E8FAAA1270229EC7721FE6D30EBE33D3_gshared)(___callback0, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void MeshEditorPoint/MoveDelegate::Invoke(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveDelegate_Invoke_m10247D24F5CD6A0002CB7840878A1C4B01CAB1B8 (MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * __this, String_t* ___pid0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos1, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.String ModelMeshEditor::Vector2String(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModelMeshEditor_Vector2String_m76D87D59AD9C700BE15934B5AD1E7A867619AE94 (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6 (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::Add(!0,!1)
inline void Dictionary_2_Add_m08669E08F649DEBCB507A5E9DD56770CF899BEF7 (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * __this, String_t* ___key0, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 *, String_t*, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::get_Item(!0)
inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760 (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * (*) (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::get_Keys()
inline KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 * Dictionary_2_get_Keys_m05C0A4646E278C4C21055C5DCA6214C4A4E24D3E (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 * (*) (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 *, const RuntimeMethod*))Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Int32>>::GetEnumerator()
inline Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149  KeyCollection_GetEnumerator_m799F0CACA92FA19591DF233D8CE17AF6AEF1FF2C (KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149  (*) (KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m5266F82C7802D6360C7309C1F1AFBF418E2720A4_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Int32>>::get_Current()
inline String_t* Enumerator_get_Current_m4650C41D5ECC9FF76A08CB22E41AC9450EC74C51_inline (Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 *, const RuntimeMethod*))Enumerator_get_Current_m408718285307B20591360EC502455AD7600484F5_gshared_inline)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 ModelMeshEditor::String2Vector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ModelMeshEditor_String2Vector_mFB58BF87B55526A4F3F232219D094644F89381C7 (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, String_t* ___vstr0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MeshEditorPoint>()
inline MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * GameObject_GetComponent_TisMeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C_m906C3EFBF7A2E87FD4D66EFB71E5BA500C9F49C7 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void MeshEditorPoint/MoveDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveDelegate__ctor_m0EDF44AF0EE42298FE68757297A95B5CA94A99C1 (MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687 (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Int32>>::MoveNext()
inline bool Enumerator_MoveNext_mC0D3814EBA03E00A609E8673EF92FA974904D592 (Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 *, const RuntimeMethod*))Enumerator_MoveNext_mD31B08C2C495C4E36212D895023AA5FF66C8519A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Int32>>::Dispose()
inline void Enumerator_Dispose_mB9A615F7F8755140F09C9FC6B26B7313E2FE5E7B (Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 *, const RuntimeMethod*))Enumerator_Dispose_m68022351A81C9EF02FD42CFB383B00B5FD3CEA70_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m382AE9892EF39343FAEF436BA9801BDE7AFE23D7 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_set_Item_m382AE9892EF39343FAEF436BA9801BDE7AFE23D7_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void ModelMeshEditor::CreateEditorPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelMeshEditor_CreateEditorPoint_mB020C70A718311248403507C0394A294D03CF8EA (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_mB59D528B0017953D5CB28B8B9BE96CD8EB324FB7_inline (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_inline (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1 (StringBuilder_t * __this, float ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6 (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60 (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>::.ctor()
inline void Dictionary_2__ctor_m7067EEB3CF8A52DE17DCCA02E2ABF40CC224BF28 (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void NewControl/<GetRequest>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__7__ctor_m3354A1A46971C8F8431A1E39A43D7C576A50A410 (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void NewControl/<Move>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__8__ctor_mE80CD0A8769F63290415C97ACFC4EA95018A09B5 (U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Collections.IEnumerator NewControl::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControl_GetRequest_mCCB1832503FB14C51A5818FB386A02A9C2243D50 (NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * __this, String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void NewControl/<GetRequest>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__7_U3CU3Em__Finally1_m6933D4A1EC85C6D82601B8E8C08D24E0432BA8EB (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18 (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Collections.IEnumerator NewControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControl_Move_m3081AE0653598397D0B18C19CFDFF16E2E52C9E1 (NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * __this, const RuntimeMethod* method);
// System.Void NewControl/<GetRequest>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__7_System_IDisposable_Dispose_m81C99340654B1D243A7C0F816E47E5C36639D2E9 (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mBEE7CEE0B48C270C77E4D03AF982812E0629D607 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method);
// System.Void VertexGenerator::IncreseVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGenerator_IncreseVertices_m8D469912D529472FA270750CD04C56E264B2CBF2 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, const RuntimeMethod* method);
// System.Void VertexGenerator::CreateEditorPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGenerator_CreateEditorPoint_m841C1B67746F49FCE8E293F15B46B79440E46F7D (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, const RuntimeMethod* method);
// System.String VertexGenerator::Vector2String(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexGenerator_Vector2String_m4AC7B4087D55D915D7CC8747BE4FB79669778588 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 VertexGenerator::String2Vector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  VertexGenerator_String2Vector_m5867D9D13203D4A8B48C21A4012811C7169CB2B0 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, String_t* ___vstr0, const RuntimeMethod* method);
// System.Boolean VertexGenerator::AddVertices(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * ___verticesResultDic0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vertice1, int32_t ___index2, const RuntimeMethod* method);
// UnityEngine.Vector3[] VertexGenerator::GetReusltVertices(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* VertexGenerator_GetReusltVertices_m5A44D37536F471E013F6D0EB816158483D2A00E2 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * ___verticesResultDic0, const RuntimeMethod* method);
// System.Void WebRequest/<GetRequest>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__2__ctor_m1EF00D8D2741021E9951D79F2C2E5DCA46976234 (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator WebRequest::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequest_GetRequest_m785F2676FC5ABB4EB8D0B8005F29A7524037A11C (WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * __this, String_t* ___uri0, const RuntimeMethod* method);
// System.Void WebRequest/<GetRequest>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__2_U3CU3Em__Finally1_mC172A13B9E938CF8A6549DF5667528AC9899A4EF (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, const RuntimeMethod* method);
// System.Void WebRequest/<GetRequest>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__2_System_IDisposable_Dispose_m584951EB1448BBDE8F99AF0C439DA16C91D7061A (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void CylinderCut::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderCut_Start_m53BB4DFF9217DE3680A1A9D23AF828F6252FB25D (CylinderCut_t3614A0598C59581B604AF6E9AD0877F3DF1F7087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CylinderCut_Start_m53BB4DFF9217DE3680A1A9D23AF828F6252FB25D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// centerOffset = GetComponent<CapsuleCollider>().center;
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_0 = Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = CapsuleCollider_get_center_m415B40B8ADB6B1C29F3EF4C23839D5514BBA18AE(L_0, /*hidden argument*/NULL);
		__this->set_centerOffset_5(L_1);
		// height = GetComponent<CapsuleCollider>().height * gameObject.transform.localScale.y / 2;
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_2 = Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3 = CapsuleCollider_get_height_mA0F14683CEDB4F32B59D0262AB7507574228EF75(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		__this->set_height_6(((float)((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_7))/(float)(2.0f))));
		// }
		return;
	}
}
// System.Void CylinderCut::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderCut_Update_m87D87D8AB56D15D4A03DE7A8CE3EB01A29E7737C (CylinderCut_t3614A0598C59581B604AF6E9AD0877F3DF1F7087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CylinderCut_Update_m87D87D8AB56D15D4A03DE7A8CE3EB01A29E7737C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventBus.Publish<HeightEvent>(new HeightEvent(gameObject.transform.position.y - height));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		float L_4 = __this->get_height_6();
		HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062 * L_5 = (HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062 *)il2cpp_codegen_object_new(HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_il2cpp_TypeInfo_var);
		HeightEvent__ctor_mCE32AC9DAE963F2DC978B3C68006DCC0B87B6EB3(L_5, ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852_il2cpp_TypeInfo_var);
		EventBus_Publish_TisHeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_mE146E6946579E6591377BFC8055C761E93BBC4D5(L_5, /*hidden argument*/EventBus_Publish_TisHeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_mE146E6946579E6591377BFC8055C761E93BBC4D5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CylinderCut::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderCut__ctor_m07209E1A051B17BB27CB6654E383AD93C0AE558A (CylinderCut_t3614A0598C59581B604AF6E9AD0877F3DF1F7087 * __this, const RuntimeMethod* method)
{
	{
		// public float moveSpeed = 2.0f;
		__this->set_moveSpeed_4((2.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DoubleVerticals::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleVerticals_Start_mBA9F213B30FD5CCC719F8BAC4E85AFE19B3EB03A (DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DoubleVerticals_Start_mBA9F213B30FD5CCC719F8BAC4E85AFE19B3EB03A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh = transform.GetComponent<MeshFilter>().mesh;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_1 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0(L_0, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var);
		NullCheck(L_1);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_2 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_1, /*hidden argument*/NULL);
		__this->set_mesh_4(L_2);
		// }
		return;
	}
}
// System.Void DoubleVerticals::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleVerticals_Update_mDBEAE4A38F3BBEE1522800B54B4FC9A25252E24D (DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DoubleVerticals_Update_mDBEAE4A38F3BBEE1522800B54B4FC9A25252E24D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown("space"))
		bool L_0 = Input_GetKeyDown_mD95998D19E698E66D5396829BC6865C8E87E1E4B(_stringLiteral0803DF4FF1650933D2FFE6BE04D4B21432134252, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// IncreseVertices();
		DoubleVerticals_IncreseVertices_mD940147F2C0580F8AD2589FE49F8353ED95BB056(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void DoubleVerticals::IncreseVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleVerticals_IncreseVertices_mD940147F2C0580F8AD2589FE49F8353ED95BB056 (DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DoubleVerticals_IncreseVertices_mD940147F2C0580F8AD2589FE49F8353ED95BB056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * V_0 = NULL;
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_5 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if (mesh.vertexCount >= 18432)
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = __this->get_mesh_4();
		NullCheck(L_0);
		int32_t L_1 = Mesh_get_vertexCount_mE6F1153EA724F831AD11F10807ABE664CC02E0AF(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)18432))))
		{
			goto IL_001d;
		}
	}
	{
		// Debug.Log("Too Many");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral758EAD9D7EED73D1576E2157E7EA5022E5B3808F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001d:
	{
		// origVertices = mesh.vertices;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_2 = __this->get_mesh_4();
		NullCheck(L_2);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_2, /*hidden argument*/NULL);
		__this->set_origVertices_5(L_3);
		// origTrangles = mesh.triangles;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_4 = __this->get_mesh_4();
		NullCheck(L_4);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = Mesh_get_triangles_mAAAFC770B8EE3F56992D5764EF8C2EC06EF743AC(L_4, /*hidden argument*/NULL);
		__this->set_origTrangles_6(L_5);
		// Dictionary<Vector3, int> verticesResultDic = new Dictionary<Vector3, int>();
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_6 = (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 *)il2cpp_codegen_object_new(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA6DED850C86DFE3FB0684689AF050D68569AD76(L_6, /*hidden argument*/Dictionary_2__ctor_mCA6DED850C86DFE3FB0684689AF050D68569AD76_RuntimeMethod_var);
		V_0 = L_6;
		// List<int> tranglesResultList = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_7, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		V_1 = L_7;
		// int k = origTrangles.Length / 3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = __this->get_origTrangles_6();
		NullCheck(L_8);
		V_2 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))/(int32_t)3));
		// int index = 0;
		V_3 = 0;
		// for (int i = 0; i < k; i++)
		V_4 = 0;
		goto IL_025f;
	}

IL_0060:
	{
		// Vector3[] trangle = new Vector3[3] { origVertices[origTrangles[i * 3]], origVertices[origTrangles[i * 3 + 1]], origVertices[origTrangles[i * 3 + 2]] };
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = L_9;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = __this->get_origVertices_5();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = __this->get_origTrangles_6();
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)3));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		int32_t L_16 = L_15;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_17);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_18 = L_10;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_19 = __this->get_origVertices_5();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_20 = __this->get_origTrangles_6();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)3)), (int32_t)1));
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		int32_t L_24 = L_23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_25);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_26 = L_18;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_27 = __this->get_origVertices_5();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = __this->get_origTrangles_6();
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)3)), (int32_t)2));
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		int32_t L_32 = L_31;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_33);
		V_5 = L_26;
		// Vector3[] result = new Vector3[6];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_34 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)6);
		// Vector3 v01 = (trangle[0] + trangle[1]) * 0.5f;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_38 = V_5;
		NullCheck(L_38);
		int32_t L_39 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_37, L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_41, (0.5f), /*hidden argument*/NULL);
		V_6 = L_42;
		// Vector3 v12 = (trangle[1] + trangle[2]) * 0.5f;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_43 = V_5;
		NullCheck(L_43);
		int32_t L_44 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_45, L_48, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_49, (0.5f), /*hidden argument*/NULL);
		V_7 = L_50;
		// Vector3 v02 = (trangle[0] + trangle[2]) * 0.5f;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_51 = V_5;
		NullCheck(L_51);
		int32_t L_52 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_54 = V_5;
		NullCheck(L_54);
		int32_t L_55 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_53, L_56, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_57, (0.5f), /*hidden argument*/NULL);
		V_8 = L_58;
		// if (AddVertices(verticesResultDic, trangle[0], index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_59 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_60 = V_5;
		NullCheck(L_60);
		int32_t L_61 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = V_3;
		bool L_64 = DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415(__this, L_59, L_62, L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_0143;
		}
	}
	{
		// if (AddVertices(verticesResultDic, trangle[0], index)) index++;
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_0143:
	{
		// if (AddVertices(verticesResultDic, trangle[1], index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_66 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_67 = V_5;
		NullCheck(L_67);
		int32_t L_68 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		int32_t L_70 = V_3;
		bool L_71 = DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415(__this, L_66, L_69, L_70, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0159;
		}
	}
	{
		// if (AddVertices(verticesResultDic, trangle[1], index)) index++;
		int32_t L_72 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_0159:
	{
		// if (AddVertices(verticesResultDic, trangle[2], index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_73 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_74 = V_5;
		NullCheck(L_74);
		int32_t L_75 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = V_3;
		bool L_78 = DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415(__this, L_73, L_76, L_77, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_016f;
		}
	}
	{
		// if (AddVertices(verticesResultDic, trangle[2], index)) index++;
		int32_t L_79 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_016f:
	{
		// if (AddVertices(verticesResultDic, v01, index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_80 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = V_6;
		int32_t L_82 = V_3;
		bool L_83 = DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415(__this, L_80, L_81, L_82, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_017f;
		}
	}
	{
		// if (AddVertices(verticesResultDic, v01, index)) index++;
		int32_t L_84 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_017f:
	{
		// if (AddVertices(verticesResultDic, v12, index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_85 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = V_7;
		int32_t L_87 = V_3;
		bool L_88 = DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415(__this, L_85, L_86, L_87, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_018f;
		}
	}
	{
		// if (AddVertices(verticesResultDic, v12, index)) index++;
		int32_t L_89 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_018f:
	{
		// if (AddVertices(verticesResultDic, v02, index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_90 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = V_8;
		int32_t L_92 = V_3;
		bool L_93 = DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415(__this, L_90, L_91, L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_019f;
		}
	}
	{
		// if (AddVertices(verticesResultDic, v02, index)) index++;
		int32_t L_94 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_019f:
	{
		// tranglesResultList.Add(verticesResultDic[trangle[0]]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_95 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_96 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_97 = V_5;
		NullCheck(L_97);
		int32_t L_98 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_96);
		int32_t L_100 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_96, L_99, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_95);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_95, L_100, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v01]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_101 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_102 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_103 = V_6;
		NullCheck(L_102);
		int32_t L_104 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_102, L_103, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_101);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_101, L_104, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v02]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_105 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_106 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_107 = V_8;
		NullCheck(L_106);
		int32_t L_108 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_106, L_107, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_105);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_105, L_108, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v01]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_109 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_110 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111 = V_6;
		NullCheck(L_110);
		int32_t L_112 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_110, L_111, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_109);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_109, L_112, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[trangle[1]]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_113 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_114 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_115 = V_5;
		NullCheck(L_115);
		int32_t L_116 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_114);
		int32_t L_118 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_114, L_117, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_113);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_113, L_118, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v12]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_119 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_120 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_121 = V_7;
		NullCheck(L_120);
		int32_t L_122 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_120, L_121, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_119);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_119, L_122, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[trangle[2]]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_123 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_124 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_125 = V_5;
		NullCheck(L_125);
		int32_t L_126 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_124);
		int32_t L_128 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_124, L_127, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_123);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_123, L_128, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v02]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_129 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_130 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_131 = V_8;
		NullCheck(L_130);
		int32_t L_132 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_130, L_131, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_129);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_129, L_132, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v12]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_133 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_134 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_135 = V_7;
		NullCheck(L_134);
		int32_t L_136 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_134, L_135, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_133);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_133, L_136, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v02]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_137 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_138 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = V_8;
		NullCheck(L_138);
		int32_t L_140 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_138, L_139, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_137);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_137, L_140, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v01]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_141 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_142 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_143 = V_6;
		NullCheck(L_142);
		int32_t L_144 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_142, L_143, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_141);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_141, L_144, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v12]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_145 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_146 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_147 = V_7;
		NullCheck(L_146);
		int32_t L_148 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_146, L_147, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_145);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_145, L_148, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// for (int i = 0; i < k; i++)
		int32_t L_149 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1));
	}

IL_025f:
	{
		// for (int i = 0; i < k; i++)
		int32_t L_150 = V_4;
		int32_t L_151 = V_2;
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_0060;
		}
	}
	{
		// mesh.vertices = GetReusltVertices(verticesResultDic);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_152 = __this->get_mesh_4();
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_153 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_154 = DoubleVerticals_GetReusltVertices_mE7049D3023531CD0D6C5642815822391ED352B6C(__this, L_153, /*hidden argument*/NULL);
		NullCheck(L_152);
		Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6(L_152, L_154, /*hidden argument*/NULL);
		// mesh.triangles = tranglesResultList.ToArray();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_155 = __this->get_mesh_4();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_156 = V_1;
		NullCheck(L_156);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_157 = List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98(L_156, /*hidden argument*/List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_RuntimeMethod_var);
		NullCheck(L_155);
		Mesh_set_triangles_m143A1C262BADCFACE43587EBA2CDC6EBEB5DFAED(L_155, L_157, /*hidden argument*/NULL);
		// mesh.RecalculateBounds();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_158 = __this->get_mesh_4();
		NullCheck(L_158);
		Mesh_RecalculateBounds_m1BF701FE2CEA4E8E1183FF878B812808ED1EBA49(L_158, /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_159 = __this->get_mesh_4();
		NullCheck(L_159);
		Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027(L_159, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean DoubleVerticals::AddVertices(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415 (DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9 * __this, Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * ___verticesResultDic0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vertice1, int32_t ___index2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DoubleVerticals_AddVertices_mC4AF589B427710C3F219DA7A1E89B9E306BEF415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (verticesResultDic.ContainsValue(index) || verticesResultDic.ContainsKey(vertice))
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_0 = ___verticesResultDic0;
		int32_t L_1 = ___index2;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsValue_mCE3D9C202670540847AD2A2B8F99727727D97CA8(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsValue_mCE3D9C202670540847AD2A2B8F99727727D97CA8_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_3 = ___verticesResultDic0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___vertice1;
		NullCheck(L_3);
		bool L_5 = Dictionary_2_ContainsKey_mF877DE353865F5D40ED8958FF63D9F2EADB637FE(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_mF877DE353865F5D40ED8958FF63D9F2EADB637FE_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// verticesResultDic.Add(vertice, index);
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_6 = ___verticesResultDic0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___vertice1;
		int32_t L_8 = ___index2;
		NullCheck(L_6);
		Dictionary_2_Add_m01A4C79F3249F0ADC0C6C5BBD018D2E93FF79365(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_m01A4C79F3249F0ADC0C6C5BBD018D2E93FF79365_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Vector3[] DoubleVerticals::GetReusltVertices(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* DoubleVerticals_GetReusltVertices_mE7049D3023531CD0D6C5642815822391ED352B6C (DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9 * __this, Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * ___verticesResultDic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DoubleVerticals_GetReusltVertices_mE7049D3023531CD0D6C5642815822391ED352B6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_1 = NULL;
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int length = verticesResultDic.Keys.Count;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_0 = ___verticesResultDic0;
		NullCheck(L_0);
		KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * L_1 = Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040(L_0, /*hidden argument*/Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = KeyCollection_get_Count_m85B99F5FD098C15030F95FDB712F4CBF166CD743(L_1, /*hidden argument*/KeyCollection_get_Count_m85B99F5FD098C15030F95FDB712F4CBF166CD743_RuntimeMethod_var);
		V_0 = L_2;
		// Vector3[] result = new Vector3[length];
		int32_t L_3 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// List<Vector3> temp = new List<Vector3>(verticesResultDic.Keys);
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_5 = ___verticesResultDic0;
		NullCheck(L_5);
		KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * L_6 = Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040(L_5, /*hidden argument*/Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040_RuntimeMethod_var);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_7 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C(L_7, L_6, /*hidden argument*/List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C_RuntimeMethod_var);
		V_2 = L_7;
		// for (int i = 0; i < length; i++)
		V_3 = 0;
		goto IL_0035;
	}

IL_0023:
	{
		// result[i] = temp[i];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = V_1;
		int32_t L_9 = V_3;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_RuntimeMethod_var);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_12);
		// for (int i = 0; i < length; i++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0035:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_14 = V_3;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0023;
		}
	}
	{
		// return result;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_16 = V_1;
		return L_16;
	}
}
// System.Void DoubleVerticals::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleVerticals__ctor_m5E618E7A5385091E25CE9EBF7DB888044FCB150D (DoubleVerticals_tC27C125F12924AA5349C878BD005F5D6CF8FE3A9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void EventBus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBus__ctor_m8AB2239E55759B6A7F75328B9CECDAC801A08A55 (EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EventBus::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBus__cctor_mD2B35B0073E78E1AD4E54FC1FFA7A49BB25FBEB2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventBus__cctor_mD2B35B0073E78E1AD4E54FC1FFA7A49BB25FBEB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<Type, IList> _topics = new Dictionary<Type, IList>();
		Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998 * L_0 = (Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998 *)il2cpp_codegen_object_new(Dictionary_2_t3A190CCC9C5395ECAC3ACC9F3850F20369DEA998_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m519F6A98BA789EFE72129CE9C5821197F2BAAA46(L_0, /*hidden argument*/Dictionary_2__ctor_m519F6A98BA789EFE72129CE9C5821197F2BAAA46_RuntimeMethod_var);
		((EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852_StaticFields*)il2cpp_codegen_static_fields_for(EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852_il2cpp_TypeInfo_var))->set__topics_0(L_0);
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
// System.Void HeightEvent::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightEvent__ctor_mCE32AC9DAE963F2DC978B3C68006DCC0B87B6EB3 (HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062 * __this, float ____height0, const RuntimeMethod* method)
{
	{
		// public HeightEvent(float _height)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// height = _height;
		float L_0 = ____height0;
		__this->set_height_0(L_0);
		// }
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
// System.Void MeshEditorPoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditorPoint_Start_m760C93B27594D53993FF270374C811A03D29AF1E (MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditorPoint_Start_m760C93B27594D53993FF270374C811A03D29AF1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		__this->set_lastPosition_5(L_1);
		// heightSub = EventBus.Subscribe<HeightEvent>(updateHeight);
		Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 * L_2 = (Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16 *)il2cpp_codegen_object_new(Action_1_tBBCEE6679AD3816ACFA3B73F5D50F471C46D2C16_il2cpp_TypeInfo_var);
		Action_1__ctor_m6FE0F35A1DBC2D121FE43C718D2A76E7AFB26E50(L_2, __this, (intptr_t)((intptr_t)MeshEditorPoint_updateHeight_mD64A893E4C0086D520DDE056E84B8DACADBC10B5_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6FE0F35A1DBC2D121FE43C718D2A76E7AFB26E50_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(EventBus_t95C67C580E5E261BEB4C6044AE37ECFB1EA98852_il2cpp_TypeInfo_var);
		Subscription_1_tD56B4DA03313F8C0281CC79A5274D207B3E4EBAB * L_3 = EventBus_Subscribe_TisHeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_m1C86DBEFE89E406F661ED05B22A4F3353D2B3471(L_2, /*hidden argument*/EventBus_Subscribe_TisHeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062_m1C86DBEFE89E406F661ED05B22A4F3353D2B3471_RuntimeMethod_var);
		__this->set_heightSub_8(L_3);
		// }
		return;
	}
}
// System.Void MeshEditorPoint::updateHeight(HeightEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditorPoint_updateHeight_mD64A893E4C0086D520DDE056E84B8DACADBC10B5 (MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * __this, HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062 * ___e0, const RuntimeMethod* method)
{
	{
		// height = e.height;
		HeightEvent_t28FFB6223C249DF4AC7DD5C86105F3E56BDA3062 * L_0 = ___e0;
		NullCheck(L_0);
		float L_1 = L_0->get_height_0();
		__this->set_height_7(L_1);
		// }
		return;
	}
}
// System.Void MeshEditorPoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditorPoint_Update_m30F9F4CA9C866308657C382F984A64518F351311 (MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditorPoint_Update_m30F9F4CA9C866308657C382F984A64518F351311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(transform.position != lastPosition){
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get_lastPosition_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_3 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		// if(onMove != null) onMove(pointid, transform.localPosition);
		MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * L_4 = __this->get_onMove_6();
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// if(onMove != null) onMove(pointid, transform.localPosition);
		MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * L_5 = __this->get_onMove_6();
		String_t* L_6 = __this->get_pointid_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		MoveDelegate_Invoke_m10247D24F5CD6A0002CB7840878A1C4B01CAB1B8(L_5, L_6, L_8, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// lastPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		__this->set_lastPosition_5(L_10);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void MeshEditorPoint::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditorPoint_OnTriggerStay_m6D52DC5A7D015E677C334DA70865F9E6BE424587 (MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshEditorPoint_OnTriggerStay_m6D52DC5A7D015E677C334DA70865F9E6BE424587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Tool")
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteral9A830C714BB2B52B8F817649335855437EBCB701, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x, height, transform.position.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		float L_7 = __this->get_height_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), L_6, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_11, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void MeshEditorPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEditorPoint__ctor_m1A8D4AAAD7C77BBB6217F4F2A2A1300FFA2575B5 (MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 (MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * __this, String_t* ___pid0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pid0' to native representation
	char* ____pid0_marshaled = NULL;
	____pid0_marshaled = il2cpp_codegen_marshal_string(___pid0);

	// Native function invocation
	il2cppPInvokeFunc(____pid0_marshaled, ___pos1);

	// Marshaling cleanup of parameter '___pid0' native representation
	il2cpp_codegen_marshal_free(____pid0_marshaled);
	____pid0_marshaled = NULL;

}
// System.Void MeshEditorPoint_MoveDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveDelegate__ctor_m0EDF44AF0EE42298FE68757297A95B5CA94A99C1 (MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MeshEditorPoint_MoveDelegate::Invoke(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveDelegate_Invoke_m10247D24F5CD6A0002CB7840878A1C4B01CAB1B8 (MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * __this, String_t* ___pid0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pid0, ___pos1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pid0, ___pos1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(targetMethod, ___pid0, ___pos1);
					else
						GenericVirtActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(targetMethod, ___pid0, ___pos1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pid0, ___pos1);
					else
						VirtActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pid0, ___pos1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pos1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pid0, ___pos1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pid0, ___pos1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(targetMethod, targetThis, ___pid0, ___pos1);
					else
						GenericVirtActionInvoker2< String_t*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(targetMethod, targetThis, ___pid0, ___pos1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pid0, ___pos1);
					else
						VirtActionInvoker2< String_t*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pid0, ___pos1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pid0) - 1), ___pos1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pid0, ___pos1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MeshEditorPoint_MoveDelegate::BeginInvoke(System.String,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveDelegate_BeginInvoke_m19E4004A46E8A45CC2EAE37608625C5FED13850C (MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * __this, String_t* ___pid0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveDelegate_BeginInvoke_m19E4004A46E8A45CC2EAE37608625C5FED13850C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___pid0;
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___pos1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void MeshEditorPoint_MoveDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveDelegate_EndInvoke_m9287C953D493AFD88D4D2576DB0B9239D70AF534 (MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ModelMeshEditor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelMeshEditor_Start_mAC65BE17247AE6A826AC0479421C4F798C892362 (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, const RuntimeMethod* method)
{
	{
		// lastPointScale = pointScale;
		float L_0 = __this->get_pointScale_4();
		__this->set_lastPointScale_5(L_0);
		// }
		return;
	}
}
// System.Void ModelMeshEditor::CreateEditorPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelMeshEditor_CreateEditorPoint_mB020C70A718311248403507C0394A294D03CF8EA (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModelMeshEditor_CreateEditorPoint_mB020C70A718311248403507C0394A294D03CF8EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// positionList = new List<Vector3>(mesh.vertices);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = __this->get_mesh_7();
		NullCheck(L_0);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_0, /*hidden argument*/NULL);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_2 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C(L_2, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C_RuntimeMethod_var);
		__this->set_positionList_8(L_2);
		// for (int i = 0; i < mesh.vertices.Length; i++)
		V_0 = 0;
		goto IL_0067;
	}

IL_001a:
	{
		// string vstr = Vector2String(mesh.vertices[i]);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_3 = __this->get_mesh_7();
		NullCheck(L_3);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		String_t* L_8 = ModelMeshEditor_Vector2String_m76D87D59AD9C700BE15934B5AD1E7A867619AE94(__this, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if(!pointmap.ContainsKey(vstr)){
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_9 = __this->get_pointmap_10();
		String_t* L_10 = V_1;
		NullCheck(L_9);
		bool L_11 = Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6(L_9, L_10, /*hidden argument*/Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0051;
		}
	}
	{
		// pointmap.Add(vstr,new List<int>());
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_12 = __this->get_pointmap_10();
		String_t* L_13 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_14 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_14, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		NullCheck(L_12);
		Dictionary_2_Add_m08669E08F649DEBCB507A5E9DD56770CF899BEF7(L_12, L_13, L_14, /*hidden argument*/Dictionary_2_Add_m08669E08F649DEBCB507A5E9DD56770CF899BEF7_RuntimeMethod_var);
	}

IL_0051:
	{
		// pointmap[vstr].Add(i);
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_15 = __this->get_pointmap_10();
		String_t* L_16 = V_1;
		NullCheck(L_15);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_17 = Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760_RuntimeMethod_var);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_17, L_18, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0067:
	{
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_20 = V_0;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_21 = __this->get_mesh_7();
		NullCheck(L_21);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_22 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		// foreach (string key in pointmap.Keys)
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_23 = __this->get_pointmap_10();
		NullCheck(L_23);
		KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 * L_24 = Dictionary_2_get_Keys_m05C0A4646E278C4C21055C5DCA6214C4A4E24D3E(L_23, /*hidden argument*/Dictionary_2_get_Keys_m05C0A4646E278C4C21055C5DCA6214C4A4E24D3E_RuntimeMethod_var);
		NullCheck(L_24);
		Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149  L_25 = KeyCollection_GetEnumerator_m799F0CACA92FA19591DF233D8CE17AF6AEF1FF2C(L_24, /*hidden argument*/KeyCollection_GetEnumerator_m799F0CACA92FA19591DF233D8CE17AF6AEF1FF2C_RuntimeMethod_var);
		V_2 = L_25;
	}

IL_0088:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012e;
		}

IL_008d:
		{
			// foreach (string key in pointmap.Keys)
			String_t* L_26 = Enumerator_get_Current_m4650C41D5ECC9FF76A08CB22E41AC9450EC74C51_inline((Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m4650C41D5ECC9FF76A08CB22E41AC9450EC74C51_RuntimeMethod_var);
			V_3 = L_26;
			// editorpoint = Instantiate(editorpoint);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_editorpoint_6();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_27, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
			__this->set_editorpoint_6(L_28);
			// editorpoint.transform.parent = transform;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = __this->get_editorpoint_6();
			NullCheck(L_29);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_29, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
			NullCheck(L_30);
			Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_30, L_31, /*hidden argument*/NULL);
			// editorpoint.transform.localPosition = String2Vector(key);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = __this->get_editorpoint_6();
			NullCheck(L_32);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_32, /*hidden argument*/NULL);
			String_t* L_34 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = ModelMeshEditor_String2Vector_mFB58BF87B55526A4F3F232219D094644F89381C7(__this, L_34, /*hidden argument*/NULL);
			NullCheck(L_33);
			Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_33, L_35, /*hidden argument*/NULL);
			// editorpoint.transform.localScale = new Vector3(pointScale, pointScale, pointScale);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = __this->get_editorpoint_6();
			NullCheck(L_36);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_36, /*hidden argument*/NULL);
			float L_38 = __this->get_pointScale_4();
			float L_39 = __this->get_pointScale_4();
			float L_40 = __this->get_pointScale_4();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41;
			memset((&L_41), 0, sizeof(L_41));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_41), L_38, L_39, L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_37, L_41, /*hidden argument*/NULL);
			// MeshEditorPoint editorPoint = editorpoint.GetComponent<MeshEditorPoint>();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = __this->get_editorpoint_6();
			NullCheck(L_42);
			MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * L_43 = GameObject_GetComponent_TisMeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C_m906C3EFBF7A2E87FD4D66EFB71E5BA500C9F49C7(L_42, /*hidden argument*/GameObject_GetComponent_TisMeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C_m906C3EFBF7A2E87FD4D66EFB71E5BA500C9F49C7_RuntimeMethod_var);
			// editorPoint.onMove = PointMove;
			MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * L_44 = L_43;
			MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * L_45 = (MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 *)il2cpp_codegen_object_new(MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508_il2cpp_TypeInfo_var);
			MoveDelegate__ctor_m0EDF44AF0EE42298FE68757297A95B5CA94A99C1(L_45, __this, (intptr_t)((intptr_t)ModelMeshEditor_PointMove_m2BF953872B8340BEAA98A7946115B77B43D4814E_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_44);
			L_44->set_onMove_6(L_45);
			// editorPoint.pointid = key;
			String_t* L_46 = V_3;
			NullCheck(L_44);
			L_44->set_pointid_4(L_46);
			// positionObjList.Add(editorpoint);
			List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * L_47 = __this->get_positionObjList_9();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_48 = __this->get_editorpoint_6();
			NullCheck(L_47);
			List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687(L_47, L_48, /*hidden argument*/List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var);
		}

IL_012e:
		{
			// foreach (string key in pointmap.Keys)
			bool L_49 = Enumerator_MoveNext_mC0D3814EBA03E00A609E8673EF92FA974904D592((Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mC0D3814EBA03E00A609E8673EF92FA974904D592_RuntimeMethod_var);
			if (L_49)
			{
				goto IL_008d;
			}
		}

IL_013a:
		{
			IL2CPP_LEAVE(0x14A, FINALLY_013c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013c;
	}

FINALLY_013c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB9A615F7F8755140F09C9FC6B26B7313E2FE5E7B((Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mB9A615F7F8755140F09C9FC6B26B7313E2FE5E7B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(316)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(316)
	{
		IL2CPP_JUMP_TBL(0x14A, IL_014a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014a:
	{
		// }
		return;
	}
}
// System.Void ModelMeshEditor::PointMove(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelMeshEditor_PointMove_m2BF953872B8340BEAA98A7946115B77B43D4814E (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, String_t* ___pointid0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModelMeshEditor_PointMove_m2BF953872B8340BEAA98A7946115B77B43D4814E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Debug.Log("Here");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralECBCB0E424C40D9931C2C7C8B44C33C5F4E12465, /*hidden argument*/NULL);
		// if(!pointmap.ContainsKey(pointid)){
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_0 = __this->get_pointmap_10();
		String_t* L_1 = ___pointid0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// List<int> _list = pointmap[pointid];
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_3 = __this->get_pointmap_10();
		String_t* L_4 = ___pointid0;
		NullCheck(L_3);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_5 = Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760_RuntimeMethod_var);
		V_0 = L_5;
		// for (int i = 0; i < _list.Count; i ++){
		V_1 = 0;
		goto IL_0041;
	}

IL_002a:
	{
		// positionList[_list[i]] = position;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_6 = __this->get_positionList_8();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___position1;
		NullCheck(L_6);
		List_1_set_Item_m382AE9892EF39343FAEF436BA9801BDE7AFE23D7(L_6, L_9, L_10, /*hidden argument*/List_1_set_Item_m382AE9892EF39343FAEF436BA9801BDE7AFE23D7_RuntimeMethod_var);
		// for (int i = 0; i < _list.Count; i ++){
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < _list.Count; i ++){
		int32_t L_12 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline(L_13, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		// mesh.vertices = positionList.ToArray();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_15 = __this->get_mesh_7();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_16 = __this->get_positionList_8();
		NullCheck(L_16);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386(L_16, /*hidden argument*/List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_RuntimeMethod_var);
		NullCheck(L_15);
		Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6(L_15, L_17, /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_18 = __this->get_mesh_7();
		NullCheck(L_18);
		Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027(L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ModelMeshEditor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelMeshEditor_Update_m1612692B4D40EF11480F8E4285564F09891A39E8 (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModelMeshEditor_Update_m1612692B4D40EF11480F8E4285564F09891A39E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Input.GetKeyDown("return"))
		bool L_0 = Input_GetKeyDown_mD95998D19E698E66D5396829BC6865C8E87E1E4B(_stringLiteral63143B6F8007B98C53CA2149822777B3566F9241, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// mesh = GetComponent<MeshFilter>().sharedMesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_1 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var);
		NullCheck(L_1);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_2 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_1, /*hidden argument*/NULL);
		__this->set_mesh_7(L_2);
		// CreateEditorPoint();
		ModelMeshEditor_CreateEditorPoint_mB020C70A718311248403507C0394A294D03CF8EA(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0024:
	{
		// else if (Math.Abs(lastPointScale - pointScale) > 0.1f){
		float L_3 = __this->get_lastPointScale_5();
		float L_4 = __this->get_pointScale_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_5 = fabsf(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		if ((!(((float)L_5) > ((float)(0.1f)))))
		{
			goto IL_008c;
		}
	}
	{
		// lastPointScale = pointScale;
		float L_6 = __this->get_pointScale_4();
		__this->set_lastPointScale_5(L_6);
		// for (int i = 0; i < positionObjList.Count; i ++){
		V_0 = 0;
		goto IL_007e;
	}

IL_004d:
	{
		// positionObjList[i].transform.localScale = new Vector3(pointScale, pointScale, pointScale);
		List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * L_7 = __this->get_positionObjList_9();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = List_1_get_Item_mB59D528B0017953D5CB28B8B9BE96CD8EB324FB7_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mB59D528B0017953D5CB28B8B9BE96CD8EB324FB7_RuntimeMethod_var);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_pointScale_4();
		float L_12 = __this->get_pointScale_4();
		float L_13 = __this->get_pointScale_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_10, L_14, /*hidden argument*/NULL);
		// for (int i = 0; i < positionObjList.Count; i ++){
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_007e:
	{
		// for (int i = 0; i < positionObjList.Count; i ++){
		int32_t L_16 = V_0;
		List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * L_17 = __this->get_positionObjList_9();
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_inline(L_17, /*hidden argument*/List_1_get_Count_m9C1B1A3A565196DE22D197A9BC1F33552B7348EE_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004d;
		}
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.String ModelMeshEditor::Vector2String(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModelMeshEditor_Vector2String_m76D87D59AD9C700BE15934B5AD1E7A867619AE94 (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModelMeshEditor_Vector2String_m76D87D59AD9C700BE15934B5AD1E7A867619AE94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder str = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		// str.Append(v.x).Append(",").Append(v.y).Append(",").Append(v.z);
		StringBuilder_t * L_1 = L_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___v0;
		float L_3 = L_2.get_x_2();
		NullCheck(L_1);
		StringBuilder_t * L_4 = StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1(L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		StringBuilder_t * L_5 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_4, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___v0;
		float L_7 = L_6.get_y_3();
		NullCheck(L_5);
		StringBuilder_t * L_8 = StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1(L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_t * L_9 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___v0;
		float L_11 = L_10.get_z_4();
		NullCheck(L_9);
		StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1(L_9, L_11, /*hidden argument*/NULL);
		// return str.ToString();
		NullCheck(L_1);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_12;
	}
}
// UnityEngine.Vector3 ModelMeshEditor::String2Vector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ModelMeshEditor_String2Vector_mFB58BF87B55526A4F3F232219D094644F89381C7 (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, String_t* ___vstr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModelMeshEditor_String2Vector_mFB58BF87B55526A4F3F232219D094644F89381C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// string[] strings = vstr.Split(',');
		String_t* L_0 = ___vstr0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// return new Vector3(float.Parse(strings[0]), float.Parse(strings[1]), float.Parse(strings[2]));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_6, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_10, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 2;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		float L_15 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), L_7, L_11, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0044;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		// Debug.LogError(e.ToString());
		NullCheck(((Exception_t *)__exception_local));
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t *)__exception_local));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_17, /*hidden argument*/NULL);
		// return Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_1 = L_18;
		goto IL_0044;
	} // end catch (depth: 1)

IL_0044:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		return L_19;
	}
}
// System.Void ModelMeshEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelMeshEditor__ctor_m8DBAB2E6A8D3EA1CB84856EA503C01A2D213A519 (ModelMeshEditor_t674AA6F8C045B26CCC5FDC2F0BF3F1857499E957 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModelMeshEditor__ctor_m8DBAB2E6A8D3EA1CB84856EA503C01A2D213A519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Vector3> positionList = new List<Vector3>();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171(L_0, /*hidden argument*/List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var);
		__this->set_positionList_8(L_0);
		// List<GameObject> positionObjList = new List<GameObject>();
		List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * L_1 = (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *)il2cpp_codegen_object_new(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B_il2cpp_TypeInfo_var);
		List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60(L_1, /*hidden argument*/List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var);
		__this->set_positionObjList_9(L_1);
		// Dictionary<string, List<int>> pointmap = new Dictionary<string, List<int>>();
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_2 = (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 *)il2cpp_codegen_object_new(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7067EEB3CF8A52DE17DCCA02E2ABF40CC224BF28(L_2, /*hidden argument*/Dictionary_2__ctor_m7067EEB3CF8A52DE17DCCA02E2ABF40CC224BF28_RuntimeMethod_var);
		__this->set_pointmap_10(L_2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator NewControl::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControl_GetRequest_mCCB1832503FB14C51A5818FB386A02A9C2243D50 (NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * __this, String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NewControl_GetRequest_mCCB1832503FB14C51A5818FB386A02A9C2243D50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * L_0 = (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 *)il2cpp_codegen_object_new(U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52_il2cpp_TypeInfo_var);
		U3CGetRequestU3Ed__7__ctor_m3354A1A46971C8F8431A1E39A43D7C576A50A410(L_0, 0, /*hidden argument*/NULL);
		U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * L_2 = L_1;
		String_t* L_3 = ___uri0;
		NullCheck(L_2);
		L_2->set_uri_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator NewControl::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NewControl_Move_m3081AE0653598397D0B18C19CFDFF16E2E52C9E1 (NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NewControl_Move_m3081AE0653598397D0B18C19CFDFF16E2E52C9E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 * L_0 = (U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 *)il2cpp_codegen_object_new(U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39_il2cpp_TypeInfo_var);
		U3CMoveU3Ed__8__ctor_mE80CD0A8769F63290415C97ACFC4EA95018A09B5(L_0, 0, /*hidden argument*/NULL);
		U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void NewControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControl_Start_m3BC699961BCE51F7288CB72ED447905F07F3D0E3 (NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * __this, const RuntimeMethod* method)
{
	{
		// id = 1;
		__this->set_id_6(1);
		// x = 0.0f;
		__this->set_x_7((0.0f));
		// y = 0.0f;
		__this->set_y_8((0.0f));
		// z = 0.0f;
		__this->set_z_9((0.0f));
		// initial = drill.transform.localPosition;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_drill_4();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_1, /*hidden argument*/NULL);
		__this->set_initial_5(L_2);
		// }
		return;
	}
}
// System.Void NewControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControl_Update_m12FD43D58ED1C2E3662AE1AF361985C285D4AD9D (NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NewControl_Update_m12FD43D58ED1C2E3662AE1AF361985C285D4AD9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (idLock == false)
		bool L_0 = __this->get_idLock_10();
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// StartCoroutine(GetRequest("https://phpmyadmin-dot-graphic-outlook-279320.appspot.com/get_positions.php?id=" + id.ToString()));
		int32_t* L_1 = __this->get_address_of_id_6();
		String_t* L_2 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral0871DEF2947BA963BC29C71E75AFCE8478756E90, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = NewControl_GetRequest_mCCB1832503FB14C51A5818FB386A02A9C2243D50(__this, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_4, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void NewControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewControl__ctor_m1EC9F482A6FA27A50C2B5A42D37B571CAD7B3712 (NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void NewControl_<GetRequest>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__7__ctor_m3354A1A46971C8F8431A1E39A43D7C576A50A410 (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void NewControl_<GetRequest>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__7_System_IDisposable_Dispose_m81C99340654B1D243A7C0F816E47E5C36639D2E9 (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetRequestU3Ed__7_U3CU3Em__Finally1_m6933D4A1EC85C6D82601B8E8C08D24E0432BA8EB(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean NewControl_<GetRequest>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRequestU3Ed__7_MoveNext_mA597866BC1BBE60F0CB222F8876605E55229CED5 (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetRequestU3Ed__7_MoveNext_mA597866BC1BBE60F0CB222F8876605E55229CED5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * V_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0062;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_014f;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// idLock = true;
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_4 = V_2;
			NullCheck(L_4);
			L_4->set_idLock_10((bool)1);
			// using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
			String_t* L_5 = __this->get_uri_3();
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_5, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return webRequest.SendWebRequest();
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_7 = __this->get_U3CwebRequestU3E5__2_4();
			NullCheck(L_7);
			UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_8 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_7, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_8);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_014f;
		}

IL_0062:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// string[] pages = uri.Split('/');
			String_t* L_9 = __this->get_uri_3();
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_10 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_11 = L_10;
			NullCheck(L_11);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
			NullCheck(L_9);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_9, L_11, /*hidden argument*/NULL);
			// int page = pages.Length - 1;
			NullCheck(L_12);
			// if (webRequest.isNetworkError)
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_13 = __this->get_U3CwebRequestU3E5__2_4();
			NullCheck(L_13);
			bool L_14 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00a6;
			}
		}

IL_0090:
		{
			// Debug.Log("Fail!");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral11AE5C698A59D456D5D3387543B2438552529090, /*hidden argument*/NULL);
			// idLock = false;
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_15 = V_2;
			NullCheck(L_15);
			L_15->set_idLock_10((bool)0);
			// }
			goto IL_0137;
		}

IL_00a6:
		{
			// if (webRequest.downloadHandler.text != "***")
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_16 = __this->get_U3CwebRequestU3E5__2_4();
			NullCheck(L_16);
			DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_17 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			String_t* L_18 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF(L_17, /*hidden argument*/NULL);
			bool L_19 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_18, _stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0130;
			}
		}

IL_00c2:
		{
			// string[] coord = webRequest.downloadHandler.text.Split(',');
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_20 = __this->get_U3CwebRequestU3E5__2_4();
			NullCheck(L_20);
			DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_21 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			String_t* L_22 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF(L_21, /*hidden argument*/NULL);
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_23 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_24 = L_23;
			NullCheck(L_24);
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			NullCheck(L_22);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_22, L_24, /*hidden argument*/NULL);
			V_3 = L_25;
			// Debug.Log(coord);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708((RuntimeObject *)(RuntimeObject *)L_26, /*hidden argument*/NULL);
			// x = float.Parse(coord[0]);
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_27 = V_2;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = V_3;
			NullCheck(L_28);
			int32_t L_29 = 0;
			String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
			float L_31 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_30, /*hidden argument*/NULL);
			NullCheck(L_27);
			L_27->set_x_7(L_31);
			// y = float.Parse(coord[1]);
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_32 = V_2;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_33 = V_3;
			NullCheck(L_33);
			int32_t L_34 = 1;
			String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			float L_36 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_35, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_y_8(L_36);
			// z = float.Parse(coord[2]);
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_37 = V_2;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_38 = V_3;
			NullCheck(L_38);
			int32_t L_39 = 2;
			String_t* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
			float L_41 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			L_37->set_z_9(L_41);
			// id += 1;
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_42 = V_2;
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_43 = V_2;
			NullCheck(L_43);
			int32_t L_44 = L_43->get_id_6();
			NullCheck(L_42);
			L_42->set_id_6(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1)));
			// StartCoroutine(Move());
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_45 = V_2;
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_46 = V_2;
			NullCheck(L_46);
			RuntimeObject* L_47 = NewControl_Move_m3081AE0653598397D0B18C19CFDFF16E2E52C9E1(L_46, /*hidden argument*/NULL);
			NullCheck(L_45);
			MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_45, L_47, /*hidden argument*/NULL);
			// }
			goto IL_0137;
		}

IL_0130:
		{
			// idLock = false;
			NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_48 = V_2;
			NullCheck(L_48);
			L_48->set_idLock_10((bool)0);
		}

IL_0137:
		{
			// }
			U3CGetRequestU3Ed__7_U3CU3Em__Finally1_m6933D4A1EC85C6D82601B8E8C08D24E0432BA8EB(__this, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_4((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_014f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0148;
	}

FAULT_0148:
	{ // begin fault (depth: 1)
		U3CGetRequestU3Ed__7_System_IDisposable_Dispose_m81C99340654B1D243A7C0F816E47E5C36639D2E9(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(328)
	} // end fault
	IL2CPP_CLEANUP(328)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014f:
	{
		bool L_49 = V_0;
		return L_49;
	}
}
// System.Void NewControl_<GetRequest>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__7_U3CU3Em__Finally1_m6933D4A1EC85C6D82601B8E8C08D24E0432BA8EB (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetRequestU3Ed__7_U3CU3Em__Finally1_m6933D4A1EC85C6D82601B8E8C08D24E0432BA8EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_0 = __this->get_U3CwebRequestU3E5__2_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_1 = __this->get_U3CwebRequestU3E5__2_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object NewControl_<GetRequest>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRequestU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC82F5BE26EABA54A55B4A74107176EA73DB2A952 (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NewControl_<GetRequest>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__7_System_Collections_IEnumerator_Reset_m2D45F430E869D0BD69A35893361B7B7E0B7D2088 (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetRequestU3Ed__7_System_Collections_IEnumerator_Reset_m2D45F430E869D0BD69A35893361B7B7E0B7D2088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetRequestU3Ed__7_System_Collections_IEnumerator_Reset_m2D45F430E869D0BD69A35893361B7B7E0B7D2088_RuntimeMethod_var);
	}
}
// System.Object NewControl_<GetRequest>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRequestU3Ed__7_System_Collections_IEnumerator_get_Current_m6343EB803E8C4B479FAAC3B62CAB18171E8E7A73 (U3CGetRequestU3Ed__7_t39BE3710598BBE8D13BC07AF588FC0DDE20A5A52 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void NewControl_<Move>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__8__ctor_mE80CD0A8769F63290415C97ACFC4EA95018A09B5 (U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void NewControl_<Move>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__8_System_IDisposable_Dispose_m0A60E1438CFC70AC02F327210DD394C66E6013CF (U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NewControl_<Move>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveU3Ed__8_MoveNext_m6DB103703E72EA06D2A5428FC180E3EC1DFEAE25 (U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveU3Ed__8_MoveNext_m6DB103703E72EA06D2A5428FC180E3EC1DFEAE25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bd;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 start = drill.transform.localPosition;
		NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_4->get_drill_4();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_6, /*hidden argument*/NULL);
		__this->set_U3CstartU3E5__2_3(L_7);
		// Vector3 end = initial + new Vector3(-x, -z, y);
		NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_8 = V_1;
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = L_8->get_initial_5();
		NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_x_7();
		NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->get_z_9();
		NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_y_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), ((-L_11)), ((-L_13)), L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_16, /*hidden argument*/NULL);
		__this->set_U3CendU3E5__3_4(L_17);
		// float progress = 0.0f;
		__this->set_U3CprogressU3E5__4_5((0.0f));
		goto IL_00c4;
	}

IL_006e:
	{
		// drill.transform.localPosition = Vector3.Lerp(start, end, progress / 0.1f);
		NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_18 = V_1;
		NullCheck(L_18);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = L_18->get_drill_4();
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = __this->get_U3CstartU3E5__2_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = __this->get_U3CendU3E5__3_4();
		float L_23 = __this->get_U3CprogressU3E5__4_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_21, L_22, ((float)((float)L_23/(float)(0.1f))), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_20, L_24, /*hidden argument*/NULL);
		// progress += Time.deltaTime;
		float L_25 = __this->get_U3CprogressU3E5__4_5();
		float L_26 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_U3CprogressU3E5__4_5(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00bd:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00c4:
	{
		// while (progress < 0.1f)
		float L_27 = __this->get_U3CprogressU3E5__4_5();
		if ((((float)L_27) < ((float)(0.1f))))
		{
			goto IL_006e;
		}
	}
	{
		// drill.transform.localPosition = end;
		NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_28 = V_1;
		NullCheck(L_28);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = L_28->get_drill_4();
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = __this->get_U3CendU3E5__3_4();
		NullCheck(L_30);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_30, L_31, /*hidden argument*/NULL);
		// idLock = false;
		NewControl_tEBA04B753F40C990AF310BD51684F24D1981F195 * L_32 = V_1;
		NullCheck(L_32);
		L_32->set_idLock_10((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object NewControl_<Move>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m729313825689CBCB0B9E64FD77E66753284D3D5C (U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NewControl_<Move>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__8_System_Collections_IEnumerator_Reset_m67C4BA98997D7F1CF69E7508E188183805B0493D (U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveU3Ed__8_System_Collections_IEnumerator_Reset_m67C4BA98997D7F1CF69E7508E188183805B0493D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CMoveU3Ed__8_System_Collections_IEnumerator_Reset_m67C4BA98997D7F1CF69E7508E188183805B0493D_RuntimeMethod_var);
	}
}
// System.Object NewControl_<Move>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveU3Ed__8_System_Collections_IEnumerator_get_Current_m158876572D9797BDE1BEFFFD11F18F41629C4C4C (U3CMoveU3Ed__8_t6DCD6FD357D9FE919D4B66D06D542C38366AEA39 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void PuppetDrill::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuppetDrill_Start_m0E71114D9D8C5F42E86B1CB262E1C1E2DEF78A1A (PuppetDrill_t824C6B471A382CA70EA1030190CF0718BE5B0338 * __this, const RuntimeMethod* method)
{
	{
		// transform.localPosition = puppet.transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_puppet_4();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PuppetDrill::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuppetDrill_Update_mEEEA8AFF9513E0AA44BE7381A27954AF8EE821AA (PuppetDrill_t824C6B471A382CA70EA1030190CF0718BE5B0338 * __this, const RuntimeMethod* method)
{
	{
		// transform.localPosition = puppet.transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_puppet_4();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PuppetDrill::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuppetDrill__ctor_mACAE21FAE85583DB3E07C0F0EE0E410A4632C078 (PuppetDrill_t824C6B471A382CA70EA1030190CF0718BE5B0338 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PuppetPiece::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuppetPiece_Start_m995EE6D1DCDFF1452A7798EF21AE9F5F6CA6CC4A (PuppetPiece_t242E97D65C6FF13E7135CC6F13BB91E60BF5F272 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PuppetPiece_Start_m995EE6D1DCDFF1452A7798EF21AE9F5F6CA6CC4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshFilter>().mesh = puppet.GetComponent<MeshFilter>().mesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_puppet_4();
		NullCheck(L_1);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_2 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mBEE7CEE0B48C270C77E4D03AF982812E0629D607(L_1, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mBEE7CEE0B48C270C77E4D03AF982812E0629D607_RuntimeMethod_var);
		NullCheck(L_2);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_3 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PuppetPiece::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuppetPiece_Update_m21F59378D85ECFE6826644FC0CA5239C02164D48 (PuppetPiece_t242E97D65C6FF13E7135CC6F13BB91E60BF5F272 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PuppetPiece_Update_m21F59378D85ECFE6826644FC0CA5239C02164D48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshFilter>().mesh = puppet.GetComponent<MeshFilter>().mesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_puppet_4();
		NullCheck(L_1);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_2 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mBEE7CEE0B48C270C77E4D03AF982812E0629D607(L_1, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mBEE7CEE0B48C270C77E4D03AF982812E0629D607_RuntimeMethod_var);
		NullCheck(L_2);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_3 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PuppetPiece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuppetPiece__ctor_m58362DC054CE9CFC0EC9638548128070C5AA25FB (PuppetPiece_t242E97D65C6FF13E7135CC6F13BB91E60BF5F272 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void VertexGenerator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGenerator_Awake_m9205D2F7C0F5824AE48564B7B13309CAAADC2F54 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator_Awake_m9205D2F7C0F5824AE48564B7B13309CAAADC2F54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// mesh = transform.GetComponent<MeshFilter>().mesh;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_1 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0(L_0, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var);
		NullCheck(L_1);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_2 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_1, /*hidden argument*/NULL);
		__this->set_mesh_6(L_2);
		// for (int i = 0; i < iteration; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_001a:
	{
		// IncreseVertices();
		VertexGenerator_IncreseVertices_m8D469912D529472FA270750CD04C56E264B2CBF2(__this, /*hidden argument*/NULL);
		// for (int i = 0; i < iteration; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < iteration; i++)
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_iteration_10();
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VertexGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGenerator_Start_m623A2892A702ADD045D327DFA9AC2FFC74B778EE (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator_Start_m623A2892A702ADD045D327DFA9AC2FFC74B778EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh = GetComponent<MeshFilter>().sharedMesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var);
		NullCheck(L_0);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_1 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_0, /*hidden argument*/NULL);
		__this->set_mesh_6(L_1);
		// CreateEditorPoint();
		VertexGenerator_CreateEditorPoint_m841C1B67746F49FCE8E293F15B46B79440E46F7D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VertexGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGenerator_Update_m275BA52B4049AB89E09D842BBC3C8D24FE9A2F95 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void VertexGenerator::CreateEditorPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGenerator_CreateEditorPoint_m841C1B67746F49FCE8E293F15B46B79440E46F7D (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator_CreateEditorPoint_m841C1B67746F49FCE8E293F15B46B79440E46F7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// positionList = new List<Vector3>(mesh.vertices);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = __this->get_mesh_6();
		NullCheck(L_0);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_0, /*hidden argument*/NULL);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_2 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C(L_2, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C_RuntimeMethod_var);
		__this->set_positionList_7(L_2);
		// for (int i = 0; i < mesh.vertices.Length; i++)
		V_0 = 0;
		goto IL_0067;
	}

IL_001a:
	{
		// string vstr = Vector2String(mesh.vertices[i]);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_3 = __this->get_mesh_6();
		NullCheck(L_3);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		String_t* L_8 = VertexGenerator_Vector2String_m4AC7B4087D55D915D7CC8747BE4FB79669778588(__this, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (!pointmap.ContainsKey(vstr))
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_9 = __this->get_pointmap_9();
		String_t* L_10 = V_1;
		NullCheck(L_9);
		bool L_11 = Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6(L_9, L_10, /*hidden argument*/Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0051;
		}
	}
	{
		// pointmap.Add(vstr, new List<int>());
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_12 = __this->get_pointmap_9();
		String_t* L_13 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_14 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_14, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		NullCheck(L_12);
		Dictionary_2_Add_m08669E08F649DEBCB507A5E9DD56770CF899BEF7(L_12, L_13, L_14, /*hidden argument*/Dictionary_2_Add_m08669E08F649DEBCB507A5E9DD56770CF899BEF7_RuntimeMethod_var);
	}

IL_0051:
	{
		// pointmap[vstr].Add(i);
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_15 = __this->get_pointmap_9();
		String_t* L_16 = V_1;
		NullCheck(L_15);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_17 = Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760_RuntimeMethod_var);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_17, L_18, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0067:
	{
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_20 = V_0;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_21 = __this->get_mesh_6();
		NullCheck(L_21);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_22 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		// foreach (string key in pointmap.Keys)
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_23 = __this->get_pointmap_9();
		NullCheck(L_23);
		KeyCollection_tF46D9B339F84866040D5D2B543BD9B30BA50CD76 * L_24 = Dictionary_2_get_Keys_m05C0A4646E278C4C21055C5DCA6214C4A4E24D3E(L_23, /*hidden argument*/Dictionary_2_get_Keys_m05C0A4646E278C4C21055C5DCA6214C4A4E24D3E_RuntimeMethod_var);
		NullCheck(L_24);
		Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149  L_25 = KeyCollection_GetEnumerator_m799F0CACA92FA19591DF233D8CE17AF6AEF1FF2C(L_24, /*hidden argument*/KeyCollection_GetEnumerator_m799F0CACA92FA19591DF233D8CE17AF6AEF1FF2C_RuntimeMethod_var);
		V_2 = L_25;
	}

IL_0088:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012e;
		}

IL_008d:
		{
			// foreach (string key in pointmap.Keys)
			String_t* L_26 = Enumerator_get_Current_m4650C41D5ECC9FF76A08CB22E41AC9450EC74C51_inline((Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m4650C41D5ECC9FF76A08CB22E41AC9450EC74C51_RuntimeMethod_var);
			V_3 = L_26;
			// editorpoint = Instantiate(editorpoint);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_editorpoint_5();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_27, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
			__this->set_editorpoint_5(L_28);
			// editorpoint.transform.parent = transform;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = __this->get_editorpoint_5();
			NullCheck(L_29);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_29, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
			NullCheck(L_30);
			Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_30, L_31, /*hidden argument*/NULL);
			// editorpoint.transform.localPosition = String2Vector(key);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = __this->get_editorpoint_5();
			NullCheck(L_32);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_32, /*hidden argument*/NULL);
			String_t* L_34 = V_3;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = VertexGenerator_String2Vector_m5867D9D13203D4A8B48C21A4012811C7169CB2B0(__this, L_34, /*hidden argument*/NULL);
			NullCheck(L_33);
			Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_33, L_35, /*hidden argument*/NULL);
			// editorpoint.transform.localScale = new Vector3(pointScale, pointScale, pointScale);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = __this->get_editorpoint_5();
			NullCheck(L_36);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_36, /*hidden argument*/NULL);
			float L_38 = __this->get_pointScale_4();
			float L_39 = __this->get_pointScale_4();
			float L_40 = __this->get_pointScale_4();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41;
			memset((&L_41), 0, sizeof(L_41));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_41), L_38, L_39, L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_37, L_41, /*hidden argument*/NULL);
			// MeshEditorPoint editorPoint = editorpoint.GetComponent<MeshEditorPoint>();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = __this->get_editorpoint_5();
			NullCheck(L_42);
			MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * L_43 = GameObject_GetComponent_TisMeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C_m906C3EFBF7A2E87FD4D66EFB71E5BA500C9F49C7(L_42, /*hidden argument*/GameObject_GetComponent_TisMeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C_m906C3EFBF7A2E87FD4D66EFB71E5BA500C9F49C7_RuntimeMethod_var);
			// editorPoint.onMove = PointMove;
			MeshEditorPoint_t523D5D58CD614F88CFB419ECA7A73580F2271D8C * L_44 = L_43;
			MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 * L_45 = (MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508 *)il2cpp_codegen_object_new(MoveDelegate_t57C6681430E2D0B200100508ED5C9FAEC1C66508_il2cpp_TypeInfo_var);
			MoveDelegate__ctor_m0EDF44AF0EE42298FE68757297A95B5CA94A99C1(L_45, __this, (intptr_t)((intptr_t)VertexGenerator_PointMove_m53142BF5C8229C31ADCCAB4AE674957D52AE55BA_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_44);
			L_44->set_onMove_6(L_45);
			// editorPoint.pointid = key;
			String_t* L_46 = V_3;
			NullCheck(L_44);
			L_44->set_pointid_4(L_46);
			// positionObjList.Add(editorpoint);
			List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * L_47 = __this->get_positionObjList_8();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_48 = __this->get_editorpoint_5();
			NullCheck(L_47);
			List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687(L_47, L_48, /*hidden argument*/List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var);
		}

IL_012e:
		{
			// foreach (string key in pointmap.Keys)
			bool L_49 = Enumerator_MoveNext_mC0D3814EBA03E00A609E8673EF92FA974904D592((Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mC0D3814EBA03E00A609E8673EF92FA974904D592_RuntimeMethod_var);
			if (L_49)
			{
				goto IL_008d;
			}
		}

IL_013a:
		{
			IL2CPP_LEAVE(0x14A, FINALLY_013c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013c;
	}

FINALLY_013c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB9A615F7F8755140F09C9FC6B26B7313E2FE5E7B((Enumerator_t54452B0C07D52DD2E1449CA826AFFCB2B8E7D149 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mB9A615F7F8755140F09C9FC6B26B7313E2FE5E7B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(316)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(316)
	{
		IL2CPP_JUMP_TBL(0x14A, IL_014a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014a:
	{
		// }
		return;
	}
}
// System.Void VertexGenerator::PointMove(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGenerator_PointMove_m53142BF5C8229C31ADCCAB4AE674957D52AE55BA (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, String_t* ___pointid0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator_PointMove_m53142BF5C8229C31ADCCAB4AE674957D52AE55BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Debug.Log("Here");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralECBCB0E424C40D9931C2C7C8B44C33C5F4E12465, /*hidden argument*/NULL);
		// if (!pointmap.ContainsKey(pointid))
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_0 = __this->get_pointmap_9();
		String_t* L_1 = ___pointid0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m52D38CF44E2360E1E6193F180965C49A80AB20E6_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// List<int> _list = pointmap[pointid];
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_3 = __this->get_pointmap_9();
		String_t* L_4 = ___pointid0;
		NullCheck(L_3);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_5 = Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mE21B127E96D349B0D51D8877A4FB057DC9154760_RuntimeMethod_var);
		V_0 = L_5;
		// for (int i = 0; i < _list.Count; i++)
		V_1 = 0;
		goto IL_0041;
	}

IL_002a:
	{
		// positionList[_list[i]] = position;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_6 = __this->get_positionList_7();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___position1;
		NullCheck(L_6);
		List_1_set_Item_m382AE9892EF39343FAEF436BA9801BDE7AFE23D7(L_6, L_9, L_10, /*hidden argument*/List_1_set_Item_m382AE9892EF39343FAEF436BA9801BDE7AFE23D7_RuntimeMethod_var);
		// for (int i = 0; i < _list.Count; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < _list.Count; i++)
		int32_t L_12 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline(L_13, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		// mesh.vertices = positionList.ToArray();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_15 = __this->get_mesh_6();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_16 = __this->get_positionList_7();
		NullCheck(L_16);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386(L_16, /*hidden argument*/List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_RuntimeMethod_var);
		NullCheck(L_15);
		Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6(L_15, L_17, /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_18 = __this->get_mesh_6();
		NullCheck(L_18);
		Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027(L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String VertexGenerator::Vector2String(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VertexGenerator_Vector2String_m4AC7B4087D55D915D7CC8747BE4FB79669778588 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator_Vector2String_m4AC7B4087D55D915D7CC8747BE4FB79669778588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder str = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		// str.Append(v.x).Append(",").Append(v.y).Append(",").Append(v.z);
		StringBuilder_t * L_1 = L_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___v0;
		float L_3 = L_2.get_x_2();
		NullCheck(L_1);
		StringBuilder_t * L_4 = StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1(L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		StringBuilder_t * L_5 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_4, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___v0;
		float L_7 = L_6.get_y_3();
		NullCheck(L_5);
		StringBuilder_t * L_8 = StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1(L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_t * L_9 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___v0;
		float L_11 = L_10.get_z_4();
		NullCheck(L_9);
		StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1(L_9, L_11, /*hidden argument*/NULL);
		// return str.ToString();
		NullCheck(L_1);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_12;
	}
}
// UnityEngine.Vector3 VertexGenerator::String2Vector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  VertexGenerator_String2Vector_m5867D9D13203D4A8B48C21A4012811C7169CB2B0 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, String_t* ___vstr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator_String2Vector_m5867D9D13203D4A8B48C21A4012811C7169CB2B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// string[] strings = vstr.Split(',');
		String_t* L_0 = ___vstr0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// return new Vector3(float.Parse(strings[0]), float.Parse(strings[1]), float.Parse(strings[2]));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_6, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_10, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 2;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		float L_15 = Single_Parse_m643ECE18CB0499B2B3EC76C8B941020122003DC6(L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), L_7, L_11, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0044;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		// Debug.LogError(e.ToString());
		NullCheck(((Exception_t *)__exception_local));
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t *)__exception_local));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_17, /*hidden argument*/NULL);
		// return Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_1 = L_18;
		goto IL_0044;
	} // end catch (depth: 1)

IL_0044:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		return L_19;
	}
}
// System.Void VertexGenerator::IncreseVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGenerator_IncreseVertices_m8D469912D529472FA270750CD04C56E264B2CBF2 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator_IncreseVertices_m8D469912D529472FA270750CD04C56E264B2CBF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * V_0 = NULL;
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_5 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if (mesh.vertexCount >= 18432)
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = __this->get_mesh_6();
		NullCheck(L_0);
		int32_t L_1 = Mesh_get_vertexCount_mE6F1153EA724F831AD11F10807ABE664CC02E0AF(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)18432))))
		{
			goto IL_001d;
		}
	}
	{
		// Debug.Log("Too Many");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral758EAD9D7EED73D1576E2157E7EA5022E5B3808F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001d:
	{
		// origVertices = mesh.vertices;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_2 = __this->get_mesh_6();
		NullCheck(L_2);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_2, /*hidden argument*/NULL);
		__this->set_origVertices_11(L_3);
		// origTrangles = mesh.triangles;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_4 = __this->get_mesh_6();
		NullCheck(L_4);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = Mesh_get_triangles_mAAAFC770B8EE3F56992D5764EF8C2EC06EF743AC(L_4, /*hidden argument*/NULL);
		__this->set_origTrangles_12(L_5);
		// Dictionary<Vector3, int> verticesResultDic = new Dictionary<Vector3, int>();
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_6 = (Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 *)il2cpp_codegen_object_new(Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA6DED850C86DFE3FB0684689AF050D68569AD76(L_6, /*hidden argument*/Dictionary_2__ctor_mCA6DED850C86DFE3FB0684689AF050D68569AD76_RuntimeMethod_var);
		V_0 = L_6;
		// List<int> tranglesResultList = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_7 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_7, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		V_1 = L_7;
		// int k = origTrangles.Length / 3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = __this->get_origTrangles_12();
		NullCheck(L_8);
		V_2 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))/(int32_t)3));
		// int index = 0;
		V_3 = 0;
		// for (int i = 0; i < k; i++)
		V_4 = 0;
		goto IL_025f;
	}

IL_0060:
	{
		// Vector3[] trangle = new Vector3[3] { origVertices[origTrangles[i * 3]], origVertices[origTrangles[i * 3 + 1]], origVertices[origTrangles[i * 3 + 2]] };
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = L_9;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = __this->get_origVertices_11();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = __this->get_origTrangles_12();
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)3));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		int32_t L_16 = L_15;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_17);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_18 = L_10;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_19 = __this->get_origVertices_11();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_20 = __this->get_origTrangles_12();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)3)), (int32_t)1));
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		int32_t L_24 = L_23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_25);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_26 = L_18;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_27 = __this->get_origVertices_11();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = __this->get_origTrangles_12();
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)3)), (int32_t)2));
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		int32_t L_32 = L_31;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_33);
		V_5 = L_26;
		// Vector3[] result = new Vector3[6];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_34 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)6);
		// Vector3 v01 = (trangle[0] + trangle[1]) * 0.5f;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_38 = V_5;
		NullCheck(L_38);
		int32_t L_39 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_37, L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_41, (0.5f), /*hidden argument*/NULL);
		V_6 = L_42;
		// Vector3 v12 = (trangle[1] + trangle[2]) * 0.5f;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_43 = V_5;
		NullCheck(L_43);
		int32_t L_44 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_45, L_48, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_49, (0.5f), /*hidden argument*/NULL);
		V_7 = L_50;
		// Vector3 v02 = (trangle[0] + trangle[2]) * 0.5f;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_51 = V_5;
		NullCheck(L_51);
		int32_t L_52 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_54 = V_5;
		NullCheck(L_54);
		int32_t L_55 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_53, L_56, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_57, (0.5f), /*hidden argument*/NULL);
		V_8 = L_58;
		// if (AddVertices(verticesResultDic, trangle[0], index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_59 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_60 = V_5;
		NullCheck(L_60);
		int32_t L_61 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = V_3;
		bool L_64 = VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA(__this, L_59, L_62, L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_0143;
		}
	}
	{
		// if (AddVertices(verticesResultDic, trangle[0], index)) index++;
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_0143:
	{
		// if (AddVertices(verticesResultDic, trangle[1], index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_66 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_67 = V_5;
		NullCheck(L_67);
		int32_t L_68 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		int32_t L_70 = V_3;
		bool L_71 = VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA(__this, L_66, L_69, L_70, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0159;
		}
	}
	{
		// if (AddVertices(verticesResultDic, trangle[1], index)) index++;
		int32_t L_72 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_0159:
	{
		// if (AddVertices(verticesResultDic, trangle[2], index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_73 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_74 = V_5;
		NullCheck(L_74);
		int32_t L_75 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = V_3;
		bool L_78 = VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA(__this, L_73, L_76, L_77, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_016f;
		}
	}
	{
		// if (AddVertices(verticesResultDic, trangle[2], index)) index++;
		int32_t L_79 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_016f:
	{
		// if (AddVertices(verticesResultDic, v01, index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_80 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = V_6;
		int32_t L_82 = V_3;
		bool L_83 = VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA(__this, L_80, L_81, L_82, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_017f;
		}
	}
	{
		// if (AddVertices(verticesResultDic, v01, index)) index++;
		int32_t L_84 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_017f:
	{
		// if (AddVertices(verticesResultDic, v12, index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_85 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = V_7;
		int32_t L_87 = V_3;
		bool L_88 = VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA(__this, L_85, L_86, L_87, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_018f;
		}
	}
	{
		// if (AddVertices(verticesResultDic, v12, index)) index++;
		int32_t L_89 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_018f:
	{
		// if (AddVertices(verticesResultDic, v02, index)) index++;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_90 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = V_8;
		int32_t L_92 = V_3;
		bool L_93 = VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA(__this, L_90, L_91, L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_019f;
		}
	}
	{
		// if (AddVertices(verticesResultDic, v02, index)) index++;
		int32_t L_94 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_019f:
	{
		// tranglesResultList.Add(verticesResultDic[trangle[0]]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_95 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_96 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_97 = V_5;
		NullCheck(L_97);
		int32_t L_98 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_96);
		int32_t L_100 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_96, L_99, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_95);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_95, L_100, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v01]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_101 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_102 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_103 = V_6;
		NullCheck(L_102);
		int32_t L_104 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_102, L_103, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_101);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_101, L_104, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v02]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_105 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_106 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_107 = V_8;
		NullCheck(L_106);
		int32_t L_108 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_106, L_107, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_105);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_105, L_108, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v01]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_109 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_110 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111 = V_6;
		NullCheck(L_110);
		int32_t L_112 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_110, L_111, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_109);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_109, L_112, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[trangle[1]]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_113 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_114 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_115 = V_5;
		NullCheck(L_115);
		int32_t L_116 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_114);
		int32_t L_118 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_114, L_117, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_113);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_113, L_118, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v12]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_119 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_120 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_121 = V_7;
		NullCheck(L_120);
		int32_t L_122 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_120, L_121, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_119);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_119, L_122, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[trangle[2]]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_123 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_124 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_125 = V_5;
		NullCheck(L_125);
		int32_t L_126 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_124);
		int32_t L_128 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_124, L_127, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_123);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_123, L_128, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v02]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_129 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_130 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_131 = V_8;
		NullCheck(L_130);
		int32_t L_132 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_130, L_131, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_129);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_129, L_132, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v12]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_133 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_134 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_135 = V_7;
		NullCheck(L_134);
		int32_t L_136 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_134, L_135, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_133);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_133, L_136, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v02]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_137 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_138 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = V_8;
		NullCheck(L_138);
		int32_t L_140 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_138, L_139, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_137);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_137, L_140, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v01]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_141 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_142 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_143 = V_6;
		NullCheck(L_142);
		int32_t L_144 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_142, L_143, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_141);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_141, L_144, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// tranglesResultList.Add(verticesResultDic[v12]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_145 = V_1;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_146 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_147 = V_7;
		NullCheck(L_146);
		int32_t L_148 = Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14(L_146, L_147, /*hidden argument*/Dictionary_2_get_Item_m5FC8E02E693290F56FBA68D4B1FA3BD780792D14_RuntimeMethod_var);
		NullCheck(L_145);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_145, L_148, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// for (int i = 0; i < k; i++)
		int32_t L_149 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1));
	}

IL_025f:
	{
		// for (int i = 0; i < k; i++)
		int32_t L_150 = V_4;
		int32_t L_151 = V_2;
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_0060;
		}
	}
	{
		// mesh.vertices = GetReusltVertices(verticesResultDic);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_152 = __this->get_mesh_6();
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_153 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_154 = VertexGenerator_GetReusltVertices_m5A44D37536F471E013F6D0EB816158483D2A00E2(__this, L_153, /*hidden argument*/NULL);
		NullCheck(L_152);
		Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6(L_152, L_154, /*hidden argument*/NULL);
		// mesh.triangles = tranglesResultList.ToArray();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_155 = __this->get_mesh_6();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_156 = V_1;
		NullCheck(L_156);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_157 = List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98(L_156, /*hidden argument*/List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_RuntimeMethod_var);
		NullCheck(L_155);
		Mesh_set_triangles_m143A1C262BADCFACE43587EBA2CDC6EBEB5DFAED(L_155, L_157, /*hidden argument*/NULL);
		// mesh.RecalculateBounds();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_158 = __this->get_mesh_6();
		NullCheck(L_158);
		Mesh_RecalculateBounds_m1BF701FE2CEA4E8E1183FF878B812808ED1EBA49(L_158, /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_159 = __this->get_mesh_6();
		NullCheck(L_159);
		Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027(L_159, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean VertexGenerator::AddVertices(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * ___verticesResultDic0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vertice1, int32_t ___index2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator_AddVertices_m0FF2805831BEE2622F42C51CF27F88EF89CDA9EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (verticesResultDic.ContainsValue(index) || verticesResultDic.ContainsKey(vertice))
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_0 = ___verticesResultDic0;
		int32_t L_1 = ___index2;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsValue_mCE3D9C202670540847AD2A2B8F99727727D97CA8(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsValue_mCE3D9C202670540847AD2A2B8F99727727D97CA8_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_3 = ___verticesResultDic0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___vertice1;
		NullCheck(L_3);
		bool L_5 = Dictionary_2_ContainsKey_mF877DE353865F5D40ED8958FF63D9F2EADB637FE(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_mF877DE353865F5D40ED8958FF63D9F2EADB637FE_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// verticesResultDic.Add(vertice, index);
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_6 = ___verticesResultDic0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___vertice1;
		int32_t L_8 = ___index2;
		NullCheck(L_6);
		Dictionary_2_Add_m01A4C79F3249F0ADC0C6C5BBD018D2E93FF79365(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_m01A4C79F3249F0ADC0C6C5BBD018D2E93FF79365_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Vector3[] VertexGenerator::GetReusltVertices(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* VertexGenerator_GetReusltVertices_m5A44D37536F471E013F6D0EB816158483D2A00E2 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * ___verticesResultDic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator_GetReusltVertices_m5A44D37536F471E013F6D0EB816158483D2A00E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_1 = NULL;
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int length = verticesResultDic.Keys.Count;
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_0 = ___verticesResultDic0;
		NullCheck(L_0);
		KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * L_1 = Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040(L_0, /*hidden argument*/Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = KeyCollection_get_Count_m85B99F5FD098C15030F95FDB712F4CBF166CD743(L_1, /*hidden argument*/KeyCollection_get_Count_m85B99F5FD098C15030F95FDB712F4CBF166CD743_RuntimeMethod_var);
		V_0 = L_2;
		// Vector3[] result = new Vector3[length];
		int32_t L_3 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// List<Vector3> temp = new List<Vector3>(verticesResultDic.Keys);
		Dictionary_2_t2E84AA2FFDD4D5D4C49EDEAF24AC232FCE6C0A91 * L_5 = ___verticesResultDic0;
		NullCheck(L_5);
		KeyCollection_t1FF87EA168C541BBDB7BE83EFE351E244C402AE2 * L_6 = Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040(L_5, /*hidden argument*/Dictionary_2_get_Keys_m4E9B5344216C1EC8C3DDE978B3349A2BC37E2040_RuntimeMethod_var);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_7 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C(L_7, L_6, /*hidden argument*/List_1__ctor_m29D7B30AF211E64C28606D9764866B8B76AEAA6C_RuntimeMethod_var);
		V_2 = L_7;
		// for (int i = 0; i < length; i++)
		V_3 = 0;
		goto IL_0035;
	}

IL_0023:
	{
		// result[i] = temp[i];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = V_1;
		int32_t L_9 = V_3;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_RuntimeMethod_var);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_12);
		// for (int i = 0; i < length; i++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0035:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_14 = V_3;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0023;
		}
	}
	{
		// return result;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_16 = V_1;
		return L_16;
	}
}
// System.Void VertexGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexGenerator__ctor_m03CCB7DF44C38B5A32170D21EC5375F2E9C2B020 (VertexGenerator_t71C807C2C9FE4B44B5A8C46DF13E501132625106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VertexGenerator__ctor_m03CCB7DF44C38B5A32170D21EC5375F2E9C2B020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float pointScale = 0.01f;
		__this->set_pointScale_4((0.01f));
		// List<Vector3> positionList = new List<Vector3>();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171(L_0, /*hidden argument*/List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var);
		__this->set_positionList_7(L_0);
		// List<GameObject> positionObjList = new List<GameObject>();
		List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * L_1 = (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *)il2cpp_codegen_object_new(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B_il2cpp_TypeInfo_var);
		List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60(L_1, /*hidden argument*/List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var);
		__this->set_positionObjList_8(L_1);
		// Dictionary<string, List<int>> pointmap = new Dictionary<string, List<int>>();
		Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 * L_2 = (Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28 *)il2cpp_codegen_object_new(Dictionary_2_t946D91DD7ED0F46C8AAC4DF282D8C9A48EA5FE28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7067EEB3CF8A52DE17DCCA02E2ABF40CC224BF28(L_2, /*hidden argument*/Dictionary_2__ctor_m7067EEB3CF8A52DE17DCCA02E2ABF40CC224BF28_RuntimeMethod_var);
		__this->set_pointmap_9(L_2);
		// int iteration = 5;
		__this->set_iteration_10(5);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator WebRequest::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRequest_GetRequest_m785F2676FC5ABB4EB8D0B8005F29A7524037A11C (WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * __this, String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequest_GetRequest_m785F2676FC5ABB4EB8D0B8005F29A7524037A11C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * L_0 = (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 *)il2cpp_codegen_object_new(U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2_il2cpp_TypeInfo_var);
		U3CGetRequestU3Ed__2__ctor_m1EF00D8D2741021E9951D79F2C2E5DCA46976234(L_0, 0, /*hidden argument*/NULL);
		U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * L_2 = L_1;
		String_t* L_3 = ___uri0;
		NullCheck(L_2);
		L_2->set_uri_3(L_3);
		return L_2;
	}
}
// System.Void WebRequest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_Start_m48482E165E8F94D148A027974DACEAB0DA6FA229 (WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * __this, const RuntimeMethod* method)
{
	{
		// idLock = false;
		__this->set_idLock_5((bool)0);
		// }
		return;
	}
}
// System.Void WebRequest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_Update_mCC222596702E26820E093EBE921E51038FE01E79 (WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequest_Update_mCC222596702E26820E093EBE921E51038FE01E79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (idLock == false)
		bool L_0 = __this->get_idLock_5();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// StartCoroutine(GetRequest("https://phpmyadmin-dot-graphic-outlook-279320.appspot.com/get_positions.php?id=1"));
		RuntimeObject* L_1 = WebRequest_GetRequest_m785F2676FC5ABB4EB8D0B8005F29A7524037A11C(__this, _stringLiteralA7887C34AB10ABB0F567CB5C82439262617DD0E2, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void WebRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest__ctor_m38D06FF6B4067AAAD860BE7A8FF96B59AE514CCD (WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void WebRequest_<GetRequest>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__2__ctor_m1EF00D8D2741021E9951D79F2C2E5DCA46976234 (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebRequest_<GetRequest>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__2_System_IDisposable_Dispose_m584951EB1448BBDE8F99AF0C439DA16C91D7061A (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetRequestU3Ed__2_U3CU3Em__Finally1_mC172A13B9E938CF8A6549DF5667528AC9899A4EF(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean WebRequest_<GetRequest>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRequestU3Ed__2_MoveNext_m9E107817666447E083AF74429356660D4601C339 (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetRequestU3Ed__2_MoveNext_m9E107817666447E083AF74429356660D4601C339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0062;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00f0;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// idLock = true;
			WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * L_4 = V_2;
			NullCheck(L_4);
			L_4->set_idLock_5((bool)1);
			// using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
			String_t* L_5 = __this->get_uri_3();
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_5, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return webRequest.SendWebRequest();
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_7 = __this->get_U3CwebRequestU3E5__2_4();
			NullCheck(L_7);
			UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_8 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_7, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_8);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00f0;
		}

IL_0062:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// string[] pages = uri.Split('/');
			String_t* L_9 = __this->get_uri_3();
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_10 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_11 = L_10;
			NullCheck(L_11);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
			NullCheck(L_9);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_9, L_11, /*hidden argument*/NULL);
			// int page = pages.Length - 1;
			NullCheck(L_12);
			// if (webRequest.isNetworkError)
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_13 = __this->get_U3CwebRequestU3E5__2_4();
			NullCheck(L_13);
			bool L_14 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00ac;
			}
		}

IL_0090:
		{
			// Debug.Log("Fail!");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral11AE5C698A59D456D5D3387543B2438552529090, /*hidden argument*/NULL);
			// info.text = "Fail";
			WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * L_15 = V_2;
			NullCheck(L_15);
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_16 = L_15->get_info_4();
			NullCheck(L_16);
			VirtActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral2758E3273DD1670B2F6F59AFA8542D89C80D20A6);
			// }
			goto IL_00d1;
		}

IL_00ac:
		{
			// Debug.Log("Success!");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral7CE01F6381463362CF6AEF2F843A59261E8F5587, /*hidden argument*/NULL);
			// info.text = webRequest.downloadHandler.text;
			WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * L_17 = V_2;
			NullCheck(L_17);
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_18 = L_17->get_info_4();
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_19 = __this->get_U3CwebRequestU3E5__2_4();
			NullCheck(L_19);
			DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_20 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			String_t* L_21 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF(L_20, /*hidden argument*/NULL);
			NullCheck(L_18);
			VirtActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
		}

IL_00d1:
		{
			// }
			U3CGetRequestU3Ed__2_U3CU3Em__Finally1_mC172A13B9E938CF8A6549DF5667528AC9899A4EF(__this, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_4((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)NULL);
			// idLock = false;
			WebRequest_t3C238525789020DDC736E542445ABFA6EC3150F9 * L_22 = V_2;
			NullCheck(L_22);
			L_22->set_idLock_5((bool)0);
			// }
			V_0 = (bool)0;
			goto IL_00f0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00e9;
	}

FAULT_00e9:
	{ // begin fault (depth: 1)
		U3CGetRequestU3Ed__2_System_IDisposable_Dispose_m584951EB1448BBDE8F99AF0C439DA16C91D7061A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(233)
	} // end fault
	IL2CPP_CLEANUP(233)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f0:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void WebRequest_<GetRequest>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__2_U3CU3Em__Finally1_mC172A13B9E938CF8A6549DF5667528AC9899A4EF (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetRequestU3Ed__2_U3CU3Em__Finally1_mC172A13B9E938CF8A6549DF5667528AC9899A4EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_0 = __this->get_U3CwebRequestU3E5__2_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_1 = __this->get_U3CwebRequestU3E5__2_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object WebRequest_<GetRequest>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRequestU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m96FFC98DF495A68A7A2A44EC5A262F458BA2B3F3 (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebRequest_<GetRequest>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__2_System_Collections_IEnumerator_Reset_m73874A2326A0E1ECF72D895BDDE9D3CDFF6DC69B (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetRequestU3Ed__2_System_Collections_IEnumerator_Reset_m73874A2326A0E1ECF72D895BDDE9D3CDFF6DC69B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetRequestU3Ed__2_System_Collections_IEnumerator_Reset_m73874A2326A0E1ECF72D895BDDE9D3CDFF6DC69B_RuntimeMethod_var);
	}
}
// System.Object WebRequest_<GetRequest>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRequestU3Ed__2_System_Collections_IEnumerator_get_Current_m71A3CD16BAE32B3D88B5C640F52A4A65E21674EB (U3CGetRequestU3Ed__2_t170F016B3E039F7B8EDD1F77F2D60CABFA6D6CF2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m408718285307B20591360EC502455AD7600484F5_gshared_inline (Enumerator_t725320A9593FFA06C5F8F058B3705F530FC9D210 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
