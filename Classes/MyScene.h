#include "cocos2d.h"
int i = 0;//for OJ
class MyWorld :public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(MyWorld);
};

