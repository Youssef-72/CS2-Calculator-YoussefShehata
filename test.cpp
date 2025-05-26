#include "calculator.h"
#include <iostream>
using namespace std;

int main() {
    Calculator calc;
    int choice;
    double a, b;
    int n, min, max;
    
    cout << "Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Factorial" << endl;
    cout << "6. GCD (Greatest Common Divisor)" << endl;
    cout << "7. LCM (Least Common Multiple)" << endl;
    cout << "8. Random Number Generator" << endl;
    cout << "9. Exit" << endl;
    cout << "-------------------------------------" << endl;
    
    do {
        cout << "Enter your choice (1-9): ";
        cin >> choice;
        
        if (choice == 1) 
        { 
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << a << " + " << b << " = " << calc.add(a, b) << endl;
        }
        else if (choice == 2) 
        { 
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << a << " - " << b << " = " << calc.subtract(a, b) << endl;
        }
        else if (choice == 3) 
        { 
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << a << " * " << b << " = " << calc.multiply(a, b) << endl;
        }
        else if (choice == 4) 
        { 
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << a << " / " << b << " = " << calc.divide(a, b) << endl;
        }
        else if (choice == 5) 
        { 
            cout << "Enter an integer: ";
            cin >> n;
            cout << n << "! = " << calc.factorial(n) << endl;
        }
        else if (choice == 6) 
        { 
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "GCD of " << a << " and " << b << " = " << calc.GCD(a, b) << endl;
        }
        else if (choice == 7) 
        {
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "LCM of " << a << " and " << b << " = " << calc.LCM(a, b) << endl;
        }
        else if (choice == 8) 
        { 
            cout << "Enter minimum and maximum values: ";
            cin >> min >> max;
            cout << "Random number between " << min << " and " << max << ": " << calc.random(min, max) << endl;
        }
        else if (choice == 9) 
        { 
            cout << "Exiting calculator." << endl;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
        
    } while (choice != 9);
    
    return 0;
}