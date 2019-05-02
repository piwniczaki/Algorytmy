#include"biblioteki.h"

int optymalizacja_startu(Pojemnik start[]) {
	for (int i = 0; i < 25; i++) {
		int temporary;
		if (start->get_x() == 0 && start->get_y() == 0) {
			temporary = start->get_z();
			cout << endl;
			podmianka(temporary, start);
			cout << endl;
			return temporary;
		}
		else if (start->get_x() == 0 && start->get_z() == 0) {
			temporary = start->get_y();
			cout << endl;
			podmianka(temporary, start);
			cout << endl;
			return temporary;
		}
		else if (start->get_y() == 0 && start->get_z() == 0) {
			temporary = start->get_x();
			podmianka(temporary, start);
			cout << endl;
			wyswietl(start);
			cout << endl;
			return temporary;
		}
	}
}