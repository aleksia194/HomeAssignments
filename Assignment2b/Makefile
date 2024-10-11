Assignment2a_ = Babikov Aleksandr st135743@student.spbu.ru


CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = Assignment2a

SRCS = main.cpp function.cpp
HEADERS = myheader.h

all: $(TARGET)

$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

