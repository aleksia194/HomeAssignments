/*     Assignment2b Babikov Aleksandr st135743@student.spbu.ru     */


#include "myheader.h"
#include <stdexcept>
#include <sstream>
#include <cctype>

Stack::Stack(int size) : capacity(size), topIndex(-1) {
    stackArray = new double[capacity];
}

Stack::~Stack() {

}

void Stack::push(double value) {
    
}

double Stack::pop() {
   
}

double Stack::top() const {
    
}

bool Stack::isEmpty() const {

}

double evaluateRPN(const std::string& expression) {
    
}

