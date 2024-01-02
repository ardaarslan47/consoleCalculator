#include "calculator.h"
#include <cmath>
#include <iostream>

Calculator::Calculator() : errorFlag(false) {}

double Calculator::Calculate(double x, char oper, double y) {
    switch (oper) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y != 0) {
                return x / y;
            } else {
                errorFlag = true;
                errorMessage = "Error: Division by zero.";
                return 0.0;
            }
        default:
            errorFlag = true;
            errorMessage = "Error: Invalid operation.";
            return 0.0;
    }
}

bool Calculator::hasError() const {
    return errorFlag;
}

std::string Calculator::getErrorMessage() const {
    return errorMessage;
}
