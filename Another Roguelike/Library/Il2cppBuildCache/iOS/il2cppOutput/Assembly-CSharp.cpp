#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<Enemy>
struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BoardManager
struct BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Loader
struct Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MovingObject
struct MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// Quit
struct Quit_t390EF75E1E4AA071D5D1A4911600D450776363D6;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Restart
struct Restart_tE1087607F77C635FD0BA6DA2CCE5AF9343FDDF14;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SoundItro
struct SoundItro_tC62A5DEE9A8B1EB895D8B09DB504255DC967B4EA;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// Start
struct Start_t83C2AD581A7B40F32A1D2F7CD3001F4782DBF1AE;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Wall
struct Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// BoardManager/Count
struct Count_t43FD08C05C3123E7D601E60282485C59D5F2C038;
// GameManager/<MoveEnemies>d__27
struct U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// MovingObject/<SmoothMovement>d__7
struct U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823;

IL2CPP_EXTERN_C RuntimeClass* AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Count_t43FD08C05C3123E7D601E60282485C59D5F2C038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D;
IL2CPP_EXTERN_C String_t* _stringLiteral15AA2B97826EC4EE3E63BF8B0119089EC201E31C;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08;
IL2CPP_EXTERN_C String_t* _stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA8BA6AC5417FB469B3CB79124DD6847F6609DB;
IL2CPP_EXTERN_C String_t* _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420;
IL2CPP_EXTERN_C String_t* _stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C;
IL2CPP_EXTERN_C String_t* _stringLiteral729AAAB7476A9A79F6553A6C4B43D3BBDC045178;
IL2CPP_EXTERN_C String_t* _stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral838E394589B5693706685699154545855BEAE0B2;
IL2CPP_EXTERN_C String_t* _stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2;
IL2CPP_EXTERN_C String_t* _stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4;
IL2CPP_EXTERN_C String_t* _stringLiteralB97261CE3D2BECAACAC39B10661E735709A9E116;
IL2CPP_EXTERN_C String_t* _stringLiteralBE663E923250D665860AC494057CF899EAFEDE00;
IL2CPP_EXTERN_C String_t* _stringLiteralC5AA40B486DFC1BF01ABB3A7E51353420BCEC827;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE07F7F6C1F6A9F9D133ADF24795FB4C2A7AC7B9D;
IL2CPP_EXTERN_C String_t* _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511;
IL2CPP_EXTERN_C String_t* _stringLiteralF117C6985226D7151C8D72C310304BE920887ADC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_Loadedscene_m90915D1AFB7D158B4914FB6EB723CC88C6A3ADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttempMove_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_mD7351AAC2F2B6467A41CFCCECF509A9FB80CA5F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttempMove_TisWall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C_m8F2AD2EBDC28AFB9B764F0D5164A34DE2D6F7A40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveEnemiesU3Ed__27_System_Collections_IEnumerator_Reset_m1F161E77548EE57D8F1056D4EF0EDFFC5DA79071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0E8B1FC6C9C001B9EB5ABA32422DD3DF5EABDFD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Enemy>
struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____items_1)); }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* get__items_1() const { return ____items_1; }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_StaticFields, ____emptyArray_5)); }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// BoardManager/Count
struct Count_t43FD08C05C3123E7D601E60282485C59D5F2C038  : public RuntimeObject
{
public:
	// System.Int32 BoardManager/Count::minimum
	int32_t ___minimum_0;
	// System.Int32 BoardManager/Count::maximum
	int32_t ___maximum_1;

public:
	inline static int32_t get_offset_of_minimum_0() { return static_cast<int32_t>(offsetof(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038, ___minimum_0)); }
	inline int32_t get_minimum_0() const { return ___minimum_0; }
	inline int32_t* get_address_of_minimum_0() { return &___minimum_0; }
	inline void set_minimum_0(int32_t value)
	{
		___minimum_0 = value;
	}

	inline static int32_t get_offset_of_maximum_1() { return static_cast<int32_t>(offsetof(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038, ___maximum_1)); }
	inline int32_t get_maximum_1() const { return ___maximum_1; }
	inline int32_t* get_address_of_maximum_1() { return &___maximum_1; }
	inline void set_maximum_1(int32_t value)
	{
		___maximum_1 = value;
	}
};


// GameManager/<MoveEnemies>d__27
struct U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<MoveEnemies>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<MoveEnemies>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<MoveEnemies>d__27::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;
	// System.Int32 GameManager/<MoveEnemies>d__27::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// MovingObject/<SmoothMovement>d__7
