CXX=g++
CXXFLAGS=-std=c++11 -g -Wall
SRC1=main.cpp
HDR= matrix.hpp matrix_lt.hpp

default: main 
main_q1: $(SRC1)
	$(CXX) $(CXXFLAGS) $< -o $@
clean:
	rm -f *.o *~ *~ main
	rm -rf *.dSYM

