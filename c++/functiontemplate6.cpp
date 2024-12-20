#include <iostream>
using namespace std;

// Template functions for basic operations
template <class T>
T sum(T a, T b) {
    return a + b;
}

template <class T>
T sub(T a, T b) {
    return a - b;
}

template <class T>
T mul(T a, T b) {
    return a * b;
}

template <class T>
T quo(T a, T b) {
    if (b == 0) {
        cout << "Error: Division by zero is undefined." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    cout << "Simple Calculator\n";
    cout << "Select an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers:\n";
    double a, b;
    cin >> a >> b;

    switch (choice) {
        case 1:
            cout << "Result: " << sum(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << sub(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << mul(a, b) << endl;
            break;
        case 4:
            cout << "Result: " << quo(a, b) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
