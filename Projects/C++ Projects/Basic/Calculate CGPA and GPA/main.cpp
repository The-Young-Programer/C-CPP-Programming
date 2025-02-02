// Autor : OM ROY
// Title: Calculate CGPA Programmed in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL



// #include <iostream>
// #include <stdlib.h>

// using namespace std;

// void calculateGPA();
// void calculateCGPA();
// void method();

// int main()
// {
//     system("cls");
//     int input;
//     cout<<"--------------------------------------------------------------------------"<<endl;
//     cout<<"                    GPA & CGPA Calculator (Developed by Nemo)             "<<endl;
//     cout<<"--------------------------------------------------------------------------\n"<<endl;
//     cout<<"            MENU:"<<endl;
//     cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
//     cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
//     cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
//     cout<<"                   4. Exit Application"<<endl;
//     cout<<"--------------------------------------------------------------------------"<<endl;
//     sub:
//     cout<<"Enter your choice: ";
//     cin>>input;
//     switch(input)
//     {
//         case 1:
//                 calculateGPA();
//                 break;

//         case 2:
//                 calculateCGPA();
//                 break;
//         case 3:
//                 method();
//                 break;
//         case 4:
//                 exit(EXIT_SUCCESS);
//                 break;
//         default:
//             cout<<"You have entered wrong input.Try again!\n"<<endl;
//             goto sub;
//             break;
//     }
// }

// void calculateGPA()
// {
//     int q;
//     system("cls");
//     cout<<"-------------- GPA Calculating -----------------"<<endl;
//     cout<<" How many subject's points do you want to calculate? : ";
//     cin>>q;

//     float credit [q];
//     float point [q];

//     cout<<endl;
//     for(int i=0;i<q;i++)
//     {
//         cout<<"Enter the credit for the subject "<<i+1<<": ";
//         cin>>credit[i];
//         cout<<endl;
//         cout<<"Enter the point of the subject "<<i+1<<": ";
//         cin>>point[i];
//         cout<<"-----------------------------------\n\n"<<endl;
//     }

//     float sum=0;
//     float tot;
//     for(int j=0;j<q;j++)
//     {
//         tot=credit[j]*point[j];
//         sum=sum+tot;
//     }

//     float totCr=0;
//     for(int k=0;k<q;k++)
//     {
//         totCr=totCr+credit[k];
//     }

//     cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;


//     sub:
//     int inmenu;
//     cout<<"\n\n\n1. Calculate Again"<<endl;
//     cout<<"2. Go Back to Main Menu"<<endl;
//     cout<<"3. Exit This App \n\n"<<endl;
//     cout<<"Your Input: "<<endl;
//     cin>>inmenu;

//     switch(inmenu)
//     {
//         case 1:
//                 calculateGPA();
//                 break;
//         case 2:
//                 main();
//                 break;
//         case 3:
//                 exit(EXIT_SUCCESS);

//         default:
//               cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
//               goto sub;
//     }
// }
// void calculateCGPA()
// {
//     system("cls");
//     int l;
//     cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
//     cout<<"How many semester results do you want input? :";
//     cin>>l;
//     cout<<"\n\n"<<endl;
//     float semrs[l];
//     int i;

//     for(i=0;i<l;i++)
//     {
//         cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
//         cin>>semrs[i];
//         cout<<"\n"<<endl;
//     }

//     float semtot=0;
//     for(int j=0;j<l;j++)
//     {
//         semtot=semtot+semrs[j];
//     }

//     cout<<"******** Your CGPA is "<<semtot/l<<" **********"<<endl;


//     sub:
//     int inmenu;
//     cout<<"\n\n\n1. Calculate Again"<<endl;
//     cout<<"2. Go Back to Main Menu"<<endl;
//     cout<<"3. Exit This App \n\n"<<endl;
//     cout<<"Your Input: "<<endl;
//     cin>>inmenu;

//     switch(inmenu)
//     {
//         case 1:
//                 calculateCGPA();
//                 break;
//         case 2:
//                 main();
//                 break;
//         case 3:
//                 exit(EXIT_SUCCESS);

//         default:
//               cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
//               goto sub;
//     }

// }

// void method()
// {
//     system("cls");
//     cout<<"--------------- Method of Calculating GPA & CGPA ---------------\n\n"<<endl;
//     cout<<" GPA= Sum of (Credit*Point) / total of credits \n"<<endl;
//     cout<<" CGPA=  Sum of GPA / number of semesters "<<endl;
//     cout<<"-----------------------------------------------------------------\n\n"<<endl;

//     sub:
//     int inmenu;
//     cout<<"1. Go Back to Main Menu"<<endl;
//     cout<<"2. Exit This App \n\n"<<endl;
//     cout<<"Your Input: "<<endl;
//     cin>>inmenu;

//     switch(inmenu)
//     {
//         case 1:
//                 main();
//                 break;
//         case 2:
//                 exit(EXIT_SUCCESS);

//         default:
//               cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
//               goto sub;
//     }
// };

#include <iostream>
#include <string>
using namespace std;
struct Subject {
    string name;
    int internalMarks;
    int midtermmarks;
    int termendmarks;
};
Subject subjects() {
    Subject s;
    cout << "Enter the subject name:" << endl;
    cin >> s.name;
    cout << "Enter the internal marks (out of 40):" << endl;
    cin >> s.internalMarks;
    cout << "Enter the internal marks (out of 50):" << endl;
    cin >> s.midtermmarks;
    cout << "Enter the internal marks (out of 100):" << endl;
    cin >> s.termendmarks;
    return s;
}
int cgpa(int n, int m, int o) {
    int c;
    c = (n + (m * 30 / 50) + (o * 30 / 100))/10;
    return c;
}
float totalCgpa(Subject arr[], int n) {
    int totalCgpaSum = 0;
    for (int i = 0; i < n; i++) {
        totalCgpaSum += cgpa(arr[i].internalMarks, arr[i].midtermmarks, arr[i].termendmarks);
    }
    return static_cast<float>(totalCgpaSum) / n;
}
int main(){
    int n;
    cout << "Enter the Number of Subjects:" << endl;
    cin >> n;
    Subject arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = subjects();
    }
    for (int i = 0; i < n; i++) {
        int c = cgpa(arr[i].internalMarks, arr[i].midtermmarks, arr[i].termendmarks);
        cout << "CGPA for subject " << arr[i].name << " is: " << c << endl;
    }
    float totalCgpaValue = totalCgpa(arr, n);
    cout << "Total CGPA for all subjects is: " << totalCgpaValue << endl;
    return 0;
}