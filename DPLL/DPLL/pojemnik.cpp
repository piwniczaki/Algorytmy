#include"pojemnik.h"


Pojemnik::Pojemnik() {
	this->_x = 0;
	this->_y = 0;
	this->_z = 0;
	this->_flag = -10;

	this->_flag_x = 37;
	this->_flag_y = 37;
	this->_flag_z = 37;
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

void Pojemnik::set_flag_x(int a) {
	this->_flag_x = a;
}

void Pojemnik::set_flag_y(int a) {
	this->_flag_y = a;
}

void Pojemnik::set_flag_z(int a) {
	this->_flag_z = a;
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

int Pojemnik::get_flag_x() {
	return _flag_x;
}

int Pojemnik::get_flag_y() {
	return _flag_y;
}

int Pojemnik::get_flag_z() {
	return _flag_x;
}