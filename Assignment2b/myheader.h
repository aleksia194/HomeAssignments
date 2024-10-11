/*     Assignment2b Babikov Aleksandr st135743@student.spbu.ru     */


#ifndef MYHEADER_H
#define MYHEADER_H

#include <string>

class Stack {
private:
    double* stackArray;
    int topIndex;
    int capacity;

public:
    Stack(int size);
    ~Stack();
    void push(double value);
    double pop();
    double top() const;
    bool isEmpty() const;
};

double evaluateRPN(const std::string& expression);


#endif // MYHEADER_H

