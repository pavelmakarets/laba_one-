#include "Vector.h"

//complited
Vector::Vector(int size)
{
	this->size = size;
	this->vector = new int[size];
	this->initialized();
	this->state = "state : create";
}

//complited
Vector::Vector():Vector(1){}

Vector::Vector(const Vector& vector)
{
	this->vector = vector.vector;
	this->size = vector.size;
	this->state = vector.state;
}

//complited
string Vector::getstate()
{
	return this->state;
}

void Vector::setelement(int number,int position)
{
	/*try
	{
		this->vector[position] = number;
		this->state = "Good!No Exceptions";
	}
	catch(int e)
	{
		this->state = "Error : " + e;
	}*/
	this->vector[position] = number;
}

int Vector::getelement(int position)
{
	return this->vector[position];
}

void Vector::add()
{
	delete this->vector;
	this->size++;
	this->vector = new int[this->size];
	this->initialized();
}

void Vector::show()
{
	for (int i = 0; i < size; i++) std::cout << vector[i] << " ";
	std::cout << std::endl;
}

//complited 
void Vector::initialized() 
{
	char a;
	setlocale(LC_ALL,"rus");
	std::cout << "Хотите ввести значения? y : n ;" << std::endl;
	cin >> a;
	if (a == 'y')
	{
		for (int i = 0; i < this->size; i++)
		{
			std::cin>>vector[i];
		}
	}
	else if (a == 'n')
	{
		for (int i = 0; i < this->size; i++)
		{
			vector[i] = 0;
		}
	}
	else
	{
		std::cout << "Try again" << std::endl;
		this->initialized();
	}
}