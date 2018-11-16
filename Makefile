compile:
	g++ -Wall -Werror -o myniceprogram main.cpp new/Helper.cpp new/Identitee.cpp
run: compile
	./myniceprogram
valgrind: compile
	valgrind --leak-check=full -v ./myniceprogram
