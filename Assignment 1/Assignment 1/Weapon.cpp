#include "Weapon.h"

Weapon::Weapon(int type, string sound):WeaponType(type), weaponSound(sound){
}

Weapon::~Weapon(){
}

int Weapon::getType() {
	return WeaponType;
}
string Weapon::getSound() {
	return weaponSound;
}