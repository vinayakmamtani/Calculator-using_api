// Main.cpp
#include <iostream>
#include "MyAPI.h"

int main() {
    int num1, num2;
    char operation;

    // Ask the user for two numbers and the operation
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform the requested operation
    if (operation == '+') {
        std::cout << "Result: " << add(num1, num2) << std::endl;
    } else if (operation == '-') {
        std::cout << "Result: " << subtract(num1, num2) << std::endl;
    } else if (operation == '*') {
        Calculator calc;
        std::cout << "Result: " << calc.multiply(num1, num2) << std::endl;
    } else if (operation == '/') {
        try {
            Calculator calc;
            std::cout << "Result: " << calc.divide(num1, num2) << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
        }
    } else {
        std::cout << "Invalid operation!" << std::endl;
    }

    return 0;
}
