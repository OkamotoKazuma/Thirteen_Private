#ifndef HELPSCENE_H
#define HELPSCENE_H

#include "Scene.h"

class HelpScene : public SceneBase
{
public:
	HelpScene() {}
	~HelpScene() {}
private:
	virtual SceneId Init();
	virtual SceneId Main();
	virtual SceneId End();
};

#endif
