 ////////////////////////////////////////////////////////////////

#include <iostream>

////////////////////////////////////////////////////////////////

#include "./c.h"

////////////////////////////////////////////////////////////////

C::C ()
{
	this->a = nullptr;
	this->b = nullptr;
}

////////////////////////////////////////////////////////////////

C::C ( C const& other )
{
	this->a = other.a;
	this->b = other.b;
}

////////////////////////////////////////////////////////////////

C::~C () {}

////////////////////////////////////////////////////////////////

void C::Print ()
{
	std::cout << "Soy la clase: C \n";
}

////////////////////////////////////////////////////////////////
