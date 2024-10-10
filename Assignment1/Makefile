TASK_2 = Babikov Aleksandr st135743@student.spbu.ru

CXX = g++
CXXFLAGS = -Wall
TARGET = hello

all: $(TARGET)

$(TARGET): main.o hello.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o hello.o

main.o: main.cpp head.h
	$(CXX) $(CXXFLAGS) -c main.cpp

hello.o: hello.cpp head.h
	$(CXX) $(CXXFLAGS) -c hello.cpp

clean:
	rm -f *.o $(TARGET)

