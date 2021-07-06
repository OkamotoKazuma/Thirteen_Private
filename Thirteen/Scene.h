#ifndef SCENE_H
#define SCENE_H

enum class SceneId
{
	TitleScene,
	HelpScene,
	MainGameScene,
	GameClearScene,
	GameOverScene,
};

enum class SceneProcessing
{
	Init,
	Main,
	End,
};

class SceneBase
{
public:
	SceneBase();
	virtual ~SceneBase() {}

	SceneId Update();
private:
	virtual SceneId Init() = 0;
	virtual SceneId Main() = 0;
	virtual SceneId End() = 0;

	SceneProcessing current_processing;
};

#endif SCENE_H
