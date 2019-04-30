#pragma once
class Pojemnik {
private:
	int _x; // pierwsza z 3 wylosowanych liczb
	int _y; // druga z 3 wylosowanych liczb
	int _z; // trzecia z 3 wylosowanych liczb
	int _flag; // flaga

public:
	Pojemnik(); //konstruktor
	//	~Pojemnik(); // destruktor

public:
	//settery
	void set_x(int);
	void set_y(int);
	void set_z(int);
	void set_flag(int);
	// gettery 
	int get_x();
	int get_y();
	int get_z();
	int get_flag();
};