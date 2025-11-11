# Makefile for PA10 with tests

CXX = g++
CXXFLAGS = -g -I. -std=c++17

default: test main

test: tests.o PA10.o
	$(CXX) $(CXXFLAGS) tests.o PA10.o -o test_PA10

main: main.o PA10.o
	$(CXX) $(CXXFLAGS) main.o PA10.o -o PA10

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run_tests: test
	./test_PA10

clean:
	-rm -f PA10 test_PA10 *.o
