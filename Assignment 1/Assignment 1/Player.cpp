#include "Player.h"
#include <iostream>
using namespace std;
Player::Player(){
	Main = nullptr;
	Secondary = nullptr;
}

Player::~Player(){
}

void Player::Equip(Weapon *w) {
	if (w->getType() == 0) {
		Main = w;
		cout << "Equipping Primary" << endl;
	}
	else if (w->getType() == 1) {
		Secondary = w;
		cout << "Equipping Secondary" << endl;
	}
}

void Player::FireMain() {
	if (Main != nullptr) {
		cout << Main->getSound().c_str() << endl;
	}
}

void Player::FireSecondary() {
	if (Secondary != nullptr) {
		cout << Secondary->getSound().c_str() << endl;
	}
}