/*     Assignment2b Babikov Aleksandr st135743@student.spbu.ru     */


#include "myheader.h"
#include <stdexcept>
#include <sstream>
#include <cctype>

Stack::Stack(int size) : capacity(size), topIndex(-1) {
    stackArray = new double[capacity];
}

Stack::~Stack() {
    delete[] stackArray;
}

void Stack::push(double value) {
    if (topIndex >= capacity - 1) {
        throw std::overflow_error("Стек переполнен");
    }
    stackArray[++topIndex] = value;
}

double Stack::pop() {
    if (topIndex < 0) {
        throw std::underflow_error("Стек пустой");
    }
    return stackArray[topIndex--];
}

double Stack::top() const {
    if (topIndex < 0) {
        throw std::underflow_error("Стек пустой");
    }
    return stackArray[topIndex];
}

bool Stack::isEmpty() const {
    return topIndex == -1;
}

double evaluateRPN(const std::string& expression) {
    std::istringstream iss(expression);
    std::string token;
    Stack stack(100);

    while (iss >> token) {
        if (std::isdigit(token[0]) || (token[0] == '-' && token.size() > 1)) {
            stack.push(std::stod(token));
        } else if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (stack.isEmpty()) throw std::runtime_error("Недостаточно операндов");
            double right = stack.pop();
            if (stack.isEmpty()) throw std::runtime_error("Недостаточно операндов");
            double left = stack.pop();

            if (token == "+") stack.push(left + right);
            else if (token == "-") stack.push(left - right);
            else if (token == "*") stack.push(left * right);
            else if (token == "/") {
                if (right == 0) throw std::runtime_error("Деление на ноль");
                stack.push(left / right);
            }
        } else {
            throw std::runtime_error("Недопустимый символ: " + token);
        }
    }

    if (stack.isEmpty()) throw std::runtime_error("Выражение не содержит результатов");
    return stack.pop();
}
