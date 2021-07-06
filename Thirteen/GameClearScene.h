#ifndef GAMECLEARSCENE_H
#define GAMECLEARSCENE_H

#include "Scene.h"

class GameClearScene : public SceneBase
{
public:
	GameClearScene() {}
	~GameClearScene() {}
private:
	virtual SceneId Init();
	virtual SceneId Main();
	virtual SceneId End();
};

#endif
