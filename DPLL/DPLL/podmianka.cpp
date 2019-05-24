#include"biblioteki.h"

/* podmienia lokalnie i nie zmienia wartoœæi w dpll'u*/
//void podmianka(int index, Pojemnik start[]) {
//
//	cout << endl << index << endl;
//
//	for (int i = 0; i < 25; i++) {
//		if (start[i].get_x() == index && start[i].get_y() == index) {
//			if (start[i].get_z() < 0) {
//				start[i].set_z(-10);
//				start[i].set_flag_z(21);
//			}
//			if (start[i].get_z() > 0) {
//				start[i].set_z(10);
//				start[i].set_flag_z(69);
//			}
//		}
//		else if (start[i].get_x() == index && start[i].get_z() == index) {
//			if (start[i].get_y() < 0) {
//				start[i].set_y(-10);
//				start[i].set_flag_y(21);
//			}
//			if (start[i].get_y() > 0) {
//				start[i].set_y(10);
//				start[i].set_flag_y(69);
//			}
//		}
//		else if (start[i].get_y() == index && start[i].get_z() == index) {
//			if (start[i].get_x() < 0) {
//				start[i].set_x(-10);
//				start[i].set_flag_x(21);
//			}
//			if (start[i].get_x() > 0) {
//				start[i].set_x(10);
//				start[i].set_flag_x(69);
//			}
//		}
//	}
//}


/* próba podmianki globalnej */
void podmianka(int index, Pojemnik *start) {

	for (int i = 0; i < 25; i++) {
		if (start[i].get_x() == index && start[i].get_y() == index) {
			if (start[i].get_z() < 0) {
				start[i].set_z(-10);
				start[i].set_flag_z(21);
			}
			if (start[i].get_z() > 0) {
				start[i].set_z(10);
				start[i].set_flag_z(69);
			}
		}
		else if (start[i].get_x() == index && start[i].get_z() == index) {
			if (start[i].get_y() < 0) {
				start[i].set_y(-10);
				start[i].set_flag_y(21);
			}
			if (start[i].get_y() > 0) {
				start[i].set_y(10);
				start[i].set_flag_y(69);
			}
		}
		else if (start[i].get_y() == index && start[i].get_z() == index) {
			if (start[i].get_x() < 0) {
				start[i].set_x(-10);
				start[i].set_flag_x(21);
			}
			if (start[i].get_x() > 0) {
				start[i].set_x(10);
				start[i].set_flag_x(69);
			}
		}
	}
}