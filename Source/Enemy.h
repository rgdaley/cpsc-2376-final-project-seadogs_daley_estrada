#ifndef ENEMY_H
#define ENEMY_H
#include "Object.h"
#include "AnimatedObject.h"
//Comment for push

class GUI;
class Player;
class Enemy :public AnimatedObject
{
public:
	Enemy() = delete;
	Enemy(std::string animationFile, Vector2D columnRow, const std::unique_ptr<GUI>& gui);


	void update(Object::Command command,  std::vector<std::unique_ptr<Object>>& objects) override;
	Object* copyMe() override;

private:
	int timesJumped{ 0 };

};
#endif // !ENEMY_H
