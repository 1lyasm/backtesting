#ifndef ARGUMENTS_H
#define ARGUMENTS_H

#include <map>

class Arguments {
private:
	std::map<std::string, std::string> switch_to_value;

	void print_arguments(int n_argument, char **arguments);

public:
	Arguments(int n_argument, char **arguments);
};

#endif
