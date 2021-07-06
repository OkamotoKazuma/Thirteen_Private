#ifndef MAINGAMESCENE_H
#define MAINGAMESCENE_H

#include "Scene.h"

class MainGameScene : public SceneBase
{
public:
	MainGameScene() {}
	~MainGameScene() {}
private:
	virtual SceneId Init();
	virtual SceneId Main();
	virtual SceneId End();
};

#endif
