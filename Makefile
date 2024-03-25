compile:
	clang++ -g -fsanitize=address -Weverything \
		-Wno-c++98-compat \
		-Wno-unsafe-buffer-usage \
		src/main.cpp src/arguments.cpp src/backtester.cpp -o main
run:
	./main
