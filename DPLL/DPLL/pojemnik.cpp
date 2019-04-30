#include"pojemnik.h"


Pojemnik::Pojemnik() {
	this->_x = 0;
	this->_y = 0;
	this->_z = 0;
	this->_flag = -1;
}

//Pojemnik::~Pojemnik()
//{
//}

/* SETTERY */
void Pojemnik::set_x(int a) {
	this->_x = a;
}

void Pojemnik::set_y(int a) {
	this->_y = a;
}

void Pojemnik::set_z(int a) {
	this->_z = a;
}

void Pojemnik::set_flag(int a) {
	this->_flag = a;
}

/* GETTERY */

int Pojemnik::get_x() {
	return _x;
}

int Pojemnik::get_y() {
	return _y;
}

int Pojemnik::get_z() {
	return _z;
}

int Pojemnik::get_flag() {
	return _flag;
}