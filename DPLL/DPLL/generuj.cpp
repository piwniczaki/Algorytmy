#include"biblioteki.h"
#include"generuj.h"

Pojemnik generuj(Pojemnik temp) {
	Pojemnik wiersz;
	wiersz = temp;

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

	if (wiersz.get_x() == wiersz.get_y()) {
		generuj(wiersz);
	}
	else if (wiersz.get_y() == wiersz.get_z()) {
		generuj(wiersz);
	}
	else if (wiersz.get_y() == wiersz.get_z()) {
		generuj(wiersz);
	}

	return wiersz;
}