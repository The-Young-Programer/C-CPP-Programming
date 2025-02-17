#include <iostream>
#include <cmath>
using namespace std;
void show(){
    cout << "Scientific Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Sine" << endl;
    cout << "6. Cosine" << endl;
    cout << "7. Tangent" << endl;
    cout << "8. Logarithm" << endl;
    cout << "9. Exponential" << endl;
    cout << "10. Power" << endl;
    cout << "11. Exit" << endl;
}
double add(double a, double b) {
    return a + b;
}
double sub(double a, double b) {
    return a - b;
}
double mul(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    if (b == 0) {
        cout << "Invalid" << endl;
        return NAN;
    }
    return a / b;
}
double sine(double x) {
    return sin(x);
}
double cosine(double x) {
    return cos(x);
}
double tangent(double x) {
    return tan(x);
}
double log(double x) {
    if (x <= 0) {
        cout << "Invalid" << endl;
        return NAN;
    }
    return log(x);
}
double exp(double x) {
    return exp(x);
}
double pow(double base, double exponent) {
    return pow(base, exponent);
}
int main() {
    int c;
    double num1, num2;
    while (true) {
        show();
        cout << "Enter your choice: ";
        cin >> c;
        if (c == 11) break;
        switch (c) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << sub(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << mul(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << sine(num1) << endl;
                break;
            case 6:
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << cosine(num1) << endl;
                break;
            case 7:
                cout << "Enter angle in radians: ";
                cin >> num1;
                cout << "Result: " << tangent(num1) << endl;
                break;
            case 8:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << log(num1) << endl;
                break;
            case 9:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << exp(num1) << endl;
                break;
            case 10:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
        cout << endl;
    }
    return 0;
}
