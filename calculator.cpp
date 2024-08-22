// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    char operatorChoice;
    double num1, num2, result;

    // Display the menu
    cout << "Select operation:\n";
    cout << " +. Add\n";
    cout << " -. Subtract\n";
    cout << " *. Multiply\n";
    cout << " /. Divide\n";
    cout << "Enter operator: ";
    cin >> operatorChoice;
    
   cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Perform the calculation based on the operator
    switch (operatorChoice) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
            case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Error! Operator is not correct." << endl;
            break;
    }

    return 0;
}

    
