#ifndef GAMEOVERSCENE
#define GAMEOVERSCENE

#include "Scene.h"

class GameOverScene : public SceneBase
{
public:
	GameOverScene() {}
	~GameOverScene() {}
private:
	virtual SceneId Init();
	virtual SceneId Main();
	virtual SceneId End();
};

#endif