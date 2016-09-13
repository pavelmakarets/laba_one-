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
	void set();
	void get();
	void print_console();
	void sum();
	void multiplication();
};