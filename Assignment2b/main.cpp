/*     Assignment2b Babikov Aleksandr st135743@student.spbu.ru     */


#include <iostream>
#include "myheader.h"

int main() {
  std::string expression;
    std::cout << "Enter the expression in reverse Polish notation: ";
    std::getline(std::cin, expression);

    try {
        double result = evaluateRPN(expression);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Eror: " << e.what() << std::endl;
    }

    return 0;
}

