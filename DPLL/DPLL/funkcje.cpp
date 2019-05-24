#include"biblioteki.h"

/* Losowanie z przedia³u <0,1> do determinowania czy bedziemy zamieniac na ujemna*/
int losowanie_2() {
	int x = rand() % 2;
	return x;
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