```cpp
#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Simple Calculator" << endl;
    cout << "------------------" << endl;

    // Input first number
    cout << "Enter first number: ";
    cin >> num1;

    // Input operation
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // Input second number
    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on the chosen operation
    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1; // Exit with an error code
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
