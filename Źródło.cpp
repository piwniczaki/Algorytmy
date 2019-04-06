#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
	int wybor;
	setlocale(LC_ALL, "polish");
	int tab[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			tab[i][j] = 0;
		}
	}
	{
		
		cout << "Czy twoj graf bêdzie skierowany czy nieskierowany?" << endl;
		cout << "1.TAK" << endl;
		cout << "2.NIE" << endl;
		cout << "Twój wybór to: ";
		cin >> wybor;
		while (cin.fail() || wybor < 1 || wybor>2)
		{
			cout << "Twój wybór to: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> wybor;
		}
	}
	cout << endl;
	cout << "Podaj 10 par punktów które chcesz po³¹czyæ z zakresu <1,10>"<<endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Podaj pierwszy punkt (wiersz): ";
		int x;
		cin >> x;
		while (cin.fail() || x<=0|| x>10)
		{
			cout << "Podaj pierwszy punkt (wiersz): ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> x;
		}
		cout << "Podaj drugi punkt (kolumna): ";
		int y;
		cin >> y;
		while (cin.fail() || y<=0||y>10)
		{
			cout << "Podaj drugi punkt (kolumna): ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> y;
		}
		{
			if (wybor == 1)
			{
				if (tab[x - 1][y - 1] == 1 || tab[y - 1][x - 1] == 1)
				{
					cout << "To po³¹czenie ju¿ istnieje" << endl;
					system("PAUSE");
				}
				else
				{
					tab[x - 1][y - 1] = 1;
				}
			}
			else if (wybor == 2)
			{
				if (tab[x - 1][y - 1] == 1)
				{
					cout << "To po³¹czenie ju¿ istnieje" << endl;
					system("PAUSE");
				}
				else
				{
					tab[x - 1][y - 1] = 1;
				}
			}
		}
		
	}
	system("cls");
	if (wybor == 1)
	{
		cout << "Graf skierowany" << endl;
	}
	else if (wybor == 2)
	{
		cout << "Graf nieskierowany" << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << " "<<tab[i][j];
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Punkt nr. " << i + 1 << " ³¹czy siê z punktami: ";
		{
			for (int j = 0; j < 10; j++)
			{
				if (tab[i][j] == 1)
				{
					cout << j+1 << " ";
				}
			}
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}