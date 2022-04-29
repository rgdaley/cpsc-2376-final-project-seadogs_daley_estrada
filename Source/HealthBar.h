#ifndef HEALTHBAR_H
#define HEALTHBAR_H
#include "Object.h"
#include "AnimatedObject.h"

class GUI;
class Player;
class HealthBar :public AnimatedObject
{
public:
	HealthBar() = delete;
	HealthBar(std::string animationFile, Vector2D columnRow, const std::unique_ptr<GUI>& gui);


	void update(Object::Command command, std::vector<std::unique_ptr<Object>>& objects) override;
	Object* copyMe() override;

private:

};
#endif // !HEALTHBAR_H