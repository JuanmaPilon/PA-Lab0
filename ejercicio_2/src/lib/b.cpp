 ////////////////////////////////////////////////////////////////

#include <iostream>

////////////////////////////////////////////////////////////////

#include "./b.h"

////////////////////////////////////////////////////////////////

B::B ()
{
	this->a = nullptr;
	this->c = nullptr;
}

////////////////////////////////////////////////////////////////

B::B ( B const& other )
{
	this->a = other.a;
	this->c = other.c;
}

////////////////////////////////////////////////////////////////

B::~B () {}

////////////////////////////////////////////////////////////////

void B::Print ()
{
	std::cout << "Soy la clase: B \n";
}

////////////////////////////////////////////////////////////////
