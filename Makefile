CXX      = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -pedantic

TARGET = program
OBJS   = main.o MathFunc.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp MathFunc.h
	$(CXX) $(CXXFLAGS) -c main.cpp

MathFunc.o: MathFunc.cpp MathFunc.h
	$(CXX) $(CXXFLAGS) -c MathFunc.cpp

clean:
	rm -f $(OBJS) $(TARGET)
