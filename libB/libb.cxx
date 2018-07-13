#include "libb.hxx"
#include "liba.hxx"

#include <iostream>

void b() {
	a();
	std::cout << "b" << std::endl;
}
