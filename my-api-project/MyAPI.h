// MyAPI.h
#ifndef MYAPI_H
#define MYAPI_H

// A simple function that adds two integers
int add(int a, int b);

// A simple function that subtracts two integers
int subtract(int a, int b);

// A class representing a simple calculator API
class Calculator {
public:
    // Constructor
    Calculator();

    // A function to multiply two numbers
    int multiply(int a, int b);

    // A function to divide two numbers
    double divide(int a, int b);
};

#endif // MYAPI_H
