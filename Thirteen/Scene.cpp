#include "Scene.h"

SceneBase::SceneBase()
{
	current_processing = SceneProcessing::Init;
}

SceneId SceneBase::Update()
{
	SceneProcessing sceneProcessing = static_cast<SceneProcessing>(current_processing);

	switch (sceneProcessing)
	{
	case SceneProcessing::Init:
		current_processing = SceneProcessing::Main;
		return Init();
		break;
	case SceneProcessing::Main:
		current_processing = SceneProcessing::End;
		return Main();
		break;
	case SceneProcessing::End:
		current_processing = SceneProcessing::Init;
		return End();
		break;
	}
}
