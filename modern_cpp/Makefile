CXX = g++
CXXFLAGS = -std=c++23 -O3 -Wall -Wextra -Werror -pedantic -Iinclude

build/app:build/sub.o build/init.o
	$(CXX) build/sub.o build/init.o -o build/app

build/sub.o : src/SubSystem.cpp include/SubSystem.hpp
	$(CXX) $(CXXFLAGS) -c src/SubSystem.cpp -o build/sub.o

build/init.o: src/init.cpp include/SubSystem.hpp
	$(CXX) $(CXXFLAGS) -c src/init.cpp -o build/init.o

clean:
	rm -rf build/*
