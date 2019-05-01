#include"biblioteki.h"

/* Losowanie z przedia³u <0,1> do determinowania czy bedziemy zamieniac na ujemna*/
int losowanie_2() {
	int x = rand() % 2;
	return x;
}

/* Wyswietlanie tablicy obiektow */
void wyœwietl(Pojemnik tab[]) {
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