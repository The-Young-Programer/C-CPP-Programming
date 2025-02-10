#include <iostream>
#include <cmath> // For pow() function

using namespace std;

// Addition
long double add(long double num1, long double num2) {
    return num1 + num2;
}

// Subtraction
long double sub(long double num1, long double num2) {
    return num1 - num2;
}

// Multiplication
long double multiply(long double num1, long double num2) {
    return num1 * num2;
}

// Division (with zero check)
long double divide(long double num1, long double num2) {
    if (num2 == 0) {
        cout << "Error: Division by zero is undefined.\n";
        return 0;
    }
    return num1 / num2;
}

// Exponentiation using pow()
long double power(long double base, long double exponent) {
    return pow(base, exponent);
}

// Conversion functions
long double celsiusToFahrenheit(long double celsius) {
    return (celsius * 1.8) + 32;
}

long double fahrenheitToCelsius(long double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Display multiplication table
void multiplicationTable() {
    int num, range;
    cout << "Enter the number for multiplication table: ";
    cin >> num;
    cout << "Enter the range: ";
    cin >> range;

    for (int i = 1; i <= range; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// Control panel function
void controlPanel() {
    int choice;
    
    do {
        cout << "\nControl Panel\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
        cout << "5. Exponentiation\n6. Multiplication Table\n";
        cout << "7. Celsius to Fahrenheit\n8. Fahrenheit to Celsius\n";
        cout << "0. Exit\n\nEnter your choice: ";
        cin >> choice;

        long double a, b;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << add(a, b) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << sub(a, b) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << multiply(a, b) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << divide(a, b) << endl;
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                cout << "Result: " << power(a, b) << endl;
                break;
            case 6:
                multiplicationTable();
                break;
            case 7:
                cout << "Enter temperature in Celsius: ";
                cin >> a;
                cout << "Fahrenheit: " << celsiusToFahrenheit(a) << "℉" << endl;
                break;
            case 8:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> a;
                cout << "Celsius: " << fahrenheitToCelsius(a) << "℃" << endl;
                break;
            case 0:
                cout << "Exiting calculator. Goodbye!\n";
                return;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}

// Main function
int main() {
    int option;
    
    do {
        cout << "\nWelcome to NemoNet Calculator\n";
        cout << "1. Start\n0. Quit\n\nEnter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                controlPanel();
                break;
            case 0:
                cout << "Thank you for using NemoNet Calculator!\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter 1 to start or 0 to quit.\n";
        }
    } while (option != 0);
}
