CXX = g++
CXXFLAGS = -std=c++23 -Wall -Wextra -Werror -pedantic 
system_link : telemetry.o main.o
	$(CXX) $(CXXFLAGS) telemetry.o main.o -o system_link
telemetry.o:telemetry.cpp telemetry.hpp
	$(CXX) $(CXXFLAGS) -c telemetry.cpp -o telemetry.o
main.o:main.cpp telemetry.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o
clean:
	rm -f *.o system_link
