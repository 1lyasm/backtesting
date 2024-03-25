#include <iostream>
#include <vector>

#include "arguments.h"
#include "backtester.h"

int main(int argc, char **argv) {
	auto arguments = Arguments(argc, argv);
	auto backtester = Backtester();
}
