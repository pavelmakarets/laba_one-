#include "Vector.h"


Vector::Vector(int size)
{
	this->vector = new int[size];
	this->size = size;
	this->state = "state : create";
}

Vector::Vector():Vector(1){}

Vector::Vector(const Vector& vector)
{
	this->vector = vector.vector;
	this->size = vector.size;
	this->state = vector.state;
}

string Vector::getstate()
{
	return this->state;
}

void Vector::add()
{

}