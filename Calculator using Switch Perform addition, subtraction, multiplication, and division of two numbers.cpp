#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (op) {
        case '+': cout << "Result: " << a + b << endl; break;
        case '-': cout << "Result: " << a - b << endl; break;
        case '*': cout << "Result: " << a * b << endl; break;
        case '/': 
            if (b != 0) cout << "Result: " << a / b << endl;
            else cout << "Error! Division by zero." << endl;
            break;
        default: cout << "Invalid operator!" << endl;
    }
    return 0;
}

