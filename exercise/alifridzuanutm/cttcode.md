# Calculator Function in C++

Below is a basic C++ code snippet for a calculator function that can perform addition, subtraction, multiplication, and division operations.

```cpp
#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error: Division by zero!";
            break;
        default:
            cout << "Invalid operator!";
            break;
    }

    return 0;
}
