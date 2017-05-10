#pragma once
#ifndef _PROPERTY_MANAGER_H_
#define _PROPERTY_MANAGER_H_
#include <iostream>
#include "cocos2d.h"
USING_NS_CC;
class propertyManager :public Ref
{
public:
	propertyManager();
	~propertyManager();
	CREATE_FUNC(propertyManager);
	virtual bool init();
public:
	CC_SYNTHESIZE(int, ID, ID);
	CC_SYNTHESIZE(int, HP, HP);
	CC_SYNTHESIZE(int, SPEED, SPEED);

	CC_SYNTHESIZE(std::string, ArmatureName, ArmatureName);//��Դ·��
	CC_SYNTHESIZE(std::string, DataName, DataName);//��������
	CC_SYNTHESIZE(std::string, PlayerName, PlayerName);//��������

	CC_SYNTHESIZE(Rect, GetHitRect, GetHitRect);
	CC_SYNTHESIZE(Point, GetHitPoint, GetHitPoint);
};

#endif 
