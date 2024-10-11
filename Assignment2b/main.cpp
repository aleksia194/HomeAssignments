/*     Assignment2b Babikov Aleksandr st135743@student.spbu.ru     */


#include <iostream>
#include "myheader.h"

int main() {
  std::string expression;
    std::cout << "Введите выражение в обратной польской записи: ";
    std::getline(std::cin, expression);

    try {
        double result = evaluateRPN(expression);
        std::cout << "Результат: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}

