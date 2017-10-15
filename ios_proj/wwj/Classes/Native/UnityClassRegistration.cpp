template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; 
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; 
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } template <> void RegisterClass<Unity::FixedJoint>();
namespace Unity { class HingeJoint; } template <> void RegisterClass<Unity::HingeJoint>();
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; template <> void RegisterClass<AssetBundle>();
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 80 non stripped classes
	//0. AssetBundle
	RegisterClass<AssetBundle>();
	//1. NamedObject
	RegisterClass<NamedObject>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Behaviour
	RegisterClass<Behaviour>();
	//4. Unity::Component
	RegisterClass<Unity::Component>();
	//5. Camera
	RegisterClass<Camera>();
	//6. GameObject
	RegisterClass<GameObject>();
	//7. QualitySettings
	RegisterClass<QualitySettings>();
	//8. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//9. GameManager
	RegisterClass<GameManager>();
	//10. MeshFilter
	RegisterClass<MeshFilter>();
	//11. Renderer
	RegisterClass<Renderer>();
	//12. GUILayer
	RegisterClass<GUILayer>();
	//13. Mesh
	RegisterClass<Mesh>();
	//14. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//15. Shader
	RegisterClass<Shader>();
	//16. Material
	RegisterClass<Material>();
	//17. Sprite
	RegisterClass<Sprite>();
	//18. TextAsset
	RegisterClass<TextAsset>();
	//19. Texture
	RegisterClass<Texture>();
	//20. Texture2D
	RegisterClass<Texture2D>();
	//21. RenderTexture
	RegisterClass<RenderTexture>();
	//22. Transform
	RegisterClass<Transform>();
	//23. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//24. ParticleSystem
	RegisterClass<ParticleSystem>();
	//25. Rigidbody
	RegisterClass<Rigidbody>();
	//26. Unity::Joint
	RegisterClass<Unity::Joint>();
	//27. Collider
	RegisterClass<Collider>();
	//28. BoxCollider
	RegisterClass<BoxCollider>();
	//29. SphereCollider
	RegisterClass<SphereCollider>();
	//30. AudioClip
	RegisterClass<AudioClip>();
	//31. SampleClip
	RegisterClass<SampleClip>();
	//32. AudioSource
	RegisterClass<AudioSource>();
	//33. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//34. Animator
	RegisterClass<Animator>();
	//35. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//36. UI::Canvas
	RegisterClass<UI::Canvas>();
	//37. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//38. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//39. Unity::FixedJoint
	RegisterClass<Unity::FixedJoint>();
	//40. MeshRenderer
	RegisterClass<MeshRenderer>();
	//41. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//42. MeshCollider
	RegisterClass<MeshCollider>();
	//43. PreloadData
	RegisterClass<PreloadData>();
	//44. Cubemap
	RegisterClass<Cubemap>();
	//45. Texture3D
	RegisterClass<Texture3D>();
	//46. Texture2DArray
	RegisterClass<Texture2DArray>();
	//47. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//48. TimeManager
	RegisterClass<TimeManager>();
	//49. AudioManager
	RegisterClass<AudioManager>();
	//50. InputManager
	RegisterClass<InputManager>();
	//51. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//52. PhysicsManager
	RegisterClass<PhysicsManager>();
	//53. TagManager
	RegisterClass<TagManager>();
	//54. ScriptMapper
	RegisterClass<ScriptMapper>();
	//55. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//56. MonoScript
	RegisterClass<MonoScript>();
	//57. MonoManager
	RegisterClass<MonoManager>();
	//58. PlayerSettings
	RegisterClass<PlayerSettings>();
	//59. BuildSettings
	RegisterClass<BuildSettings>();
	//60. ResourceManager
	RegisterClass<ResourceManager>();
	//61. NetworkManager
	RegisterClass<NetworkManager>();
	//62. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//63. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//64. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//65. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//66. LevelGameManager
	RegisterClass<LevelGameManager>();
	//67. Unity::HingeJoint
	RegisterClass<Unity::HingeJoint>();
	//68. AnimationClip
	RegisterClass<AnimationClip>();
	//69. Motion
	RegisterClass<Motion>();
	//70. AudioListener
	RegisterClass<AudioListener>();
	//71. Avatar
	RegisterClass<Avatar>();
	//72. AnimatorController
	RegisterClass<AnimatorController>();
	//73. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//74. RenderSettings
	RegisterClass<RenderSettings>();
	//75. Light
	RegisterClass<Light>();
	//76. FlareLayer
	RegisterClass<FlareLayer>();
	//77. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//78. LightmapSettings
	RegisterClass<LightmapSettings>();
	//79. LightProbes
	RegisterClass<LightProbes>();

}
