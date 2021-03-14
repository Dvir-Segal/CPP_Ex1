#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a -Werror

HEADERS=snowman.hpp
OBJECTS=snowman.o

run: demo
	./$^

demo: Demo.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o demo

main: main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o main

test: TestCounter.o Test.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test

tidy:
	clang-tidy snowman.cpp -checks=bugprone-*,clang-analyzer-*,cppcoreguidelines-*,hicpp-*,performance-*,portability-*,readability-* --warnings-as-errors=-* --

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

Test2.cpp:
	curl https://raw.githubusercontent.com/cpp-exercises/snowman-a/master/TestExample.cpp > Test2.cpp

clean:
	rm -f *.o demo main test
	rm -f Test2.cpp
