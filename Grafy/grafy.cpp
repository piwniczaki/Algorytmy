#include <iostream>
#include <windows.h>
#include <vector>
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;

// zmiana kolorków
void changecol(int num)
{
	HANDLE cz;
	cz = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(cz, num);
	//0 - czarny
	//1 - niebieski
	//2 - zielony
	//3 - blêkitny
	//4 - czerwony
	//5 - purpurowy
	//6 - zólty
	//7 - bialy
	//8 - szary
	//9 - jasnoniebieski
	//10 - jasnozielony
	//11 - jasnoblekitny
	//12 - jasnoczerwony
	//13 - jasnopurpurowy
	//14 - jasnozólty
	//15 - jaskrawobialy
}

// funckcja sprawdza czy zostal wprowadzony legitny wybór
int poprawnosc_wyboru(int wybor) {
	while (cin.fail() || wybor < 1 || wybor>2)
	{
		cout << "Twój wybór to: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> wybor;
	}
	return wybor;
}

// fukcja sprawdza czy zostala wprowadzona poprawna liczba wierzcholków (tryb = 1)
// fukcja sprawdza czy zostala wprowadzona poprawna liczba krawedzi (tryb = 2)
int poprawnosc_ilosci(int ilosc, int tryb) {
	while (cin.fail() || ilosc < 1 || ilosc > 100)
	{
		if (tryb == 1)
			cout << "Podaj ilosc wierzcholków w grafie: ";
		else if (tryb == 2)
			cout << "Podaj ilosc krawedzi w grafie: ";

		cin.clear();
		cin.ignore(256, '\n');
		cin >> ilosc;
	}
	return ilosc;
}

// funkcja wyswietla jaki rodzaj grafu jest wyswietlany
void jaki_graf(int wybor) {
	if (wybor == 1) { // skierowany
		cout << "GRAF SKIEROWANY" << endl;
	}
	else if (wybor == 2) { // nieskierowany
		cout << "GRAF NIESKIEROWANY" << endl;
	}
}

// funkcja sprawdza czy wierzcholek miesci sie w zakresie <1, ilosc>
int poprawnosc_wyboru_wierzcholka(int x, int tryb, const int &ilosc) {
	while (cin.fail() || x < 1 || x > ilosc)
	{
		if (tryb == 1)
			cout << "Podaj pierwszy wierzcholek: ";
		else if (tryb = 2)
			cout << "Podaj drugi wierzcholek: ";

		cin.clear();
		cin.ignore(256, '\n');
		cin >> x;
	}
	return x;
}