struct U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823  : public RuntimeObject
{
public:
	// System.Int32 MovingObject/<SmoothMovement>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MovingObject/<SmoothMovement>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MovingObject MovingObject/<SmoothMovement>d__7::<>4__this
	MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 MovingObject/<SmoothMovement>d__7::end
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end_3;
	// System.Single MovingObject/<SmoothMovement>d__7::<sqrRemainingDistance>5__2
	float ___U3CsqrRemainingDistanceU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___U3CU3E4__this_2)); }
	inline MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___end_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_end_3() const { return ___end_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___end_3 = value;
	}

	inline static int32_t get_offset_of_U3CsqrRemainingDistanceU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823, ___U3CsqrRemainingDistanceU3E5__2_4)); }
	inline float get_U3CsqrRemainingDistanceU3E5__2_4() const { return ___U3CsqrRemainingDistanceU3E5__2_4; }
	inline float* get_address_of_U3CsqrRemainingDistanceU3E5__2_4() { return &___U3CsqrRemainingDistanceU3E5__2_4; }
	inline void set_U3CsqrRemainingDistanceU3E5__2_4(float value)
	{
		___U3CsqrRemainingDistanceU3E5__2_4 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BoardManager
struct BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 BoardManager::rows
	int32_t ___rows_4;
	// System.Int32 BoardManager::columns
	int32_t ___columns_5;
	// BoardManager/Count BoardManager::wallCount
	Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * ___wallCount_6;
	// BoardManager/Count BoardManager::foodCount
	Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * ___foodCount_7;
	// UnityEngine.GameObject BoardManager::exit
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___exit_8;
	// UnityEngine.GameObject[] BoardManager::floorTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___floorTiles_9;
	// UnityEngine.GameObject[] BoardManager::wallTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___wallTiles_10;
	// UnityEngine.GameObject[] BoardManager::foodTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___foodTiles_11;
	// UnityEngine.GameObject[] BoardManager::enemyTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemyTiles_12;
	// UnityEngine.GameObject[] BoardManager::outerwallTiles
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___outerwallTiles_13;
	// UnityEngine.Transform BoardManager::boardHolder
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___boardHolder_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BoardManager::gridPositions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___gridPositions_15;

public:
	inline static int32_t get_offset_of_rows_4() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___rows_4)); }
	inline int32_t get_rows_4() const { return ___rows_4; }
	inline int32_t* get_address_of_rows_4() { return &___rows_4; }
	inline void set_rows_4(int32_t value)
	{
		___rows_4 = value;
	}

	inline static int32_t get_offset_of_columns_5() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___columns_5)); }
	inline int32_t get_columns_5() const { return ___columns_5; }
	inline int32_t* get_address_of_columns_5() { return &___columns_5; }
	inline void set_columns_5(int32_t value)
	{
		___columns_5 = value;
	}

	inline static int32_t get_offset_of_wallCount_6() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___wallCount_6)); }
	inline Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * get_wallCount_6() const { return ___wallCount_6; }
	inline Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 ** get_address_of_wallCount_6() { return &___wallCount_6; }
	inline void set_wallCount_6(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * value)
	{
		___wallCount_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallCount_6), (void*)value);
	}

	inline static int32_t get_offset_of_foodCount_7() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___foodCount_7)); }
	inline Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * get_foodCount_7() const { return ___foodCount_7; }
	inline Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 ** get_address_of_foodCount_7() { return &___foodCount_7; }
	inline void set_foodCount_7(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * value)
	{
		___foodCount_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodCount_7), (void*)value);
	}

	inline static int32_t get_offset_of_exit_8() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___exit_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_exit_8() const { return ___exit_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_exit_8() { return &___exit_8; }
	inline void set_exit_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___exit_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exit_8), (void*)value);
	}

	inline static int32_t get_offset_of_floorTiles_9() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___floorTiles_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_floorTiles_9() const { return ___floorTiles_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_floorTiles_9() { return &___floorTiles_9; }
	inline void set_floorTiles_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___floorTiles_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorTiles_9), (void*)value);
	}

	inline static int32_t get_offset_of_wallTiles_10() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___wallTiles_10)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_wallTiles_10() const { return ___wallTiles_10; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_wallTiles_10() { return &___wallTiles_10; }
	inline void set_wallTiles_10(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___wallTiles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallTiles_10), (void*)value);
	}

	inline static int32_t get_offset_of_foodTiles_11() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___foodTiles_11)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_foodTiles_11() const { return ___foodTiles_11; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_foodTiles_11() { return &___foodTiles_11; }
	inline void set_foodTiles_11(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___foodTiles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodTiles_11), (void*)value);
	}

	inline static int32_t get_offset_of_enemyTiles_12() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___enemyTiles_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemyTiles_12() const { return ___enemyTiles_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemyTiles_12() { return &___enemyTiles_12; }
	inline void set_enemyTiles_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemyTiles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyTiles_12), (void*)value);
	}

	inline static int32_t get_offset_of_outerwallTiles_13() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___outerwallTiles_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_outerwallTiles_13() const { return ___outerwallTiles_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_outerwallTiles_13() { return &___outerwallTiles_13; }
	inline void set_outerwallTiles_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___outerwallTiles_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outerwallTiles_13), (void*)value);
	}

	inline static int32_t get_offset_of_boardHolder_14() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___boardHolder_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_boardHolder_14() const { return ___boardHolder_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_boardHolder_14() { return &___boardHolder_14; }
	inline void set_boardHolder_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___boardHolder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardHolder_14), (void*)value);
	}

	inline static int32_t get_offset_of_gridPositions_15() { return static_cast<int32_t>(offsetof(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91, ___gridPositions_15)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_gridPositions_15() const { return ___gridPositions_15; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_gridPositions_15() { return &___gridPositions_15; }
	inline void set_gridPositions_15(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___gridPositions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridPositions_15), (void*)value);
	}
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BoardManager GameManager::boardScript
	BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * ___boardScript_5;
	// System.Int32 GameManager::playerFoodPoints
	int32_t ___playerFoodPoints_6;
	// System.Single GameManager::levelStartDelay
	float ___levelStartDelay_7;
	// System.Single GameManager::turnDelay
	float ___turnDelay_8;
	// System.Boolean GameManager::playersTurn
	bool ___playersTurn_9;
	// UnityEngine.UI.Text GameManager::levelText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelText_10;
	// UnityEngine.GameObject GameManager::levelImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___levelImage_11;
	// UnityEngine.GameObject GameManager::RestartButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RestartButton_12;
	// UnityEngine.GameObject GameManager::OverImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___OverImage_13;
	// UnityEngine.GameObject GameManager::ExitButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ExitButton_14;
	// UnityEngine.UI.Text GameManager::HighScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___HighScore_15;
	// System.Int32 GameManager::level
	int32_t ___level_16;
	// System.Int32 GameManager::highestLevel
	int32_t ___highestLevel_17;
	// System.Collections.Generic.List`1<Enemy> GameManager::enemies
	List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * ___enemies_18;
	// System.Boolean GameManager::enemiesMoving
	bool ___enemiesMoving_19;
	// System.Boolean GameManager::doingSetup
	bool ___doingSetup_20;

public:
	inline static int32_t get_offset_of_boardScript_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___boardScript_5)); }
	inline BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * get_boardScript_5() const { return ___boardScript_5; }
	inline BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 ** get_address_of_boardScript_5() { return &___boardScript_5; }
	inline void set_boardScript_5(BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * value)
	{
		___boardScript_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardScript_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerFoodPoints_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerFoodPoints_6)); }
	inline int32_t get_playerFoodPoints_6() const { return ___playerFoodPoints_6; }
	inline int32_t* get_address_of_playerFoodPoints_6() { return &___playerFoodPoints_6; }
	inline void set_playerFoodPoints_6(int32_t value)
	{
		___playerFoodPoints_6 = value;
	}

	inline static int32_t get_offset_of_levelStartDelay_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelStartDelay_7)); }
	inline float get_levelStartDelay_7() const { return ___levelStartDelay_7; }
	inline float* get_address_of_levelStartDelay_7() { return &___levelStartDelay_7; }
	inline void set_levelStartDelay_7(float value)
	{
		___levelStartDelay_7 = value;
	}

	inline static int32_t get_offset_of_turnDelay_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___turnDelay_8)); }
	inline float get_turnDelay_8() const { return ___turnDelay_8; }
	inline float* get_address_of_turnDelay_8() { return &___turnDelay_8; }
	inline void set_turnDelay_8(float value)
	{
		___turnDelay_8 = value;
	}

	inline static int32_t get_offset_of_playersTurn_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playersTurn_9)); }
	inline bool get_playersTurn_9() const { return ___playersTurn_9; }
	inline bool* get_address_of_playersTurn_9() { return &___playersTurn_9; }
	inline void set_playersTurn_9(bool value)
	{
		___playersTurn_9 = value;
	}

	inline static int32_t get_offset_of_levelText_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelText_10() const { return ___levelText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelText_10() { return &___levelText_10; }
	inline void set_levelText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelText_10), (void*)value);
	}

	inline static int32_t get_offset_of_levelImage_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelImage_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_levelImage_11() const { return ___levelImage_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_levelImage_11() { return &___levelImage_11; }
	inline void set_levelImage_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___levelImage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelImage_11), (void*)value);
	}

	inline static int32_t get_offset_of_RestartButton_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___RestartButton_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RestartButton_12() const { return ___RestartButton_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RestartButton_12() { return &___RestartButton_12; }
	inline void set_RestartButton_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RestartButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RestartButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_OverImage_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___OverImage_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_OverImage_13() const { return ___OverImage_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_OverImage_13() { return &___OverImage_13; }
	inline void set_OverImage_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___OverImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OverImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_ExitButton_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___ExitButton_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ExitButton_14() const { return ___ExitButton_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ExitButton_14() { return &___ExitButton_14; }
	inline void set_ExitButton_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ExitButton_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExitButton_14), (void*)value);
	}

	inline static int32_t get_offset_of_HighScore_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___HighScore_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_HighScore_15() const { return ___HighScore_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_HighScore_15() { return &___HighScore_15; }
	inline void set_HighScore_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___HighScore_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HighScore_15), (void*)value);
	}

	inline static int32_t get_offset_of_level_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___level_16)); }
	inline int32_t get_level_16() const { return ___level_16; }
	inline int32_t* get_address_of_level_16() { return &___level_16; }
	inline void set_level_16(int32_t value)
	{
		___level_16 = value;
	}

	inline static int32_t get_offset_of_highestLevel_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___highestLevel_17)); }
	inline int32_t get_highestLevel_17() const { return ___highestLevel_17; }
	inline int32_t* get_address_of_highestLevel_17() { return &___highestLevel_17; }
	inline void set_highestLevel_17(int32_t value)
	{
		___highestLevel_17 = value;
	}

	inline static int32_t get_offset_of_enemies_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___enemies_18)); }
	inline List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * get_enemies_18() const { return ___enemies_18; }
	inline List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C ** get_address_of_enemies_18() { return &___enemies_18; }
	inline void set_enemies_18(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * value)
	{
		___enemies_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemies_18), (void*)value);
	}

	inline static int32_t get_offset_of_enemiesMoving_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___enemiesMoving_19)); }
	inline bool get_enemiesMoving_19() const { return ___enemiesMoving_19; }
	inline bool* get_address_of_enemiesMoving_19() { return &___enemiesMoving_19; }
	inline void set_enemiesMoving_19(bool value)
	{
		___enemiesMoving_19 = value;
	}

	inline static int32_t get_offset_of_doingSetup_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___doingSetup_20)); }
	inline bool get_doingSetup_20() const { return ___doingSetup_20; }
	inline bool* get_address_of_doingSetup_20() { return &___doingSetup_20; }
	inline void set_doingSetup_20(bool value)
	{
		___doingSetup_20 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___instance_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_instance_4() const { return ___instance_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// Loader
struct Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Loader::gameManager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameManager_4;

public:
	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182, ___gameManager_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameManager_4() const { return ___gameManager_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_4), (void*)value);
	}
};


// MovingObject
struct MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MovingObject::moveTime
	float ___moveTime_4;
	// UnityEngine.LayerMask MovingObject::blokingLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___blokingLayer_5;
	// UnityEngine.BoxCollider2D MovingObject::boxCollider
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___boxCollider_6;
	// UnityEngine.Rigidbody2D MovingObject::rb2D
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2D_7;
	// System.Single MovingObject::inverseMoveTime
	float ___inverseMoveTime_8;

