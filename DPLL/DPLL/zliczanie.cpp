#include"biblioteki.h"

Para zliczaj(Pojemnik tab[]) {

	int values[9] = { 0,0,0,0,0,0,0,0,0 };
	int keys[9] = { 1,2,3,4,5,6,7,8,9 };

	/* naglowki tablicy */
	cout << "Indexy liczb" << endl;
	for (int i = 0; i < 9; i++) {
		cout.width(2);
		cout << keys[i] << " ";
	}
	cout << endl;

	/* sprawdza czy wyzerowane */
	/*for (int i = 0; i < 9; i++) {
		cout.width(2);
		cout << values[i] << " ";
	}
	cout << endl;*/

	for (int i = 0; i < 25; i++) {
		Pojemnik temp = tab[i];

		/* x */
		if (temp.get_x() == -9 || temp.get_x() == 9) {
			values[8] = values[8] + 1;
		}
		else if (temp.get_x() == -8 || temp.get_x() == 8) {
			values[7] = values[7] + 1;
		}
		else if (temp.get_x() == -7 || temp.get_x() == 7) {
			values[6] = values[6] + 1;
		}
		else if (temp.get_x() == -6 || temp.get_x() == 6) {
			values[5] = values[5] + 1;
		}
		else if (temp.get_x() == -5 || temp.get_x() == 5) {
			values[4] = values[4] + 1;
		}
		else if (temp.get_x() == -4 || temp.get_x() == 4) {
			values[3] = values[3] + 1;
		}
		else if (temp.get_x() == -3 || temp.get_x() == 3) {
			values[2] = values[2] + 1;
		}
		else if (temp.get_x() == -2 || temp.get_x() == 2) {
			values[1] = values[1] + 1;
		}
		else if (temp.get_x() == -1 || temp.get_x() == 1) {
			values[0] = values[0] + 1;
		}

		/* y */
		if (temp.get_y() == -9 || temp.get_y() == 9) {
			values[8] = values[8] + 1;
		}
		else if (temp.get_y() == -8 || temp.get_y() == 8) {
			values[7] = values[7] + 1;
		}
		else if (temp.get_y() == -7 || temp.get_y() == 7) {
			values[6] = values[6] + 1;
		}
		else if (temp.get_y() == -6 || temp.get_y() == 6) {
			values[5] = values[5] + 1;
		}
		else if (temp.get_y() == -5 || temp.get_y() == 5) {
			values[4] = values[4] + 1;
		}
		else if (temp.get_y() == -4 || temp.get_y() == 4) {
			values[3] = values[3] + 1;
		}
		else if (temp.get_y() == -3 || temp.get_y() == 3) {
			values[2] = values[2] + 1;
		}
		else if (temp.get_y() == -2 || temp.get_y() == 2) {
			values[1] = values[1] + 1;
		}
		else if (temp.get_y() == -1 || temp.get_y() == 1) {
			values[0] = values[0] + 1;
		}

		/* z */
		if (temp.get_z() == -9 || temp.get_z() == 9) {
			values[8] = values[8] + 1;
		}
		else if (temp.get_z() == -8 || temp.get_z() == 8) {
			values[7] = values[7] + 1;
		}
		else if (temp.get_z() == -7 || temp.get_z() == 7) {
			values[6] = values[6] + 1;
		}
		else if (temp.get_z() == -6 || temp.get_z() == 6) {
			values[5] = values[5] + 1;
		}
		else if (temp.get_z() == -5 || temp.get_z() == 5) {
			values[4] = values[4] + 1;
		}
		else if (temp.get_z() == -4 || temp.get_z() == 4) {
			values[3] = values[3] + 1;
		}
		else if (temp.get_z() == -3 || temp.get_z() == 3) {
			values[2] = values[2] + 1;
		}
		else if (temp.get_z() == -2 || temp.get_z() == 2) {
			values[1] = values[1] + 1;
		}
		else if (temp.get_z() == -1 || temp.get_z() == 1) {
			values[0] = values[0] + 1;
		}

	}

	if (isempty(values) == 1) {
		system("PAUSE");
		exit(0);
	}

	/* wyswieltanie po zliczeniu */
	cout << "Ile razy dany index wystapil." << endl;
	for (int i = 0; i < 9; i++) {
		cout.width(2);
		cout << values[i] << " ";
	}
	cout << endl << endl;

	Para mapa[9];

	/* wpisywanie do tablicy kluczy i ilosci wystapien */
	for (int i = 0; i < 9; i++) {
		mapa[i].set_key(keys[i]);
		mapa[i].set_value(values[i]);
	}
	/* w razie testowania odkomentowaæ to co jest poniezej to ladnie wypisze na ekran */
	//for (int i = 0; i < 9; i++) {
	//	cout.width(2);
	//	cout << mapa[i].get_key() << " ";
	//	cout.width(2);
	//	cout << mapa[i].get_value() << endl;
	//}


	/* znajduje najwieksza ilosc wystapien indexu*/
	Para x;
	for (int i = 0; i < 9; i++) {
		if (mapa[i].get_value() > x.get_value()) {
			x.set_value(mapa[i].get_value());
			x.set_key(mapa[i].get_key());
		}
	}

	return x;
}