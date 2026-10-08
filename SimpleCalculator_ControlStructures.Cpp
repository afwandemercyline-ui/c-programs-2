/*Lumumba Mercyline Afwande 
CT101/G/28529/25
A C++ program using switch statement to implement a simple calculator 
*/

#include <iostream>
using namespace std;

int main() {
    double number1, number2, result;
    char operation;

    // Get input
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> number2;

    // Perform calculation
    switch (operation) {

        case '+':
            result = number1 + number2;
            cout << "Result = " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result = " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result = " << result << endl;
            break;

        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                cout << "Result = " << result << endl;
            }
            else {
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;

        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}