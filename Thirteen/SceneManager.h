#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include "Scene.h"
#include "TitleScene.h"
#include "HelpScene.h"
#include "MainGameScene.h"
#include "GameClearScene.h"
#include "GameOverScene.h"

class SceneManager
{
public:
	SceneManager();
	~SceneManager() {}

	bool Update();
private:
	TitleScene Title;
	HelpScene Help;
	MainGameScene MainGame;
	GameClearScene GameClear;
	GameOverScene GameOver;

	SceneId current_scene;
};

#endif
