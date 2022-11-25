#pragma once
#include <string>
#include "field.cpp"

using namespace std;

class Relation {
private:
	string _name;
	Field* _fields;

public:
	Relation(string name, Field* fields) {
		_name = name;
		_fields = fields;
	}
};
