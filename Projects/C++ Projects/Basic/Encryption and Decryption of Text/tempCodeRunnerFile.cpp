// Autor : Nemonet TYP
// Title: Encryption and Decryption project in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL


#include <iostream>
#include <string>
using namespace std;

int main()
{
   int i, x;
   string str;

   cout << "Please enter a string to convert to a secret code: ";
   cin >> str;

   cout << "\nPlease choose following options:\n";
   cout << "1 = Encrypt the string.\n";
   cout << "2 = Decrypt the string.\n";
   cout<<"Enter option 1 or 2: ";
   cin >> x;

   //using switch case statements
   switch(x)
   {
      //first case for encrypting a string
      case 1:
         for(i = 0; i<str.length(); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

         cout << "\nEncrypted string: " << str << endl<<endl;
         break;

      //second case for decrypting a string
      case 2:
         for(i = 0; i < str.length(); i++)
         str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

      cout << "\nDecrypted string: " << str << endl <<endl;
      break;

      default:
         cout << "\nInvalid Input.Enter a valid option!!!\n";
   }
   return 0;
}
