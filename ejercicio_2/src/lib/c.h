 ////////////////////////////////////////////////////////////////

#ifndef C_H
#define C_H

////////////////////////////////////////////////////////////////

#include "./header.h"

////////////////////////////////////////////////////////////////

class C
{
	public:
		C  ();
		C  ( C const& );
		~C ();

		void Print ();

	private:
		A* a;
		B* b;
};

////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////
