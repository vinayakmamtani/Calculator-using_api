// MyAPI.cpp
#include "MyAPI.h"
#include <stdexcept>

// Simple function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Simple function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Calculator class constructor
Calculator::Calculator() {}

// Function to multiply two numbers
int Calculator::multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers
double Calculator::divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Cannot divide by zero");
    }
    return static_cast<double>(a) / b;
}
