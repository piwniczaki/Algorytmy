#include"biblioteki.h"

void zliczaj(Pojemnik tab[]){
	int values[9] = { 0,0,0,0,0,0,0,0,0 };
	int keys[9] = { 1,2,3,4,5,6,7,8,9 };

	/* nag³owki tablicy */
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

	/* wyœwieltanie po zliczeniu */
	cout << "Ile razy dany index wystapil." << endl;
	for (int i = 0; i < 9; i++) {
		cout.width(2);
		cout << values[i] << " ";
	}
	cout << endl;

	/* mapowanko */
	map<int, int> mapa_liczb;
	
	for (int i = 0; i < 9; i++) {
		mapa_liczb.insert(std::make_pair(keys[i], values[i]));
	}
	/* wyœwietlanko mapowanka */
	cout << "KEY ; VALUE" << endl;
	map<int, int>::iterator it;
	for (it= mapa_liczb.begin(); it != mapa_liczb.end(); it++){
		cout << it->first << " ; " << it->second << endl;
	}
}