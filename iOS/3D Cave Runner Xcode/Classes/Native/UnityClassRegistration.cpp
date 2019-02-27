template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedType(int, const char*, const char*);

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

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; 
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
namespace UI { class Canvas; } 
namespace UI { class CanvasGroup; } 
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; template <> void RegisterClass<Halo>();
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
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } 
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; template <> void RegisterClass<ParticleAnimator>();
class ParticleEmitter; template <> void RegisterClass<ParticleEmitter>();
class EllipsoidParticleEmitter; template <> void RegisterClass<EllipsoidParticleEmitter>();
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; template <> void RegisterClass<ParticleRenderer>();
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; 
class TilemapRenderer; 
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
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
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
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 73 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. Renderer
	RegisterClass<Renderer>();
	//6. GUIElement
	RegisterClass<GUIElement>();
	//7. GUILayer
	RegisterClass<GUILayer>();
	//8. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//9. Shader
	RegisterClass<Shader>();
	//10. NamedObject
	RegisterClass<NamedObject>();
	//11. Material
	RegisterClass<Material>();
	//12. Texture
	RegisterClass<Texture>();
	//13. Texture2D
	RegisterClass<Texture2D>();
	//14. RenderTexture
	RegisterClass<RenderTexture>();
	//15. Transform
	RegisterClass<Transform>();
	//16. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//17. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//18. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//19. Animation
	RegisterClass<Animation>();
	//20. Rigidbody
	RegisterClass<Rigidbody>();
	//21. AudioClip
	RegisterClass<AudioClip>();
	//22. SampleClip
	RegisterClass<SampleClip>();
	//23. AudioListener
	RegisterClass<AudioListener>();
	//24. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//25. AudioSource
	RegisterClass<AudioSource>();
	//26. ParticleEmitter
	RegisterClass<ParticleEmitter>();
	//27. Collider
	RegisterClass<Collider>();
	//28. PreloadData
	RegisterClass<PreloadData>();
	//29. Cubemap
	RegisterClass<Cubemap>();
	//30. Texture3D
	RegisterClass<Texture3D>();
	//31. Texture2DArray
	RegisterClass<Texture2DArray>();
	//32. Mesh
	RegisterClass<Mesh>();
	//33. MeshFilter
	RegisterClass<MeshFilter>();
	//34. MeshRenderer
	RegisterClass<MeshRenderer>();
	//35. Sprite
	RegisterClass<Sprite>();
	//36. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//37. BuildSettings
	RegisterClass<BuildSettings>();
	//38. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//39. GameManager
	RegisterClass<GameManager>();
	//40. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//41. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//42. InputManager
	RegisterClass<InputManager>();
	//43. PlayerSettings
	RegisterClass<PlayerSettings>();
	//44. ResourceManager
	RegisterClass<ResourceManager>();
	//45. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//46. ScriptMapper
	RegisterClass<ScriptMapper>();
	//47. TagManager
	RegisterClass<TagManager>();
	//48. TimeManager
	RegisterClass<TimeManager>();
	//49. QualitySettings
	RegisterClass<QualitySettings>();
	//50. MonoManager
	RegisterClass<MonoManager>();
	//51. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//52. NetworkManager
	RegisterClass<NetworkManager>();
	//53. MonoScript
	RegisterClass<MonoScript>();
	//54. TextAsset
	RegisterClass<TextAsset>();
	//55. PhysicsManager
	RegisterClass<PhysicsManager>();
	//56. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//57. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//58. AudioManager
	RegisterClass<AudioManager>();
	//59. FlareLayer
	RegisterClass<FlareLayer>();
	//60. RenderSettings
	RegisterClass<RenderSettings>();
	//61. LevelGameManager
	RegisterClass<LevelGameManager>();
	//62. BoxCollider
	RegisterClass<BoxCollider>();
	//63. LightmapSettings
	RegisterClass<LightmapSettings>();
	//64. EllipsoidParticleEmitter
	RegisterClass<EllipsoidParticleEmitter>();
	//65. ParticleAnimator
	RegisterClass<ParticleAnimator>();
	//66. ParticleRenderer
	RegisterClass<ParticleRenderer>();
	//67. AnimationClip
	RegisterClass<AnimationClip>();
	//68. Motion
	RegisterClass<Motion>();
	//69. Light
	RegisterClass<Light>();
	//70. Halo
	RegisterClass<Halo>();
	//71. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//72. CapsuleCollider
	RegisterClass<CapsuleCollider>();

}
