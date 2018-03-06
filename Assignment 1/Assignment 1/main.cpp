#include "Player.h"

int main() {
	Weapon *w1 = new Weapon(0, "Kapow");
	Weapon *w2 = new Weapon(1, "Bang");
	Weapon *w3 = new Weapon(1, "Click");

	Player p;
	p.Equip(w1);
	p.FireMain();

	p.Equip(w2);
	p.FireSecondary();

	p.Equip(w3);
	p.FireSecondary();

	cin.get();
	return 0;
}