#include"para.h"

Para::Para() {
	this->_key = 0;
	this->_value = 0;
}

void Para::set_key(int x) {
	this->_key = x;
}

void Para::set_value(int x) {
	this->_value = x;
}

int Para::get_key() {
	return _key;
}

int Para::get_value() {
	return _value;
}