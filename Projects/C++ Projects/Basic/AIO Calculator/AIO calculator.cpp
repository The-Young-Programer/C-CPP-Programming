#include <iostream>
#include <limits>  // For numeric_limits

using namespace std;

// addition
long double add(long double num1, long double num2) {
    return num1 + num2;
}

// subtraction
long double sub(long double num1a, long double num2a) {
    return num1a - num2a;
}

// multiplication
long double mltp(long double num1b, long double num2b) {
    return num1b * num2b;
}

// division with check for division by zero
long double dv(long double num1c, long double num2c) {
    if (num2c == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
        return numeric_limits<long double>::infinity();  // Return infinity for division by zero
    }
    return num1c / num2c;
}

// exponentiation (limit to integer exponents for simplicity)
long double power(long double base, long double exponent) {
    if (exponent < 0) {
        cout << "Error: Negative exponents are not supported in this calculator for now." << endl;
        return -1;  // Return -1 to indicate an error
    }
    long double result = 1;
    for (long double i = 0; i < exponent; i++) {
        result = base * result;
    }
    return result;
}

int panel;
long double a, b;

void ctrl_panel() {
    cout << "\nControl Panel\n\nOperators: \n\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exponent\n";
    cout << "6. Multiplication Table\n";
    cout << "7. Celsius to Fahrenheit\n";
    cout << "8. Fahrenheit to Celsius\n";
    cout << "0. Back\n";
    cout << "\nChoose an operation: ";
    cin >> panel;
    
    if (cin.fail()) {  // Check if input is not a number
        cin.clear();  // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore bad input
        cout << "Invalid input. Please enter a number.\n";
        return;
    }

    switch(panel) {
        case 0:
            return;
        case 1:
            cout << "Addition\nFirst Number: ";
            cin >> a;
            cout << "Second Number: ";
            cin >> b;
            cout << "Result: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Subtraction\nFirst Number: ";
            cin >> a;
            cout << "Second Number: ";
            cin >> b;
            cout << "Result: " << sub(a, b) << endl;
            break;
        case 3:
            cout << "Multiplication\nFirst Number: ";
            cin >> a;
            cout << "Second Number: ";
            cin >> b;
            cout << "Result: " << mltp(a, b) << endl;
            break;
        case 4:
            cout << "Division\nFirst Number: ";
            cin >> a;
            cout << "Second Number: ";
            cin >> b;
            cout << "Result: " << dv(a, b) << endl;
            break;
        case 5:
            cout << "Exponent\nBase: ";
            cin >> a;
            cout << "Power: ";
            cin >> b;
            if (b >= 0)
                cout << "Result: " << power(a, b) << endl;
            break;
        case 7:
            cout << "Celsius to Fahrenheit\nTemperature in Celsius: ";
            cin >> a;
            cout << "Result: " << a * 1.8 + 32 << " ℉" << endl;
            break;
        case 8:
            cout << "Fahrenheit to Celsius\nTemperature in Fahrenheit: ";
            cin >> a;
            cout << "Result: " << (a - 32) * 5 / 9 << " ℃" << endl;
            break;
        case 6:
            cout << "Multiplication table\nEnter a number: ";
            int num;
            cin >> num;
            cout << "Enter the range: ";
            int range;
            cin >> range;
            for (int i = 1; i <= range; i++) {
                cout << num << " x " << i << " = " << num * i << endl;
            }
            break;
        default:
            cout << "Invalid option. Please choose a valid operation.\n";
    }
}

int main() {
    int choice;
    do {
        cout << "Welcome to NemoNet AIO Calculator\n\n";
        cout << "1. Enter\n0. Quit\n";
        cout << "\nContact NemoNet on: GitHub\n";
        cout << "Choose an option: ";
        cin >> choice;
        
        if (cin.fail()) {  // Check if input is not a number
            cin.clear();  // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore bad input
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch(choice) {
            case 1:
                ctrl_panel();
                break;
            case 0:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid option. Please choose 1 to enter or 0 to quit.\n";
        }
    } while(choice != 0);

    return 0;
}
