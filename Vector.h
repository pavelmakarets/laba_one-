#include <iostream>
#include <string>
using namespace std;

class Vector
{
	int* vector;
	int size;
	string state;
public:
	Vector();
	Vector(int);
	Vector(const Vector&);
	string getstate();
	void add();
	void setelement(int,int);
	int getelement(int);
	void get();
	void print_console();
	void sum();
	void multiplication();
	void show();
	void initialized();
};