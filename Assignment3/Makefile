asignment3 = Babikov Aleksandr st135743@student.spbu.ru

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude 

SRC = classes/Transformer.cpp classes/Engine.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = Assignment3

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

