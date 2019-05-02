#pragma once
class Para {
private: 
	int _key;
	int _value;
public:
	Para();
public:
	void set_key(int);
	void set_value(int);

	int get_key();
	int get_value();
};