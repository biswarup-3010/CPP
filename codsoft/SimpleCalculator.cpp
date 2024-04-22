#include <bits/stdc++.h>
using namespace std;
int main() {
    double num1, num2, result;
    char operation;
    while(true){
        cout << "Choose an operation (+, -, *, / , e(for exit page)): ";
        cin >> operation;
        if(operation == 'e' || operation == 'E') return 0;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
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
                if (num2 != 0) result = num1 / num2;
                else cout << "Error: Cannot divide by zero.\n";
                break;
        default:
            cout << "Error: Invalid operation.\n";
        }
        cout <<num1 <<" "<< operation<< " "<< num2 << " = " << result << endl;
    }
    return 0;
}
