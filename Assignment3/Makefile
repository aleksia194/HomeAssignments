asignment3 = Babikov Aleksandr st135743@student.spbu.ru

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iheaders
LDFLAGS = -lgtest -lgtest_main -pthread

SRC = classes/Transformer.cpp classes/Engine.cpp classes/Weapon.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: Assignment3 tests
	./test_runner

Assignment3: $(OBJ)
	$(CXX) $(OBJ) -o Assignment3


tests: tests/test_transformer.o classes/Transformer.o classes/Weapon.o classes/Engine.o
	$(CXX) $^ -o test_runner $(LDFLAGS)


tests/test_transformer.o: tests/test_transformer.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) tests/*.o test_runner Assignment3


