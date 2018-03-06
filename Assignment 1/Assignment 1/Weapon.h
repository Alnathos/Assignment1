#include <iostream>
using namespace std;
class Weapon{
public:
	Weapon(int type, string sound);
	~Weapon();

	int getType();
	string getSound();

private:
	int WeaponType;
	string weaponSound;
};

