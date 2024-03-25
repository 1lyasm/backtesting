#include <iostream>

#include "arguments.h"

void Arguments::print_arguments(int n_argument, char **arguments) {
	std::cout << __FUNCTION__ << ": arguments:\n\t";
	for (int i = 0; i < n_argument; ++i) {
		std::cout << arguments[i] << "\n\t";
	}
	std::cout << "\n";
}

Arguments::Arguments(int n_argument, char **arguments) {
	this->print_arguments(n_argument, arguments);
}

