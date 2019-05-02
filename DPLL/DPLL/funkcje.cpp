#include"biblioteki.h"

/* Losowanie z przedia³u <0,1> do determinowania czy bedziemy zamieniac na ujemna*/
int losowanie_2() {
	int x = rand() % 2;
	return x;
}

/* generuje z rozne od x i y */
int generuj_z(Pojemnik wiersz) {
	Pojemnik tmp = wiersz;
	if (losowanie_2() == 1) {
		wiersz.set_z((rand() % 10) *(-1));
		if (wiersz.get_z() == wiersz.get_x()) {
			generuj_z(wiersz);
		}
		if (wiersz.get_z() == wiersz.get_y()) {
			generuj_z(wiersz);
		}
		return wiersz.get_z();
	}
	else {
		wiersz.set_z((rand() % 10));
		if (wiersz.get_z() == wiersz.get_x()) {
			generuj_z(wiersz);
		}
		if (wiersz.get_z() == wiersz.get_y()) {
			generuj_z(wiersz);
		}
		return wiersz.get_z();
	}
}

/* Wyswietlanie tablicy obiektow */
void wyswietl(Pojemnik tab[]) {
	for (int i = 0; i < 25; i++) {
		Pojemnik data = tab[i];
		cout.width(3);
		cout << data.get_x() << ",";
		cout.width(3);
		cout << data.get_y() << ",";
		cout.width(3);
		cout << data.get_z() << endl;
	}
}

/* sprawdza czy tablica jest pusta */
int isempty(int tab[]) {
	int tmp = 0;
	for (int i = 0; i < 9; i++) {
		tmp = tmp + tab[i];
	}

	if (tmp == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

/* podmienia na */
void podmianka(int index, Pojemnik start[]) {
	for (int i = 0; i < 25; i++) {
		if (start->get_x() == index && start->get_y() == index) {
			if (start[i].get_z() < 0) start[i].set_z(-10);
			if (start[i].get_z() > 0) start[i].set_z(10);
		}
		else if (start->get_x() == index && start->get_z() == index) {
			if (start[i].get_y() < 0) start[i].set_y(-10);
			if (start[i].get_y() > 0) start[i].set_y(10);
		}
		else if (start->get_y() == index && start->get_z() == index) {
			if (start[i].get_x() < 0) start[i].set_x(-10);
			if (start[i].get_x() > 0) start[i].set_x(10);
		}
	}
}