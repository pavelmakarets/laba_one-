#include <iostream>
#include "Vector.h"


void main()
{
	//Vector* mas;
	Vector* vector = new Vector(3);
	std::cout << vector->getstate();
	system("pause");
}