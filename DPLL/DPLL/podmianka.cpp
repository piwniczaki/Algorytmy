#include"biblioteki.h"

void podmianka(int index, Pojemnik start[]) {
	for (int i = 0; i < 25; i++) {
		if (start->get_x() == 0 && start->get_y() == 0) {
			start.set_z(10);
		}
		else if (start->get_x() == 0 && start->get_z() == 0) {
			start.set_y(10);
		}
		else if (start->get_y() == 0 && start->get_z() == 0) {
			start.set_x(10);
		}
	}
}