#include"biblioteki.h"

int losowanie_2() {
	int x = rand() % 2;
	return x;
}


void wyœwietl(Pojemnik tab[]) {
	for (int i = 0; i < 25; i++) {
		Pojemnik data = tab[i];
		cout.width(2);
		cout << data.get_x() << "," << data.get_y() << "," << data.get_z() << endl;
	}
}