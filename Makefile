INCLUDE_DIRS = -I. -I/home/ibutt/googletest-master/googletest/include
WARNINGS = -Wall -Werror
OBJECTS = bond.o bond.t.o
CXX = g++
CPPFLAGS = $(INCLUDE_DIRS) $(WARNINGS)

bond : $(OBJECTS)
	g++ -o bond $(OBJECTS) /home/ibutt/googletest-master/googletest/make/gtest_main.a -lpthread

bond.o : bond.h

bond.t.o : bond.h

clean :
	rm $(OBJECTS) bond

