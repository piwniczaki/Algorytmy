#include"biblioteki.h"

void DPLL(int flaga) {
	Pojemnik start[25];
	Pojemnik tab[25];
	Pojemnik temp;

	if (flaga == 0) {
		/* generowanie liczb z przedzialu <-9,9> bez powtorzen */
		for (int i = 0; i < 25; i++) {
			tab[i] = generuj(temp);
			start[i] = tab[i];
		}
		flaga = 1;

		cout << "______________________________" << endl;
		cout << "Twoj set liczb do rozpatrzenia" << endl;
		wyswietl(start); cout << endl;
	}
	
	/* wyciaganie indexu z najwieksza liczba rekordow */
	Para max = zliczaj(tab);
	cout << "Najczesciej wystepuje index: " << max.get_key()
		 << ", wystepuje on " << max.get_value() << " razy" << endl;
	
	Pojemnik* ptr = &tab[0];
	//podmianka(max.get_key(), tab);
	podmianka(max.get_key(), ptr);

	cout << "______________________________" << endl;
	cout << "Twoj set liczb do rozpatrzenia" << endl;
	wyswietl(tab); cout << endl;
}