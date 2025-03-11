asignment3 = Babikov Aleksandr st135743@student.spbu.ru

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iheaders

SRC = classes/Transformer.cpp classes/Engine.cpp classes/Weapon.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = Assignment3

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

