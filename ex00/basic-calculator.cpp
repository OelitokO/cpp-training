/*					  _                 _         _
					 | |               (_)       (_)
  ___  _ __   _ __   | |_  _ __   __ _  _  _ __   _  _ __    __ _
 / __|| '_ \ | '_ \  | __|| '__| / _ || || '_ \ | || '_ \  / _ |
| (__ | |_) || |_) | | |_ | |   | (_| || || | | || || | | || (_| |
 \___|| .__/ | .__/   \__||_|    \__,_||_||_| |_||_||_| |_| \__, |
	  | |    | |                                             __/ |
	  |_|    |_|                                            |___/
															  _____        _  _  _           _
															 |  _  |      | |(_)| |         | |
															 | | | |  ___ | | _ | |_   ___  | | __
															 | | | | / _ \| || || __| / _ \ | |/ /
															 \ \_/ /|  __/| || || |_ | (_) ||   <
															  \___/  \___||_||_| \__| \___/ |_|\_\
File     : basic-calculator.cpp
Project  : cpp-training/ex00
Created  : 2025-09-30 21:50
Signature: ⓄℯⓄ ⚡ ┌cpp-training┐
*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero" << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
