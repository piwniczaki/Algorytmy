#include"biblioteki.h"

Pojemnik generuj(Pojemnik wiersz) {
	
	if (losowanie_2() == 1) {
		wiersz.set_x((rand() % 10) * (-1));
	}
	else {
		wiersz.set_x((rand() % 10));
	}

	if (losowanie_2() == 1) {
		wiersz.set_y((rand() % 10) * (-1));
			if (wiersz.get_x() == wiersz.get_y()) {
			wiersz.set_y(wiersz.get_y() * -1);
			}
	}
	else {
		wiersz.set_y((rand() % 10));
			if (wiersz.get_x() == wiersz.get_y()) {
				wiersz.set_y(wiersz.get_y() * -1);
			}
	}

	wiersz.set_z(generuj_z(wiersz));

	return wiersz;
}