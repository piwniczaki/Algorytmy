#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// funckcja sprawdza czy zostal wprowadzony legitny wybór
void poprawnosc_wyboru(int wybor) {
	while (cin.fail() || wybor < 1 || wybor>2)
	{
		cout << "Twój wybór to: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> wybor;
	}
}

//fukcja sprawdza czy zostala wprowadzona poprawna liczba wierzcholków
void poprawnosc_ilosci_wierzcholkow(int ilosc) {
	while (cin.fail() || ilosc < 1 || ilosc > 100)
	{
		cout << "Podaj ilosc wierzcholków w grafie: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> ilosc;
	}
}

//fukcja sprawdza czy zostala wprowadzona poprawna liczba krawedzi
void poprawnosc_ilosci_krawedzi(int ilosc) {
	while (cin.fail() || ilosc < 1 || ilosc > 100)
	{
		cout << "Podaj ilosc krawedzi w grafie: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> ilosc;
	}
}

//funkcja sprawdza czy PIERWSZY wierzcholek miesci sie w zakresie <1, ilosc>
void poprawnosc_wyboru_1_wierzcholka(int x, const int &ilosc) {
	while (cin.fail() || x < 1 || x > ilosc)
	{
		cout << "Podaj pierwszy wierzcholek: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
	}
}
//funkcja sprawdza czy DRUGI wierzcholek miesci sie w zakresie <1, ilosc>
void poprawnosc_wyboru_2_wierzcholka(int x, const int &ilosc) {
	while (cin.fail() || x < 1 || x > ilosc)
	{
		cout << "Podaj drugi wierzcholek: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
	}
}

int main() {
	setlocale(LC_ALL, "polish"); //pozwala na uzywanie polskich znaków

								 // wybór grafu
	cout << "Czy twoj graf bedzie skierowany czy nieskierowany?" << endl;
	cout << "1.SKIEROWANY" << endl;
	cout << "2.NIESKIEROWANY" << endl;
	cout << "Twój wybór to: ";
	int wybor; // wybór grafu (-> / <->)
	cin >> wybor;
	poprawnosc_wyboru(wybor); // sprawdzanie poprawnosci wyboru

							  // ustalanie ilosci wierzcholków grafu
	cout << "Podaj ilosc wierzcholków w grafie: ";
	int ilosc; // ilosc wierzcholków w grafie
	cin >> ilosc;
	poprawnosc_ilosci_wierzcholkow(ilosc);

	cout << "Podaj ilosc krawedzi w grafie: ";
	int ilosc_k; // ilosc krawedzi w grafie
	cin >> ilosc_k;
	poprawnosc_ilosci_krawedzi(ilosc_k);

	// deklaracja 2 wymiarowej tablicy dynamicznej
	int **tab = new int*[ilosc];
	for (int i = 0; i < ilosc; i++) {
		tab[i] = new int[ilosc];
	}

	// wypelnienie tablicy zerami
	for (int i = 0; i < ilosc; i++) {
		for (int j = 0; j < ilosc; j++) {
			tab[i][j] = 0;
		}
	}
	cout << endl;

	// testowe wyswietlanie macierzy poczatkowej
	cout << "Macierz poczatkowa dla grafu: " << endl;
	for (int i = 0; i < ilosc; i++) {
		for (int j = 0; j < ilosc; j++) {
			cout.width(3);
			cout << tab[i][j];
		}
		cout << endl;
	}

	cout << endl;
	int x; // wspólrzedna x w macierzy
	int y; // wspólrzedna y w macierzy
	cout << "Podaj " << ilosc_k << " par wierzcholków które chcesz polaczyc z zakresu <1," << ilosc << ">" << endl;
	for (int i = 0; i < ilosc_k; i++) {
		cout << "Podaj pierwszy wierzcholek: "; 
		cin >> x; 
		poprawnosc_wyboru_1_wierzcholka(x, ilosc);

		cout << "Podaj drugi weerzcholek: ";
		cin >> y;
		poprawnosc_wyboru_2_wierzcholka(y, ilosc);

		if (wybor == 1) { // skierowany
			if (tab[x - 1][y - 1] == 1)
				cout << "To polaczenie juz istnieje." << endl;
			else
				tab[x - 1][y - 1] = 1;
		}
		else if (wybor == 2) { // nieskierowany
			if (tab[x - 1][y - 1] == 1 || tab[y - 1][x - 1] == 1)
				cout << "To polaczenie juz istnieje." << endl;
			else {
				tab[x - 1][y - 1] = 1;
				tab[y - 1][x - 1] = 1;
			}
		}
	}

	cout << endl;
	// wyswietlanie macierzy
	for (int i = 0; i < ilosc; i++){
		for (int j = 0; j < ilosc; j++){
			cout << " " << tab[i][j];
		}
		cout << endl;
	}
	cout << endl;

	// Slowna reprezentacja macierzy
	for (int i = 0; i < ilosc; i++){
		cout << "Wierzcholek nr. " << i + 1 << " laczy sie z wierzcholkami: ";
			for (int j = 0; j < 10; j++){
				if (tab[i][j] == 1)
					cout << j + 1 << " ";
			}
			cout << endl;
		}

	// uwolnienie 2 wymiarowej tablicy z pamieci
	for (int i = 0; i < ilosc; ++i) {
		delete[] tab[i];
	}
	delete[] tab;

	system("PAUSE");
	return 0;
}