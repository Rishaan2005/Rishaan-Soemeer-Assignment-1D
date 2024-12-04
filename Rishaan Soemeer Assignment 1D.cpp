#include <iostream>
using namespace std;

int main() {
    double num1, num2;  // Declare variables for the two numbers
    char operation;      // Declare a variable for the operation
    
    // Ask the user for input
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    
    double result;  // Variable to store the result
    
    // Perform the calculation based on the operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }
    
    return 0;
}  