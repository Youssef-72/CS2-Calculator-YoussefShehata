#include "calculator.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

double Calculator::add(double a, double b) 
{
    return a + b;
}

double Calculator::subtract(double a, double b) 
{
    return a - b;
}

double Calculator::multiply(double a, double b) 
{
    return a * b;
}

double Calculator::divide(double a, double b) 
{
    if (b == 0) 
    {
        cout << "You can't divide by 0" << endl;
    }
    return a / b;
}

int Calculator::factorial(int n) 
{
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int Calculator::GCD(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Calculator::LCM(int a, int b) 
{
    if (a == 0 || b == 0) {
        return 0;
    }
    return abs(a * b) / GCD(a, b);
}

int Calculator::random(int min, int max) 
{
    return min + rand() % (max - min + 1);
}