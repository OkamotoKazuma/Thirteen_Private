#include "SceneManager.h"

SceneManager::SceneManager()
{
	current_scene = SceneId::TitleScene;
}

bool SceneManager::Update()
{
	SceneId sceneId = static_cast<SceneId>(current_scene);

	switch (sceneId)
	{
	case SceneId::TitleScene:
		current_scene = Title.Update();
		break;
	case SceneId::HelpScene:
		current_scene = Help.Update();
		break;
	case SceneId::MainGameScene:
		current_scene = MainGame.Update();
		break;
	case SceneId::GameClearScene:
		current_scene = GameClear.Update();
		break;
	case SceneId::GameOverScene:
		current_scene = GameOver.Update();
		break;
	default:
		return false;
	}

	return true;
}