public:
	inline static int32_t get_offset_of_moveTime_4() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___moveTime_4)); }
	inline float get_moveTime_4() const { return ___moveTime_4; }
	inline float* get_address_of_moveTime_4() { return &___moveTime_4; }
	inline void set_moveTime_4(float value)
	{
		___moveTime_4 = value;
	}

	inline static int32_t get_offset_of_blokingLayer_5() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___blokingLayer_5)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_blokingLayer_5() const { return ___blokingLayer_5; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_blokingLayer_5() { return &___blokingLayer_5; }
	inline void set_blokingLayer_5(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___blokingLayer_5 = value;
	}

	inline static int32_t get_offset_of_boxCollider_6() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___boxCollider_6)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_boxCollider_6() const { return ___boxCollider_6; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_boxCollider_6() { return &___boxCollider_6; }
	inline void set_boxCollider_6(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___boxCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_rb2D_7() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___rb2D_7)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2D_7() const { return ___rb2D_7; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2D_7() { return &___rb2D_7; }
	inline void set_rb2D_7(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2D_7), (void*)value);
	}

	inline static int32_t get_offset_of_inverseMoveTime_8() { return static_cast<int32_t>(offsetof(MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C, ___inverseMoveTime_8)); }
	inline float get_inverseMoveTime_8() const { return ___inverseMoveTime_8; }
	inline float* get_address_of_inverseMoveTime_8() { return &___inverseMoveTime_8; }
	inline void set_inverseMoveTime_8(float value)
	{
		___inverseMoveTime_8 = value;
	}
};


// Quit
struct Quit_t390EF75E1E4AA071D5D1A4911600D450776363D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Restart
struct Restart_tE1087607F77C635FD0BA6DA2CCE5AF9343FDDF14  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SoundItro
struct SoundItro_tC62A5DEE9A8B1EB895D8B09DB504255DC967B4EA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource SoundItro::musicIntro
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___musicIntro_4;

public:
	inline static int32_t get_offset_of_musicIntro_4() { return static_cast<int32_t>(offsetof(SoundItro_tC62A5DEE9A8B1EB895D8B09DB504255DC967B4EA, ___musicIntro_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_musicIntro_4() const { return ___musicIntro_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_musicIntro_4() { return &___musicIntro_4; }
	inline void set_musicIntro_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___musicIntro_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicIntro_4), (void*)value);
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource SoundManager::efxSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___efxSource_4;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___musicSource_5;
	// System.Single SoundManager::lowPitchRange
	float ___lowPitchRange_7;
	// System.Single SoundManager::highPitchRange
	float ___highPitchRange_8;

public:
	inline static int32_t get_offset_of_efxSource_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___efxSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_efxSource_4() const { return ___efxSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_efxSource_4() { return &___efxSource_4; }
	inline void set_efxSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___efxSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___efxSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_musicSource_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___musicSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_musicSource_5() const { return ___musicSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_musicSource_5() { return &___musicSource_5; }
	inline void set_musicSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___musicSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_lowPitchRange_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___lowPitchRange_7)); }
	inline float get_lowPitchRange_7() const { return ___lowPitchRange_7; }
	inline float* get_address_of_lowPitchRange_7() { return &___lowPitchRange_7; }
	inline void set_lowPitchRange_7(float value)
	{
		___lowPitchRange_7 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_8() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___highPitchRange_8)); }
	inline float get_highPitchRange_8() const { return ___highPitchRange_8; }
	inline float* get_address_of_highPitchRange_8() { return &___highPitchRange_8; }
	inline void set_highPitchRange_8(float value)
	{
		___highPitchRange_8 = value;
	}
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::instance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___instance_6)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_instance_6() const { return ___instance_6; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// Start
struct Start_t83C2AD581A7B40F32A1D2F7CD3001F4782DBF1AE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Wall
struct Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite Wall::dmgSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___dmgSprite_4;
	// System.Int32 Wall::hp
	int32_t ___hp_5;
	// UnityEngine.AudioClip Wall::chopSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___chopSound1_6;
	// UnityEngine.AudioClip Wall::chopSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___chopSound2_7;
	// UnityEngine.SpriteRenderer Wall::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_8;

public:
	inline static int32_t get_offset_of_dmgSprite_4() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___dmgSprite_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_dmgSprite_4() const { return ___dmgSprite_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_dmgSprite_4() { return &___dmgSprite_4; }
	inline void set_dmgSprite_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___dmgSprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dmgSprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_hp_5() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___hp_5)); }
	inline int32_t get_hp_5() const { return ___hp_5; }
	inline int32_t* get_address_of_hp_5() { return &___hp_5; }
	inline void set_hp_5(int32_t value)
	{
		___hp_5 = value;
	}

	inline static int32_t get_offset_of_chopSound1_6() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___chopSound1_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_chopSound1_6() const { return ___chopSound1_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_chopSound1_6() { return &___chopSound1_6; }
	inline void set_chopSound1_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___chopSound1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound1_6), (void*)value);
	}

	inline static int32_t get_offset_of_chopSound2_7() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___chopSound2_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_chopSound2_7() const { return ___chopSound2_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_chopSound2_7() { return &___chopSound2_7; }
	inline void set_chopSound2_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___chopSound2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound2_7), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_8() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___spriteRenderer_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_8() const { return ___spriteRenderer_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_8() { return &___spriteRenderer_8; }
	inline void set_spriteRenderer_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_8), (void*)value);
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C
{
public:
	// System.Int32 Enemy::playerDamage
	int32_t ___playerDamage_9;
	// UnityEngine.Animator Enemy::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_10;
	// UnityEngine.Transform Enemy::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_11;
	// System.Boolean Enemy::skipMove
	bool ___skipMove_12;
	// UnityEngine.AudioClip Enemy::enemyAttack1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___enemyAttack1_13;
	// UnityEngine.AudioClip Enemy::enemyAttack2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___enemyAttack2_14;

public:
	inline static int32_t get_offset_of_playerDamage_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___playerDamage_9)); }
	inline int32_t get_playerDamage_9() const { return ___playerDamage_9; }
	inline int32_t* get_address_of_playerDamage_9() { return &___playerDamage_9; }
	inline void set_playerDamage_9(int32_t value)
	{
		___playerDamage_9 = value;
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___animator_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_10() const { return ___animator_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_10), (void*)value);
	}

	inline static int32_t get_offset_of_target_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___target_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_11() const { return ___target_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_11() { return &___target_11; }
	inline void set_target_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_11), (void*)value);
	}

	inline static int32_t get_offset_of_skipMove_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___skipMove_12)); }
	inline bool get_skipMove_12() const { return ___skipMove_12; }
	inline bool* get_address_of_skipMove_12() { return &___skipMove_12; }
	inline void set_skipMove_12(bool value)
	{
		___skipMove_12 = value;
	}

	inline static int32_t get_offset_of_enemyAttack1_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyAttack1_13)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_enemyAttack1_13() const { return ___enemyAttack1_13; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_enemyAttack1_13() { return &___enemyAttack1_13; }
	inline void set_enemyAttack1_13(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___enemyAttack1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyAttack1_13), (void*)value);
	}

	inline static int32_t get_offset_of_enemyAttack2_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyAttack2_14)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_enemyAttack2_14() const { return ___enemyAttack2_14; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_enemyAttack2_14() { return &___enemyAttack2_14; }
	inline void set_enemyAttack2_14(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___enemyAttack2_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyAttack2_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C
{
public:
	// System.Int32 Player::wallDamage
	int32_t ___wallDamage_9;
	// System.Int32 Player::pointsPerFood
	int32_t ___pointsPerFood_10;
	// System.Int32 Player::pointsPerSoda
	int32_t ___pointsPerSoda_11;
	// System.Single Player::restarLevelDelay
	float ___restarLevelDelay_12;
	// UnityEngine.UI.Text Player::foodText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___foodText_13;
	// UnityEngine.AudioClip Player::moveSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___moveSound1_14;
	// UnityEngine.AudioClip Player::moveSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___moveSound2_15;
	// UnityEngine.AudioClip Player::eatSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___eatSound1_16;
	// UnityEngine.AudioClip Player::eatSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___eatSound2_17;
	// UnityEngine.AudioClip Player::drinkSound1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___drinkSound1_18;
	// UnityEngine.AudioClip Player::drinkSound2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___drinkSound2_19;
	// UnityEngine.AudioClip Player::gameOverSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___gameOverSound_20;
	// UnityEngine.Animator Player::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_21;
	// System.Int32 Player::food
	int32_t ___food_22;

public:
	inline static int32_t get_offset_of_wallDamage_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___wallDamage_9)); }
	inline int32_t get_wallDamage_9() const { return ___wallDamage_9; }
	inline int32_t* get_address_of_wallDamage_9() { return &___wallDamage_9; }
	inline void set_wallDamage_9(int32_t value)
	{
		___wallDamage_9 = value;
	}

	inline static int32_t get_offset_of_pointsPerFood_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___pointsPerFood_10)); }
	inline int32_t get_pointsPerFood_10() const { return ___pointsPerFood_10; }
	inline int32_t* get_address_of_pointsPerFood_10() { return &___pointsPerFood_10; }
	inline void set_pointsPerFood_10(int32_t value)
	{
		___pointsPerFood_10 = value;
	}

	inline static int32_t get_offset_of_pointsPerSoda_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___pointsPerSoda_11)); }
	inline int32_t get_pointsPerSoda_11() const { return ___pointsPerSoda_11; }
	inline int32_t* get_address_of_pointsPerSoda_11() { return &___pointsPerSoda_11; }
	inline void set_pointsPerSoda_11(int32_t value)
	{
		___pointsPerSoda_11 = value;
	}

	inline static int32_t get_offset_of_restarLevelDelay_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___restarLevelDelay_12)); }
	inline float get_restarLevelDelay_12() const { return ___restarLevelDelay_12; }
	inline float* get_address_of_restarLevelDelay_12() { return &___restarLevelDelay_12; }
	inline void set_restarLevelDelay_12(float value)
	{
		___restarLevelDelay_12 = value;
	}

	inline static int32_t get_offset_of_foodText_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___foodText_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_foodText_13() const { return ___foodText_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_foodText_13() { return &___foodText_13; }
	inline void set_foodText_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___foodText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodText_13), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound1_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___moveSound1_14)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_moveSound1_14() const { return ___moveSound1_14; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_moveSound1_14() { return &___moveSound1_14; }
	inline void set_moveSound1_14(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___moveSound1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound1_14), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound2_15() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___moveSound2_15)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_moveSound2_15() const { return ___moveSound2_15; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_moveSound2_15() { return &___moveSound2_15; }
	inline void set_moveSound2_15(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___moveSound2_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound2_15), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound1_16() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___eatSound1_16)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_eatSound1_16() const { return ___eatSound1_16; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_eatSound1_16() { return &___eatSound1_16; }
	inline void set_eatSound1_16(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___eatSound1_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound1_16), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound2_17() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___eatSound2_17)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_eatSound2_17() const { return ___eatSound2_17; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_eatSound2_17() { return &___eatSound2_17; }
	inline void set_eatSound2_17(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___eatSound2_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound2_17), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound1_18() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___drinkSound1_18)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_drinkSound1_18() const { return ___drinkSound1_18; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_drinkSound1_18() { return &___drinkSound1_18; }
	inline void set_drinkSound1_18(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___drinkSound1_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound1_18), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound2_19() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___drinkSound2_19)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_drinkSound2_19() const { return ___drinkSound2_19; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_drinkSound2_19() { return &___drinkSound2_19; }
	inline void set_drinkSound2_19(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___drinkSound2_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound2_19), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverSound_20() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___gameOverSound_20)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_gameOverSound_20() const { return ___gameOverSound_20; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_gameOverSound_20() { return &___gameOverSound_20; }
	inline void set_gameOverSound_20(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___gameOverSound_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverSound_20), (void*)value);
	}

	inline static int32_t get_offset_of_animator_21() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___animator_21)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_21() const { return ___animator_21; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_21() { return &___animator_21; }
	inline void set_animator_21(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_21), (void*)value);
	}

	inline static int32_t get_offset_of_food_22() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___food_22)); }
	inline int32_t get_food_22() const { return ___food_22; }
	inline int32_t* get_address_of_food_22() { return &___food_22; }
	inline void set_food_22(int32_t value)
	{
		___food_22 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoardManager_RandomPosition_m935B2ED4B94CF71E5B64FED0F31502651685BA92 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method);
