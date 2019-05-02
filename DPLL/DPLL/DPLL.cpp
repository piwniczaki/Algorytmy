#include"biblioteki.h"

void DPLL() {
	Pojemnik start[25];
	Pojemnik tab[25];
	Pojemnik temp;
	
	/* generowanie liczb z przedzialu <-9,9> bez powtorzen */
	for (int i = 0; i < 25; i++) {
		tab[i] = generuj(temp);
		start[i] = tab[i];
	}
	
	/* wyciaganie indexu z najwieksza liczba rekordow */
	Para max = zliczaj(tab);
	cout << "Najczesciej wystepuje index: " << max.get_key()
		 << ", wystepuje on " << max.get_value() << " razy" << endl;

	cout << "______________________________" << endl;
	cout << "Twoj set liczb do rozpatrzenia" << endl;
	wyswietl(tab);

	int index_optymalizacyjny; // w przypadku jak s¹ 2 zera w rzêdzie to podmienia te 1 cyfre na True(10)
	index_optymalizacyjny = optymalizacja_startu(tab);

}