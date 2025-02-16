#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    int choice;

    cout << "Select operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ";
    cin >> choice;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1: cout << "Result: " << calc.add(num1, num2) << endl; break;
        case 2: cout << "Result: " << calc.subtract(num1, num2) << endl; break;
        case 3: cout << "Result: " << calc.multiply(num1, num2) << endl; break;
        case 4: cout << "Result: " << calc.divide(num1, num2) << endl; break;
        default: cout << "Invalid choice" << endl;
    }
    
    return 0;
}
