#include <iostream>

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { return (b != 0) ? (a / b) : 0; }
};

int main() {
    Calculator calculator;
    double num1, num2;
    char operation;

    // Input two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Input operation
    std::cout << "Select operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform selected operation
    switch (operation) {
        case '+':
            std::cout << "Result: " << calculator.add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << calculator.subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << calculator.multiply(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << calculator.divide(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
    }

    return 0;
}
