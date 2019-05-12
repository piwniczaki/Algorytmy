#pragma once
class Pojemnik {
private:
	int _x; // pierwsza z 3 wylosowanych liczb
	int _y; // druga z 3 wylosowanych liczb
	int _z; // trzecia z 3 wylosowanych liczb
	int _flag; // -10 = FALSE, 10 = TRUE, 420 = wykorzystane

	int _flag_x; // 69 = FALSE, 21 = TRUE, 37 = NULL;
	int _flag_y; // 69 = FALSE, 21 = TRUE, 37 = NULL;
	int _flag_z; // 69 = FALSE, 21 = TRUE, 37 = NULL;

public:
	Pojemnik(); //konstruktor
	//	~Pojemnik(); // destruktor

public:
	//settery
	void set_x(int);
	void set_y(int);
	void set_z(int);
	void set_flag(int);
	void set_flag_x(int);
	void set_flag_y(int);
	void set_flag_z(int);
	// gettery 
	int get_x();
	int get_y();
	int get_z();
	int get_flag();
	int get_flag_x();
	int get_flag_y();
	int get_flag_z();
};