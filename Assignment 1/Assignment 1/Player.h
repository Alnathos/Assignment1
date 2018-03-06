#include "Weapon.h"
class Player{
private:
	Weapon *Main;
	Weapon *Secondary;

public:
	Player();
	~Player();


	void Equip(Weapon *w);
	void FireMain();
	void FireSecondary();
};

