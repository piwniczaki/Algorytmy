#include"biblioteki.h"

Pojemnik generuj(Pojemnik wiersz) {
	while (wiersz.get_x() == wiersz.get_y() || wiersz.get_y() == wiersz.get_z() || wiersz.get_x() == wiersz.get_z()) {
		if (losowanie_2() == 1) {
			wiersz.set_x((rand() % 10) * (-1));
		}
		else {
			wiersz.set_x((rand() % 10));
		}

		if (losowanie_2() == 1) {
			wiersz.set_y((rand() % 10) * (-1));
		}
		else {
			wiersz.set_y((rand() % 10));
		}

		if (losowanie_2() == 1) {
			wiersz.set_z((rand() % 10) * (-1));
		}
		else {
			wiersz.set_z((rand() % 10));
		}
	}
	return wiersz;
}