// System.Void BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m99C9EEF2A55C2CDD7EF142DD274CFDB55F37844D (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method);
// System.Void BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m24DA11637120310A6E6C59FAC739DE7266F9DCC9 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method);
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A (float ___f0, float ___p1, const RuntimeMethod* method);
// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m5875DFC4DC21CCF8D66E8D3389296B63F07A1028 (Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void GameManager::AddEnemyToList(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_mA112B59DD65068F09ACF0CC996EEBABB1C165025 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___script0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// System.Void MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m8CFA40B703119CCC5B0EC7C40D7E78783A34EA5F (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m38E8072FE2E1134B90E1687C927B3CE128B221A1 (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::.ctor()
inline void List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721 (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<BoardManager>()
inline BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m69725C1E9ADF1E5FE760656AAC95054AC00AF97D (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_m4E4EDB5C15F37DFFC40895B4980CA7CCEAB3407D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::Clear()
inline void List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_mFB52812FBF77FFF6DCFB23B3C2C921FD7303C47C (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m37D946D3F0876B1701A271210C51921850CFA930 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::Add(!0)
inline void List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void GameManager/<MoveEnemies>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__27__ctor_mE51360235234B1293A4168724577F66446018965 (U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Linecast_mD982886413BF081441FDFA937E83B5E661C3B622 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___start0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___end1, int32_t ___layerMask2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m94963AEBAA322DAA3E29C157E1C213961D9BF8CD (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end0, const RuntimeMethod* method);
// System.Void MovingObject/<SmoothMovement>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7__ctor_mBFA2F4D47B7E7DFF0F4897DE7AA3CE9D51B86026 (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m355DE88CFDD1EB81E9682CF4327DE765E35A01A4 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Application::get_loadedLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_loadedLevel_m0E346B638F8E10D4FD5D4C883FAA39C34CF41C1E (const RuntimeMethod* method);
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_LoadLevel_mB8D52CB842A98DDBB611D39C80709F5233AF6AAB (int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Player::CheckItOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckItOver_mEA2371F0B084D5F131833A4A34F2099CF1F08FE4 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Enemy>::get_Count()
inline int32_t List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Enemy>::get_Item(System.Int32)
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_inline (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m97D831D3D5C6924EA6E4477F8C5F0BB4D26468A5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m24DA11637120310A6E6C59FAC739DE7266F9DCC9 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// gridPositions.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_0, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// for(int x=1;x<columns-1;x++)
		V_0 = 1;
		goto IL_003f;
	}

IL_000f:
	{
		// for(int y =1;y<rows-1;y++)
		V_1 = 1;
		goto IL_0030;
	}

IL_0013:
	{
		// gridPositions.Add(new Vector3(x, y, 0f));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_gridPositions_15();
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), ((float)((float)L_2)), ((float)((float)L_3)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_1, L_4, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// for(int y =1;y<rows-1;y++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0030:
	{
		// for(int y =1;y<rows-1;y++)
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get_rows_4();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))))
		{
			goto IL_0013;
		}
	}
	{
		// for(int x=1;x<columns-1;x++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003f:
	{
		// for(int x=1;x<columns-1;x++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_columns_5();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m99C9EEF2A55C2CDD7EF142DD274CFDB55F37844D (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE663E923250D665860AC494057CF899EAFEDE00);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// boardHolder = new GameObject("Boord").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteralBE663E923250D665860AC494057CF899EAFEDE00, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_boardHolder_14(L_1);
		// for (int x =-1; x < columns + 1; x++)
		V_0 = (-1);
		goto IL_00a2;
	}

IL_001c:
	{
		// for (int y =-1; y < rows + 1; y++)
		V_1 = (-1);
		goto IL_0093;
	}

IL_0020:
	{
		// GameObject toInstantiate = floorTiles[Random.Range(0, floorTiles.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_floorTiles_9();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_floorTiles_9();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (x == -1 || x == columns || y == -1 || y == rows)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_columns_5();
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_rows_4();
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0066;
		}
	}

IL_0050:
	{
		// toInstantiate = outerwallTiles[Random.Range(0, outerwallTiles.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_outerwallTiles_13();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_outerwallTiles_13();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
	}

IL_0066:
	{
		// GameObject instance = Instantiate(toInstantiate, new Vector3(x, y, 0f), Quaternion.identity) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)((float)L_19)), ((float)((float)L_20)), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_18, L_21, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// instance.transform.SetParent(boardHolder);
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = __this->get_boardHolder_14();
		NullCheck(L_24);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_24, L_25, /*hidden argument*/NULL);
		// for (int y =-1; y < rows + 1; y++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0093:
	{
		// for (int y =-1; y < rows + 1; y++)
		int32_t L_27 = V_1;
		int32_t L_28 = __this->get_rows_4();
		if ((((int32_t)L_27) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)))))
		{
			goto IL_0020;
		}
	}
	{
		// for (int x =-1; x < columns + 1; x++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00a2:
	{
		// for (int x =-1; x < columns + 1; x++)
		int32_t L_30 = V_0;
		int32_t L_31 = __this->get_columns_5();
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoardManager_RandomPosition_m935B2ED4B94CF71E5B64FED0F31502651685BA92 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int randomIndex = Random.Range(0, gridPositions.Count);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_0, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 randomPosition = gridPositions[randomIndex];
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = __this->get_gridPositions_15();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		// gridPositions.RemoveAt(randomIndex);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_6 = __this->get_gridPositions_15();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA(L_6, L_7, /*hidden argument*/List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var);
		// return randomPosition;
		return L_5;
	}
}
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int objectCount = Random.Range(minimum,maximum+1);
		int32_t L_0 = ___minimum1;
		int32_t L_1 = ___maximum2;
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		// for(int i=0;i< objectCount; i++)
		V_1 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		// Vector3 randomPosition = RandomPosition();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = BoardManager_RandomPosition_m935B2ED4B94CF71E5B64FED0F31502651685BA92(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		// GameObject titleChoice = tileArray[Random.Range(0, tileArray.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = ___tileArray0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = ___tileArray0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// Instantiate(titleChoice, randomPosition, Quaternion.identity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_8, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// for(int i=0;i< objectCount; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0030:
	{
		// for(int i=0;i< objectCount; i++)
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_mFB52812FBF77FFF6DCFB23B3C2C921FD7303C47C (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// BoardSetup();
		BoardManager_BoardSetup_m99C9EEF2A55C2CDD7EF142DD274CFDB55F37844D(__this, /*hidden argument*/NULL);
		// InitialiseList();
		BoardManager_InitialiseList_m24DA11637120310A6E6C59FAC739DE7266F9DCC9(__this, /*hidden argument*/NULL);
		// LayoutObjectAtRandom(wallTiles, wallCount.minimum, wallCount.maximum);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_wallTiles_10();
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_1 = __this->get_wallCount_6();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_minimum_0();
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_3 = __this->get_wallCount_6();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0(__this, L_0, L_2, L_4, /*hidden argument*/NULL);
		// LayoutObjectAtRandom(foodTiles, foodCount.minimum, foodCount.maximum);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_foodTiles_11();
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_6 = __this->get_foodCount_7();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_minimum_0();
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_8 = __this->get_foodCount_7();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0(__this, L_5, L_7, L_9, /*hidden argument*/NULL);
		// int enemyCount = (int)Mathf.Log(level, 2f);
		int32_t L_10 = ___level0;
		float L_11;
		L_11 = Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A(((float)((float)L_10)), (2.0f), /*hidden argument*/NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_11);
		// LayoutObjectAtRandom(enemyTiles, enemyCount, enemyCount);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_enemyTiles_12();
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		BoardManager_LayoutObjectAtRandom_mC7D9C9AD82D1EC0A9A5B1693DA62D05AA9AEFBB0(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		// Instantiate(exit,new Vector3(columns-1,rows-1,0F),Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_exit_8();
		int32_t L_16 = __this->get_columns_5();
		int32_t L_17 = __this->get_rows_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoardManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_Start_m8C621CA5B9711FF6DD91E83945EAC38F4DD1DE52 (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BoardManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_Update_mCB986C217960E436703037393159A78AEF05686E (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_mEE21DAFF293EDBF41BDA217EBFD09B19F245B60C (BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Count_t43FD08C05C3123E7D601E60282485C59D5F2C038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int rows = 8;
		__this->set_rows_4(8);
		// public int columns = 8;
		__this->set_columns_5(8);
		// public Count wallCount = new Count(5,9);
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_0 = (Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 *)il2cpp_codegen_object_new(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038_il2cpp_TypeInfo_var);
		Count__ctor_m5875DFC4DC21CCF8D66E8D3389296B63F07A1028(L_0, 5, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_wallCount_6(L_0);
		// public Count foodCount = new Count(1, 5);
		Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * L_1 = (Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 *)il2cpp_codegen_object_new(Count_t43FD08C05C3123E7D601E60282485C59D5F2C038_il2cpp_TypeInfo_var);
		Count__ctor_m5875DFC4DC21CCF8D66E8D3389296B63F07A1028(L_1, 1, 5, /*hidden argument*/NULL);
		__this->set_foodCount_7(L_1);
		// private List<Vector3> gridPositions = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_2, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_gridPositions_15(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.AddEnemyToList(this);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		GameManager_AddEnemyToList_mA112B59DD65068F09ACF0CC996EEBABB1C165025(L_0, __this, /*hidden argument*/NULL);
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_10(L_1);
		// target = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		__this->set_target_11(L_3);
		// base.Start();
		MovingObject_Start_m8CFA40B703119CCC5B0EC7C40D7E78783A34EA5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m97D831D3D5C6924EA6E4477F8C5F0BB4D26468A5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovingObject_AttempMove_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_mD7351AAC2F2B6467A41CFCCECF509A9FB80CA5F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// int xDir = 0;
		V_0 = 0;
		// int yDir = 0;
		V_1 = 0;
		// if (Mathf.Abs(target.position.x - transform.position.x) < float.Epsilon)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_11();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)));
		if ((!(((float)L_6) < ((float)(1.40129846E-45f)))))
		{
			goto IL_005a;
		}
	}
	{
		// yDir = target.position.y > transform.position.y ? 1 : -1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_target_11();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		if ((((float)L_9) > ((float)L_12)))
		{
			goto IL_0056;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_0057;
	}

IL_0056:
	{
		G_B4_0 = 1;
	}

IL_0057:
	{
		V_1 = G_B4_0;
		goto IL_0081;
	}

IL_005a:
	{
		// xDir = target.position.x > transform.position.x ? 1 : -1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_target_11();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		if ((((float)L_15) > ((float)L_18)))
		{
			goto IL_007f;
		}
	}
	{
		G_B8_0 = (-1);
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 1;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		// AttempMove<Player>(xDir, yDir);
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttempMove_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_mD7351AAC2F2B6467A41CFCCECF509A9FB80CA5F5_RuntimeMethod_var, __this, L_19, L_20);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		MovingObject__ctor_m38E8072FE2E1134B90E1687C927B3CE128B221A1(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_instance_4(__this);
		goto IL_002d;
	}

IL_0015:
	{
		// else if (instance != this)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_5, /*hidden argument*/NULL);
		// enemies = new List<Enemy>();
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_6 = (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *)il2cpp_codegen_object_new(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_il2cpp_TypeInfo_var);
		List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721(L_6, /*hidden argument*/List_1__ctor_m264424C12AE2901EAD718720F579BDA200FCC721_RuntimeMethod_var);
		__this->set_enemies_18(L_6);
		// boardScript = GetComponent<BoardManager>();
		BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * L_7;
		L_7 = Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A(__this, /*hidden argument*/Component_GetComponent_TisBoardManager_t3985DB311F238FF4878376C70A779A0C07933F91_mBA60C5C71DBB87AD63980EFFB0ACED510ADFE67A_RuntimeMethod_var);
		__this->set_boardScript_5(L_7);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// HighScore.text = PlayerPrefs.GetInt("HighScore", 0).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_HighScore_15();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// HighScore.text = " ";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_HighScore_15();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		// }
		return;
	}
}
// System.Void GameManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnEnable_mD5C3947351399CD9D94EAABE360192091328B2E2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_Loadedscene_m90915D1AFB7D158B4914FB6EB723CC88C6A3ADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += Loadedscene;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)GameManager_Loadedscene_m90915D1AFB7D158B4914FB6EB723CC88C6A3ADC8_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDisable_m5A032AE11D2E2BD8808702576A5DF606E0828003 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_Loadedscene_m90915D1AFB7D158B4914FB6EB723CC88C6A3ADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= Loadedscene;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)GameManager_Loadedscene_m90915D1AFB7D158B4914FB6EB723CC88C6A3ADC8_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m69725C1E9ADF1E5FE760656AAC95054AC00AF97D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Loadedscene(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Loadedscene_m90915D1AFB7D158B4914FB6EB723CC88C6A3ADC8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scene.name == "Main")
		String_t* L_0;
		L_0 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// level++;
		int32_t L_2 = __this->get_level_16();
		__this->set_level_16(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
	}

IL_0021:
	{
		// InitGame();
		GameManager_InitGame_m4E4EDB5C15F37DFFC40895B4980CA7CCEAB3407D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_m4E4EDB5C15F37DFFC40895B4980CA7CCEAB3407D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA8BA6AC5417FB469B3CB79124DD6847F6609DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB97261CE3D2BECAACAC39B10661E735709A9E116);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("The level " + level);
		int32_t* L_0 = __this->get_address_of_level_16();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5CA8BA6AC5417FB469B3CB79124DD6847F6609DB, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// doingSetup = true;
		__this->set_doingSetup_20((bool)1);
		// levelImage = GameObject.Find("LevelImage");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08, /*hidden argument*/NULL);
		__this->set_levelImage_11(L_3);
		// RestartButton = GameObject.Find("RestartButton");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral6DCFED261E2880A0BAC97F17340F3E0B85FF123C, /*hidden argument*/NULL);
		__this->set_RestartButton_12(L_4);
		// OverImage = GameObject.Find("OverImage");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB97261CE3D2BECAACAC39B10661E735709A9E116, /*hidden argument*/NULL);
		__this->set_OverImage_13(L_5);
		// ExitButton = GameObject.Find("ExitButton");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral76E112635C3C501D74AF9A4D3B515FF840FF84EF, /*hidden argument*/NULL);
		__this->set_ExitButton_14(L_6);
		// HighScore = GameObject.Find("HighScore").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, /*hidden argument*/NULL);
		NullCheck(L_7);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_7, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_HighScore_15(L_8);
		// levelText = GameObject.Find("LevelText").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2, /*hidden argument*/NULL);
		NullCheck(L_9);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10;
		L_10 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_9, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_levelText_10(L_10);
		// levelText.text = "Day " + level;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_levelText_10();
		int32_t* L_12 = __this->get_address_of_level_16();
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// levelImage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_levelImage_11();
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)1, /*hidden argument*/NULL);
		// RestartButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_RestartButton_12();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// OverImage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_OverImage_13();
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		// ExitButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_ExitButton_14();
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)0, /*hidden argument*/NULL);
		// HighScore.text = " ";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_HighScore_15();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		// Invoke("HideLevelImage", levelStartDelay);
		float L_20 = __this->get_levelStartDelay_7();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4, L_20, /*hidden argument*/NULL);
		// enemies.Clear();
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_21 = __this->get_enemies_18();
		NullCheck(L_21);
		List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A(L_21, /*hidden argument*/List_1_Clear_m61F957FEB6659515C4F68682524D31F7D9C5DA2A_RuntimeMethod_var);
		// boardScript.SetupScene(level);
		BoardManager_t3985DB311F238FF4878376C70A779A0C07933F91 * L_22 = __this->get_boardScript_5();
		int32_t L_23 = __this->get_level_16();
		NullCheck(L_22);
		BoardManager_SetupScene_mFB52812FBF77FFF6DCFB23B3C2C921FD7303C47C(L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::HideLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HideLevelImage_m6B50848F46798A4C7E12D4401DD88847ECD3D7CD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// levelImage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_levelImage_11();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// doingSetup = false;
		__this->set_doingSetup_20((bool)0);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral729AAAB7476A9A79F6553A6C4B43D3BBDC045178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5AA40B486DFC1BF01ABB3A7E51353420BCEC827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE07F7F6C1F6A9F9D133ADF24795FB4C2A7AC7B9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(level > PlayerPrefs.GetInt("HighScore", 0))
		int32_t L_0 = __this->get_level_16();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		// PlayerPrefs.SetInt("HighScore", level);
		int32_t L_2 = __this->get_level_16();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// HighScore.text = "High Score : Day " + PlayerPrefs.GetInt("HighScore", 0).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_HighScore_15();
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC5AA40B486DFC1BF01ABB3A7E51353420BCEC827, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// levelText.text="After " + level +" days, you chet doi.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_levelText_10();
		int32_t* L_8 = __this->get_address_of_level_16();
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral729AAAB7476A9A79F6553A6C4B43D3BBDC045178, L_9, _stringLiteralE07F7F6C1F6A9F9D133ADF24795FB4C2A7AC7B9D, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// levelImage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_levelImage_11();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// RestartButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_RestartButton_12();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// OverImage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_OverImage_13();
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// ExitButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_ExitButton_14();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if (playersTurn || enemiesMoving || doingSetup)
		bool L_0 = __this->get_playersTurn_9();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_enemiesMoving_19();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_doingSetup_20();
		if (!L_2)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		// return;
		return;
	}

IL_0019:
	{
		// StartCoroutine(MoveEnemies());
		RuntimeObject* L_3;
		L_3 = GameManager_MoveEnemies_m37D946D3F0876B1701A271210C51921850CFA930(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::AddEnemyToList(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_mA112B59DD65068F09ACF0CC996EEBABB1C165025 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemies.Add(script);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_0 = __this->get_enemies_18();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = ___script0;
		NullCheck(L_0);
		List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC(L_0, L_1, /*hidden argument*/List_1_Add_m51152AE1B99DCCA528E426B5AB47C84CA9CE03BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m37D946D3F0876B1701A271210C51921850CFA930 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 * L_0 = (U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 *)il2cpp_codegen_object_new(U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9_il2cpp_TypeInfo_var);
		U3CMoveEnemiesU3Ed__27__ctor_mE51360235234B1293A4168724577F66446018965(L_0, 0, /*hidden argument*/NULL);
		U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public int playerFoodPoints = 15;
		__this->set_playerFoodPoints_6(((int32_t)15));
		// public float levelStartDelay = 2f;                     //Thời gian chờ khi next level
		__this->set_levelStartDelay_7((2.0f));
		// public float turnDelay = .1f;                          //Delay khi nhân vật di chuyển
		__this->set_turnDelay_8((0.100000001f));
		// [HideInInspector] public bool playersTurn = true;
		__this->set_playersTurn_9((bool)1);
		// private bool doingSetup = true;
		__this->set_doingSetup_20((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m0872BB5B2E20B9183F004EB81D5129608114D285 (const RuntimeMethod* method)
{
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
// System.Void Loader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_Awake_mE57C5BB0D9E4488680DA44DE586C1C1710006748 (Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Instantiate(gameManager);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_gameManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader__ctor_m15D78DFE09D5A9C562B7E58B0D4C392427D1E674 (Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m8CFA40B703119CCC5B0EC7C40D7E78783A34EA5F (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boxCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_boxCollider_6(L_0);
		// rb2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb2D_7(L_1);
		// inverseMoveTime = 1F / moveTime;
		float L_2 = __this->get_moveTime_4();
		__this->set_inverseMoveTime_8(((float)((float)(1.0f)/(float)L_2)));
		// }
		return;
	}
}
// System.Boolean MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovingObject_Move_mE513C0E1FDD7D75E65E07EB7E7DEF31FD664088D (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, int32_t ___xDir0, int32_t ___yDir1, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * ___hit2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 start = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector2 end = start + new Vector2(xDir, yDir);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		int32_t L_4 = ___xDir0;
		int32_t L_5 = ___yDir1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_4)), ((float)((float)L_5)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// boxCollider.enabled = false;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_8 = __this->get_boxCollider_6();
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)0, /*hidden argument*/NULL);
		// hit = Physics2D.Linecast(start, end, blokingLayer);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * L_9 = ___hit2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_1;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_12 = __this->get_blokingLayer_5();
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_14;
		L_14 = Physics2D_Linecast_mD982886413BF081441FDFA937E83B5E661C3B622(L_10, L_11, L_13, /*hidden argument*/NULL);
		*(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)L_9 = L_14;
		// boxCollider.enabled = true;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_15 = __this->get_boxCollider_6();
		NullCheck(L_15);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_15, (bool)1, /*hidden argument*/NULL);
		// if (hit.transform == null)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * L_16 = ___hit2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(SmoothMovement(end));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_19, /*hidden argument*/NULL);
		RuntimeObject* L_21;
		L_21 = MovingObject_SmoothMovement_m94963AEBAA322DAA3E29C157E1C213961D9BF8CD(__this, L_20, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_22;
		L_22 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_21, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0074:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m94963AEBAA322DAA3E29C157E1C213961D9BF8CD (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * L_0 = (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 *)il2cpp_codegen_object_new(U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823_il2cpp_TypeInfo_var);
		U3CSmoothMovementU3Ed__7__ctor_mBFA2F4D47B7E7DFF0F4897DE7AA3CE9D51B86026(L_0, 0, /*hidden argument*/NULL);
		U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___end0;
		NullCheck(L_2);
		L_2->set_end_3(L_3);
		return L_2;
	}
}
// System.Void MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m38E8072FE2E1134B90E1687C927B3CE128B221A1 (MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * __this, const RuntimeMethod* method)
{
	{
		// public float moveTime = .1f;
		__this->set_moveTime_4((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_21(L_0);
		// food = GameManager.instance.playerFoodPoints;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_playerFoodPoints_6();
		__this->set_food_22(L_2);
		// foodText.text = "Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_foodText_13();
		int32_t* L_4 = __this->get_address_of_food_22();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE38CC4C1D409C9107F8E8C4C622F91CC499C2511, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// base.Start();
		MovingObject_Start_m8CFA40B703119CCC5B0EC7C40D7E78783A34EA5F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovingObject_AttempMove_TisWall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C_m8F2AD2EBDC28AFB9B764F0D5164A34DE2D6F7A40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (!GameManager.instance.playersTurn) return;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_playersTurn_9();
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (!GameManager.instance.playersTurn) return;
		return;
	}

IL_000d:
	{
		// int horizontal = 0;
		V_0 = 0;
		// int vertical = 0;
		V_1 = 0;
		// horizontal = (int)Input.GetAxisRaw("Horizontal");
		float L_2;
		L_2 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
		// vertical = (int)Input.GetAxisRaw("Vertical");
		float L_3;
		L_3 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		// if (horizontal != 0)
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// vertical = 0;
		V_1 = 0;
	}

IL_002e:
	{
		// if (horizontal != 0 || vertical != 0)
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_003c;
		}
	}

IL_0034:
	{
		// AttempMove<Wall>(horizontal, vertical);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttempMove_TisWall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C_m8F2AD2EBDC28AFB9B764F0D5164A34DE2D6F7A40_RuntimeMethod_var, __this, L_7, L_8);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral838E394589B5693706685699154545855BEAE0B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF117C6985226D7151C8D72C310304BE920887ADC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Exit" && food <= 0)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_3 = __this->get_food_22();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// SoundManager.instance.PlaySingle(gameOverSound);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_4 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_gameOverSound_20();
		NullCheck(L_4);
		SoundManager_PlaySingle_m355DE88CFDD1EB81E9682CF4327DE765E35A01A4(L_4, L_5, /*hidden argument*/NULL);
		// SoundManager.instance.musicSource.Stop();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_6 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_6);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = L_6->get_musicSource_5();
		NullCheck(L_7);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_7, /*hidden argument*/NULL);
		// GameManager.instance.GameOver();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_8);
		GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A(L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0045:
	{
		// else if (other.tag == "Exit")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0070;
		}
	}
	{
		// Invoke("Restart", restarLevelDelay);
		float L_12 = __this->get_restarLevelDelay_12();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral838E394589B5693706685699154545855BEAE0B2, L_12, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0070:
	{
		// else if(other.tag =="Food")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___other0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00f4;
		}
	}
	{
		// food += pointsPerFood;
		int32_t L_16 = __this->get_food_22();
		int32_t L_17 = __this->get_pointsPerFood_10();
		__this->set_food_22(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)));
		// foodText.text ="+"+pointsPerFood+ " Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_foodText_13();
		int32_t* L_19 = __this->get_address_of_pointsPerFood_10();
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_19, /*hidden argument*/NULL);
		int32_t* L_21 = __this->get_address_of_food_22();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_20, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_23);
		// SoundManager.instance.RandomizeSfx(eatSound1, eatSound2);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_24 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_25 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_26 = L_25;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_27 = __this->get_eatSound1_16();
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_27);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_28 = L_26;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_29 = __this->get_eatSound2_17();
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_29);
		NullCheck(L_24);
		SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58(L_24, L_28, /*hidden argument*/NULL);
		// other.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_30 = ___other0;
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_31, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00f4:
	{
		// else if(other.tag == "Soda")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_32 = ___other0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_32, /*hidden argument*/NULL);
		bool L_34;
		L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteralF117C6985226D7151C8D72C310304BE920887ADC, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0177;
		}
	}
	{
		// food += pointsPerSoda;
		int32_t L_35 = __this->get_food_22();
		int32_t L_36 = __this->get_pointsPerSoda_11();
		__this->set_food_22(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)));
		// foodText.text = "+" + pointsPerSoda + " Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = __this->get_foodText_13();
		int32_t* L_38 = __this->get_address_of_pointsPerSoda_11();
		String_t* L_39;
		L_39 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_38, /*hidden argument*/NULL);
		int32_t* L_40 = __this->get_address_of_food_22();
		String_t* L_41;
		L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_40, /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_39, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D, L_41, /*hidden argument*/NULL);
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_42);
		// SoundManager.instance.RandomizeSfx(drinkSound1, drinkSound2);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_43 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_44 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_45 = L_44;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_46 = __this->get_drinkSound1_18();
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_46);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_47 = L_45;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_48 = __this->get_drinkSound2_19();
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_48);
		NullCheck(L_43);
		SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58(L_43, L_47, /*hidden argument*/NULL);
		// other.gameObject.SetActive(false);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_49 = ___other0;
		NullCheck(L_49);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_50, (bool)0, /*hidden argument*/NULL);
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void Player::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Restart_m15741E06AD3DACE54BCAD43EAAF35E81CB40D0AB (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// Application.LoadLevel(Application.loadedLevel);
		int32_t L_0;
		L_0 = Application_get_loadedLevel_m0E346B638F8E10D4FD5D4C883FAA39C34CF41C1E(/*hidden argument*/NULL);
		Application_LoadLevel_mB8D52CB842A98DDBB611D39C80709F5233AF6AAB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::LoseFood(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_LoseFood_m7F7B7C59BDDC47BE041FC76FBDC0F9B86B63C57A (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15AA2B97826EC4EE3E63BF8B0119089EC201E31C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("playerHit");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_21();
		NullCheck(L_0);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral15AA2B97826EC4EE3E63BF8B0119089EC201E31C, /*hidden argument*/NULL);
		// food -= loss;
		int32_t L_1 = __this->get_food_22();
		int32_t L_2 = ___loss0;
		__this->set_food_22(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		// foodText.text = "-" + loss + " Food: " + food;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_foodText_13();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___loss0), /*hidden argument*/NULL);
		int32_t* L_5 = __this->get_address_of_food_22();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_4, _stringLiteral0ADF18071E31ABDFC28ACBB5EB626FB20984EB9D, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// CheckItOver();
		Player_CheckItOver_mEA2371F0B084D5F131833A4A34F2099CF1F08FE4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::CheckItOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckItOver_mEA2371F0B084D5F131833A4A34F2099CF1F08FE4 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (food <= 0)
		int32_t L_0 = __this->get_food_22();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// {   SoundManager.instance.PlaySingle(gameOverSound);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_1 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_gameOverSound_20();
		NullCheck(L_1);
		SoundManager_PlaySingle_m355DE88CFDD1EB81E9682CF4327DE765E35A01A4(L_1, L_2, /*hidden argument*/NULL);
		// SoundManager.instance.musicSource.Stop();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_3 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = L_3->get_musicSource_5();
		NullCheck(L_4);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_4, /*hidden argument*/NULL);
		// GameManager.instance.GameOver();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_5);
		GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public int wallDamage = 1;
		__this->set_wallDamage_9(1);
		// public int pointsPerFood = 2;
		__this->set_pointsPerFood_10(2);
		// public int pointsPerSoda = 3;
		__this->set_pointsPerSoda_11(3);
		// public float restarLevelDelay = 1f;
		__this->set_restarLevelDelay_12((1.0f));
		MovingObject__ctor_m38E8072FE2E1134B90E1687C927B3CE128B221A1(__this, /*hidden argument*/NULL);
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
// System.Void Quit::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit_Exit_m97F7318E67A0708CC8F4187B4BC441BE02F75DA1 (Quit_t390EF75E1E4AA071D5D1A4911600D450776363D6 * __this, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0(/*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Quit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit__ctor_mEB6E7FE6F53362692AD96E4DEE1D3906A592A7C4 (Quit_t390EF75E1E4AA071D5D1A4911600D450776363D6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Restart::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart_Reset_m0F933053D61EB359163CD75605E6045D66BDCFFB (Restart_tE1087607F77C635FD0BA6DA2CCE5AF9343FDDF14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_1, /*hidden argument*/NULL);
		// SoundManager.instance.musicSource.Play();
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_2 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_2);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = L_2->get_musicSource_5();
		NullCheck(L_3);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_3, /*hidden argument*/NULL);
		// GameManager.instance.level = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		L_4->set_level_16(0);
		// GameManager.instance.Awake();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_5);
		GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Restart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart__ctor_mC040D6C84CCAA3DF8BE8CDBF1C030FBAA1331FAE (Restart_tE1087607F77C635FD0BA6DA2CCE5AF9343FDDF14 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundItro::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundItro__ctor_m87CAC0F4AE1FF0C8207B2939064341EACCF74D7E (SoundItro_tC62A5DEE9A8B1EB895D8B09DB504255DC967B4EA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_instance_6(__this);
		goto IL_002d;
	}

IL_0015:
	{
		// else if (instance != this)
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_2 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m355DE88CFDD1EB81E9682CF4327DE765E35A01A4 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	{
		// efxSource.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_efxSource_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = ___clip0;
		NullCheck(L_0);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_0, L_1, /*hidden argument*/NULL);
		// efxSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_efxSource_4();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int randomIndex = Random.Range(0, clips.Length);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = ___clips0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_0 = L_1;
		// float randomPitch = Random.Range(lowPitchRange, highPitchRange);
		float L_2 = __this->get_lowPitchRange_7();
		float L_3 = __this->get_highPitchRange_8();
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// efxSource.pitch = randomPitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = __this->get_efxSource_4();
		float L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_5, L_6, /*hidden argument*/NULL);
		// efxSource.clip = clips[randomIndex];
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_efxSource_4();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_8 = ___clips0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_7, L_11, /*hidden argument*/NULL);
		// efxSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = __this->get_efxSource_4();
		NullCheck(L_12);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_mE4854722D4248D4CCD33E4202389B3F187C51303 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SoundManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Update_mDD188B65FF1E9B1DF1B8345A6290D149E70E657C (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// public float lowPitchRange = .95f;
		__this->set_lowPitchRange_7((0.949999988f));
		// public float highPitchRange = 1.05f;
		__this->set_highPitchRange_8((1.04999995f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__cctor_mCB4F772852263D66AF3536FB81B715BD441B6A2C (const RuntimeMethod* method)
{
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
// System.Void Start::load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Start_load_m4CD0C542E53A69A46F04C08D36B43C7CFC3928C2 (Start_t83C2AD581A7B40F32A1D2F7CD3001F4782DBF1AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Start::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Start__ctor_mEDE333A1BC25ACBF1367AB25456191E96822BF58 (Start_t83C2AD581A7B40F32A1D2F7CD3001F4782DBF1AE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Wall::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_Awake_m444CEB6F971F18CC738FD5996F0404DF036BA299 (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_spriteRenderer_8(L_0);
		// }
		return;
	}
}
// System.Void Wall::DamegeWall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_DamegeWall_m26DC1EC334E1DA2192E3EE0887B6A9E4AA0C4186 (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.instance.RandomizeSfx(chopSound1, chopSound2);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_2 = L_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_chopSound1_6();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_3);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_4 = L_2;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_chopSound2_7();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_5);
		NullCheck(L_0);
		SoundManager_RandomizeSfx_m25C53C31752018BD583EA0DD984D9FD6574C0E58(L_0, L_4, /*hidden argument*/NULL);
		// spriteRenderer.sprite = dmgSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_spriteRenderer_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_dmgSprite_4();
		NullCheck(L_6);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_6, L_7, /*hidden argument*/NULL);
		// hp -= loss;
		int32_t L_8 = __this->get_hp_5();
		int32_t L_9 = ___loss0;
		__this->set_hp_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		// if (hp <= 0)
		int32_t L_10 = __this->get_hp_5();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_m90F1D5997556A6DA8EEE00148EA781E96718A763 (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, const RuntimeMethod* method)
{
	{
		// public int hp = 2;
		__this->set_hp_5(2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m5875DFC4DC21CCF8D66E8D3389296B63F07A1028 (Count_t43FD08C05C3123E7D601E60282485C59D5F2C038 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		// public Count (int min, int max)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// minimum = min;
		int32_t L_0 = ___min0;
		__this->set_minimum_0(L_0);
		// maximum = max;
		int32_t L_1 = ___max1;
		__this->set_maximum_1(L_1);
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
// System.Void GameManager/<MoveEnemies>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__27__ctor_mE51360235234B1293A4168724577F66446018965 (U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<MoveEnemies>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__27_System_IDisposable_Dispose_m58F00466B89207BB0A2E807782B0C2DB068FA180 (U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<MoveEnemies>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveEnemiesU3Ed__27_MoveNext_m9A168801195005FFE0608F2A01FBBF5CDC6D1462 (U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007c;
			}
			case 3:
			{
				goto IL_00cc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// enemiesMoving = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_enemiesMoving_19((bool)1);
		// yield return new WaitForSeconds(turnDelay);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_turnDelay_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(enemies.Count == 0)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = V_1;
		NullCheck(L_7);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_8 = L_7->get_enemies_18();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline(L_8, /*hidden argument*/List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0083;
		}
	}
	{
		// yield return new WaitForSeconds(turnDelay);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_turnDelay_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0083:
	{
		// for(int i =0; i< enemies.Count;i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_00e3;
	}

IL_008c:
	{
		// enemies[i].MoveEnemy();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_13 = V_1;
		NullCheck(L_13);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_14 = L_13->get_enemies_18();
		int32_t L_15 = __this->get_U3CiU3E5__2_3();
		NullCheck(L_14);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_16;
		L_16 = List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var);
		NullCheck(L_16);
		Enemy_MoveEnemy_m97D831D3D5C6924EA6E4477F8C5F0BB4D26468A5(L_16, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(enemies[i].moveTime);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_17 = V_1;
		NullCheck(L_17);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_18 = L_17->get_enemies_18();
		int32_t L_19 = __this->get_U3CiU3E5__2_3();
		NullCheck(L_18);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_20;
		L_20 = List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m3E90AE762FA32F7597154FA3C1E3F8FE491C51AD_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21 = ((MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C *)L_20)->get_moveTime_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_22 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_22, L_21, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00cc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i =0; i< enemies.Count;i++)
		int32_t L_23 = __this->get_U3CiU3E5__2_3();
		V_2 = L_23;
		int32_t L_24 = V_2;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_00e3:
	{
		// for(int i =0; i< enemies.Count;i++)
		int32_t L_25 = __this->get_U3CiU3E5__2_3();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_26 = V_1;
		NullCheck(L_26);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_27 = L_26->get_enemies_18();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline(L_27, /*hidden argument*/List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_008c;
		}
	}
	{
		// playersTurn = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_29 = V_1;
		NullCheck(L_29);
		L_29->set_playersTurn_9((bool)1);
		// enemiesMoving = false;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_30 = V_1;
		NullCheck(L_30);
		L_30->set_enemiesMoving_19((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<MoveEnemies>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF71ED8396D615C66DC7210A93B2C7A59736A75B0 (U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<MoveEnemies>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__27_System_Collections_IEnumerator_Reset_m1F161E77548EE57D8F1056D4EF0EDFFC5DA79071 (U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveEnemiesU3Ed__27_System_Collections_IEnumerator_Reset_m1F161E77548EE57D8F1056D4EF0EDFFC5DA79071_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<MoveEnemies>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__27_System_Collections_IEnumerator_get_Current_mE4A6E6EA18E472D128A7330B210737A756E234F8 (U3CMoveEnemiesU3Ed__27_tBBCF2401B2EA6336FBC1B6B7744EB6041D4D1BB9 * __this, const RuntimeMethod* method)
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
// System.Void MovingObject/<SmoothMovement>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7__ctor_mBFA2F4D47B7E7DFF0F4897DE7AA3CE9D51B86026 (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MovingObject/<SmoothMovement>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7_System_IDisposable_Dispose_m138A200B22DD7717876E734088A7183DA1DC231F (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MovingObject/<SmoothMovement>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSmoothMovementU3Ed__7_MoveNext_mAFD5D0EA31A3355527DC1B1B56ED118D9BF957B8 (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_00b4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float sqrRemainingDistance = (transform.position - end).sqrMagnitude;
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_end_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9;
		L_9 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__2_4(L_9);
		goto IL_00bb;
	}

IL_0047:
	{
		// Vector3 newPosition = Vector3.MoveTowards(rb2D.position, end, inverseMoveTime * Time.deltaTime);
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_10 = V_1;
		NullCheck(L_10);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = L_10->get_rb2D_7();
		NullCheck(L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_end_3();
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_inverseMoveTime_8();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_13, L_14, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		V_3 = L_18;
		// rb2D.MovePosition(newPosition);
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_19 = V_1;
		NullCheck(L_19);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_20 = L_19->get_rb2D_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_20, L_22, /*hidden argument*/NULL);
		// sqrRemainingDistance = (transform.position - end).sqrMagnitude;
		MovingObject_tEAEAD115921CA65416F1470A544BCC1F343FA21C * L_23 = V_1;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_end_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		float L_28;
		L_28 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__2_4(L_28);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00bb:
	{
		// while(sqrRemainingDistance>float.Epsilon)
		float L_29 = __this->get_U3CsqrRemainingDistanceU3E5__2_4();
		if ((((float)L_29) > ((float)(1.40129846E-45f))))
		{
			goto IL_0047;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object MovingObject/<SmoothMovement>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m414628315853E56CAB8F10A52EC55191864D080E (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MovingObject/<SmoothMovement>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0E8B1FC6C9C001B9EB5ABA32422DD3DF5EABDFD7 (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0E8B1FC6C9C001B9EB5ABA32422DD3DF5EABDFD7_RuntimeMethod_var)));
	}
}
// System.Object MovingObject/<SmoothMovement>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_get_Current_m5050A0FCC18D7E395A54A66F05458BC34B81E4BF (U3CSmoothMovementU3Ed__7_t510BBD880F3803D949C1DB85342F4F69051E7823 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
