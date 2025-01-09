#include <iostream>
#include <vector>
#include <limits> // To handle input errors

using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main()
{
    int input;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "                    GPA & CGPA Calculator (Developed by Nemo)             " << endl;
    cout << "--------------------------------------------------------------------------\n" << endl;
    cout << "            MENU:" << endl;
    cout << "                   1. Calculate GPA (Grade Point Average)" << endl;
    cout << "                   2. Calculate CGPA (Cumulative Grade Point Average)" << endl;
    cout << "                   3. Method that is applied here for calculating GPA & CGPA" << endl;
    cout << "                   4. Exit Application" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    while (true)
    {
        cout << "Enter your choice: ";
        cin >> input;

        if (cin.fail()) {
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        switch (input)
        {
        case 1:
            calculateGPA();
            break;

        case 2:
            calculateCGPA();
            break;

        case 3:
            method();
            break;

        case 4:
            return 0;

        default:
            cout << "You have entered wrong input. Try again!\n" << endl;
            break;
        }
    }
}

void calculateGPA()
{
    int q;
    cout << "-------------- GPA Calculating -----------------" << endl;
    cout << "How many subjects' points do you want to calculate? : ";
    cin >> q;

    vector<float> credit(q);
    vector<float> point(q);

    for (int i = 0; i < q; i++)
    {
        cout << "Enter the credit for the subject " << i + 1 << ": ";
        cin >> credit[i];
        cout << "Enter the point of the subject " << i + 1 << ": ";
        cin >> point[i];
        cout << "-----------------------------------\n\n" << endl;
    }

    float sum = 0;
    float tot;
    for (int j = 0; j < q; j++)
    {
        tot = credit[j] * point[j];
        sum += tot;
    }

    float totCr = 0;
    for (int k = 0; k < q; k++)
    {
        totCr += credit[k];
    }

    cout << "\n\n\nTotal Points: " << sum << " . Total Credits: " << totCr << " . Total GPA: " << sum / totCr << endl;

    int inmenu;
    cout << "\n\n\n1. Calculate Again" << endl;
    cout << "2. Go Back to Main Menu" << endl;
    cout << "3. Exit This App \n\n" << endl;
    cout << "Your Input: ";
    cin >> inmenu;

    switch (inmenu)
    {
    case 1:
        calculateGPA();
        break;
    case 2:
        main();
        break;
    case 3:
        exit(EXIT_SUCCESS);
    default:
        cout << "\n\nYou have Entered Wrong Input! Please Choose Again!" << endl;
        break;
    }
}

void calculateCGPA()
{
    int l;
    cout << "-------------- CGPA Calculating -----------------" << endl;
    cout << "How many semester results do you want to input? : ";
    cin >> l;
    vector<float> semrs(l);

    for (int i = 0; i < l; i++)
    {
        cout << "Enter Semester " << i + 1 << " Result (GPA): ";
        cin >> semrs[i];
    }

    float semtot = 0;
    for (int j = 0; j < l; j++)
    {
        semtot += semrs[j];
    }

    cout << "******** Your CGPA is " << semtot / l << " **********" << endl;

    int inmenu;
    cout << "\n\n\n1. Calculate Again" << endl;
    cout << "2. Go Back to Main Menu" << endl;
    cout << "3. Exit This App \n\n" << endl;
    cout << "Your Input: ";
    cin >> inmenu;

    switch (inmenu)
    {
    case 1:
        calculateCGPA();
        break;
    case 2:
        main();
        break;
    case 3:
        exit(EXIT_SUCCESS);
    default:
        cout << "\n\nYou have Entered Wrong Input! Please Choose Again!" << endl;
        break;
    }
}

void method()
{
    cout << "--------------- Method of Calculating GPA & CGPA ---------------" << endl;
    cout << "GPA = Sum of (Credit * Point) / total of credits" << endl;
    cout << "CGPA = Sum of GPA / number of semesters" << endl;
    cout << "-----------------------------------------------------------------" << endl;

    int inmenu;
    cout << "1. Go Back to Main Menu" << endl;
    cout << "2. Exit This App \n\n" << endl;
    cout << "Your Input: ";
    cin >> inmenu;

    switch (inmenu)
    {
    case 1:
        main();
        break;
    case 2:
        exit(EXIT_SUCCESS);
    default:
        cout << "\n\nYou have Entered Wrong Input! Please Choose Again!" << endl;
        break;
    }
}