int main() {
	setlocale(LC_ALL, "polish"); //pozwala na uzywanie polskich znaków
	while (1)
	{
		cout << "Czy twoj graf bedzie reprezentowany za pomocą klasy vector,listy czy może macierzy?" << endl;
		cout << "1.VECTOR" << endl;
		cout << "2.LISTA" << endl;
		cout << "3.MACIERZ" << endl;
		cout << "Twój wybór to: ";
		int wybor; // wybór grafu (-> / <->)
		cin >> wybor;
		switch(wybor)
		{
		case 1:
		{
			system("cls");
			cout << "Czy twoj graf bedzie skierowany czy nieskierowany?" << endl;
			cout << "1.SKIEROWANY" << endl;
			cout << "2.NIESKIEROWANY" << endl;
			cout << "Twój wybór to: ";
			int wybor; // wybór grafu (-> / <->)
			cin >> wybor;
			wybor = poprawnosc_wyboru(wybor); // sprawdzanie poprawnosci wyboru;
			// ustalanie ilosci wierzcholków grafu
			cout << "Podaj ilosc wierzcholków w grafie: ";
			int ilosc; // ilosc wierzcholków w grafie
			cin >> ilosc;
			ilosc = poprawnosc_ilosci(ilosc, 1);

			cout << "Podaj ilosc krawedzi w grafie: ";
			int ilosc_k; // ilosc krawedzi w grafie
			cin >> ilosc_k;
			ilosc_k = poprawnosc_ilosci(ilosc_k, 2);

			vector<int> *calosc = new vector<int>[ilosc + 1];

			cout << endl;
			int x; // wspólrzedna x w macierzy
			int y; // wspólrzedna y w macierzy
			cout << "Podaj " << ilosc_k << " par wierzcholków które chcesz polaczyc z zakresu <1," << ilosc << ">" << endl;
			for (int i = 0; i < ilosc_k; i++) {
				cout << endl << "PARA NR: " << i + 1 << endl;
				cout << "Podaj pierwszy wierzcholek: ";
				cin >> x;
				x = poprawnosc_wyboru_wierzcholka(x, 1, ilosc);

				cout << "Podaj drugi wierzcholek: ";
				cin >> y;
				y = poprawnosc_wyboru_wierzcholka(y, 2, ilosc);
				if (wybor == 1)
				{
					calosc[y - 1].push_back(x);
				}
				else if (wybor == 2)
				{
					calosc[x - 1].push_back(y);
					calosc[y - 1].push_back(x);
				}
			}
			jaki_graf(wybor);
			for (int i = 0; i < ilosc; i++)     // wypisujemy graf
			{
				if (i < 9)
				{
					cout << "Wierzchołek nr. " << i + 1 << "  łaczy sie z wierzcholkami: ";
				}
				else
				{
					cout << "Wierzchołek nr. " << i + 1 << " łaczy sie z wierzcholkami: ";
				}
				for (vector<int>::iterator it = calosc[i].begin(); it != calosc[i].end(); ++it)
				{
					cout << *it << " ";
				}
				cout << endl;
			}
			delete[]calosc;
			cout << endl;
			system("PAUSE");
			return 0;
		}
		case 2:
		{
			system("cls");
			cout << "Czy twoj graf bedzie skierowany czy nieskierowany?" << endl;
			cout << "1.SKIEROWANY" << endl;
			cout << "2.NIESKIEROWANY" << endl;
			cout << "Twój wybór to: ";
			int wybor; // wybór grafu (-> / <->)
			cin >> wybor;
			wybor = poprawnosc_wyboru(wybor); // sprawdzanie poprawnosci wyboru;
											  // ustalanie ilosci wierzcholków grafu
			cout << "Podaj ilosc wierzcholków w grafie: ";
			int ilosc; // ilosc wierzcholków w grafie
			cin >> ilosc;
			ilosc = poprawnosc_ilosci(ilosc, 1);

			cout << "Podaj ilosc krawedzi w grafie: ";
			int ilosc_k; // ilosc krawedzi w grafie
			cin >> ilosc_k;
			ilosc_k = poprawnosc_ilosci(ilosc_k, 2);

			list<int> *calosc = new list<int>[ilosc + 1];

			cout << endl;
			int x; // wspólrzedna x w macierzy
			int y; // wspólrzedna y w macierzy
			cout << "Podaj " << ilosc_k << " par wierzcholków które chcesz polaczyc z zakresu <1," << ilosc << ">" << endl;
			for (int i = 0; i < ilosc_k; i++) {
				cout << endl << "PARA NR: " << i + 1 << endl;
				cout << "Podaj pierwszy wierzcholek: ";
				cin >> x;
				x = poprawnosc_wyboru_wierzcholka(x, 1, ilosc);

				cout << "Podaj drugi wierzcholek: ";
				cin >> y;
				y = poprawnosc_wyboru_wierzcholka(y, 2, ilosc);
				if (wybor == 1)
				{
					calosc[y - 1].push_back(x);
				}
				else if (wybor == 2)
				{
					calosc[x - 1].push_back(y);
					calosc[y - 1].push_back(x);
				}
			}
			jaki_graf(wybor);
			for (int i = 0; i < ilosc; i++)     // wypisujemy graf
			{
				if (i < 9)
				{
					cout << "Wierzchołek nr. " << i + 1 << "  łaczy sie z wierzcholkami: ";
				}
				else
				{
					cout << "Wierzchołek nr. " << i + 1 << " łaczy sie z wierzcholkami: ";
				}
				for (list<int>::iterator it = calosc[i].begin(); it != calosc[i].end(); ++it)
				{
					cout << *it << " ";
				}
				cout << endl;
			}
			delete[]calosc;
			cout << endl;
			system("PAUSE");
			return 0;
		}
		case 3:
		{
			system("cls");
			// wybór grafu
			cout << "Czy twoj graf bedzie skierowany czy nieskierowany?" << endl;
			cout << "1.SKIEROWANY" << endl;
			cout << "2.NIESKIEROWANY" << endl;
			cout << "Twój wybór to: ";
			int wybor; // wybór grafu (-> / <->)
			cin >> wybor;
			wybor = poprawnosc_wyboru(wybor); // sprawdzanie poprawnosci wyboru;

											  // ustalanie ilosci wierzcholków grafu
			cout << "Podaj ilosc wierzcholków w grafie: ";
			int ilosc; // ilosc wierzcholków w grafie
			cin >> ilosc;
			ilosc = poprawnosc_ilosci(ilosc, 1);

			cout << "Podaj ilosc krawedzi w grafie: ";
			int ilosc_k; // ilosc krawedzi w grafie
			cin >> ilosc_k;
			ilosc_k = poprawnosc_ilosci(ilosc_k, 2);

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
					cout.width(2);
					cout << tab[i][j];
				}
				cout << endl;
			}

			cout << endl;
			int x; // wspólrzedna x w macierzy
			int y; // wspólrzedna y w macierzy
			cout << "Podaj " << ilosc_k << " par wierzcholków które chcesz polaczyc z zakresu <1," << ilosc << ">" << endl;
			for (int i = 0; i < ilosc_k; i++) {
				cout << endl << "PARA NR: " << i + 1 << endl;
				cout << "Podaj pierwszy wierzcholek: ";
				cin >> x;
				x = poprawnosc_wyboru_wierzcholka(x, 1, ilosc);

				cout << "Podaj drugi wierzcholek: ";
				cin >> y;
				y = poprawnosc_wyboru_wierzcholka(y, 2, ilosc);

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
			// wyświetlanie jaki to rodzaj grafu
			jaki_graf(wybor);
			// wyswietlanie macierzy
			for (int i = 0; i < ilosc; i++) {
				for (int j = 0; j < ilosc; j++) {

					if (tab[i][j] == 1)
					{
						changecol(12);
						cout << " " << tab[i][j];
						changecol(7);
					}
					else
					{
						cout << " " << tab[i][j];
					}
				}
				cout << endl;
			}
			cout << endl;

			// slowna reprezentacja macierzy
			for (int i = 0; i < ilosc; i++) {
				if (i < 9)
				{
					cout << "Wierzchołek nr. " << i + 1 << "  łaczy sie z wierzcholkami: ";
				}
				else
				{
					cout << "Wierzchołek nr. " << i + 1 << " łaczy sie z wierzcholkami: ";
				}
				for (int j = 0; j < 10; j++) {
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
		default:
		{
			system("cls");
			break;
		}
		}
	}
}