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
    
}
