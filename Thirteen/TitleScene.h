#ifndef TITLESCENE_H
#define TITLESCENE_H

#include "Scene.h"

class TitleScene : public SceneBase
{
public:
	TitleScene() {}
	~TitleScene() {}
private:
	virtual SceneId Init();
	virtual SceneId Main();
	virtual SceneId End();
};

#endif
