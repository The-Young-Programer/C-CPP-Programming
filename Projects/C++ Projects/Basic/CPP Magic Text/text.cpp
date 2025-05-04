#include <iostream>
using namespace std;
int main()
{
    char str[100];
   
   
    cout<<"Enter some text in UpperCase(A-Z) or numbers(0-9) and see magic:-"<<endl<<endl;
    cout<<"______________________________________"<<endl<<endl;
    cin.getline(str,100);
    cout<<"\n______________________________________"<<endl<<endl;
   
    
    for(int b=0;str[b]!='\0';b++){
        
        switch(str[b])
    {
    case 'A':
        {
        cout<<"\n    #     ";    
        cout<<"\n   # #    ";
        cout<<"\n  # # #   ";
        cout<<"\n #     #  ";
        cout<<"\n#       #  ";
        cout<<"\n \n ";
        break;
        }
    
    case 'B':
        {
        cout<<"\n # # #  ";
        cout<<"\n #     # ";
        cout<<"\n # # #  ";
        cout<<"\n #     # ";
        cout<<"\n # # #  ";
        cout<<"\n \n ";
        break;
        }
    
    case 'C':
        {
        cout<<"\n # ## ";
        cout<<"\n#    ";
        cout<<"\n#    ";
        cout<<"\n#    #";
        cout<<"\n # ## ";
        cout<<"\n \n  ";
        break;
        }
    case 'D':
        {
        cout<<"\n # # #   ";
        cout<<"\n #    #  ";
        cout<<"\n #    #  ";
        cout<<"\n #    #  ";
        cout<<"\n # # #   ";
        cout<<"\n \n ";
        break;
        }
    case 'E':
        {
        cout<<"\n # # ##  ";
        cout<<"\n #      ";
        cout<<"\n # # #   ";
        cout<<"\n #      ";
        cout<<"\n # # ##  ";
        cout<<"\n \n ";
        break;
        }
    case 'F':
        {
        cout<<"\n # # # #  ";
        cout<<"\n #      ";
        cout<<"\n # # #    ";
        cout<<"\n #      ";
        cout<<"\n #      ";
        cout<<"\n \n ";
        break;
        }
    case 'G':
        {
        cout<<"\n  # # # "; 
        cout<<"\n #      "; 
        cout<<"\n #  # # ";
        cout<<"\n #    # ";
        cout<<"\n  # # # ";
        cout<<"\n \n ";
        break;
        }
    case 'H':
        {
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n # # # #";
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n \n ";
        break;
        }
    case 'I':
        {
        cout<<"\n # # # # ";
        cout<<"\n    #    ";
        cout<<"\n    #    ";
        cout<<"\n    #    "; 
        cout<<"\n # # # # "; 
        cout<<"\n \n ";
        break;
        }
    case 'J':
        {
        cout<<"\n  # # #";
        cout<<"\n       #";
        cout<<"\n       #";
        cout<<"\n  #    #";
        cout<<"\n   # ## ";  
        cout<<"\n \n ";
        break;
        }
    case 'K':
        {
        cout<<"\n #    #  ";      
        cout<<"\n #   #   ";      
        cout<<"\n # ##    ";      
        cout<<"\n #   #   ";    
        cout<<"\n #    #  ";   
        cout<<"\n \n ";
        break;
        }
    case 'L':
        {
        cout<<"\n #       ";
        cout<<"\n #       ";
        cout<<"\n #       ";
        cout<<"\n #       ";
        cout<<"\n # # # # ";
        cout<<"\n \n ";
        break;
        }
    case 'M':
        {
        cout<<"\n ##    ##  ";
        cout<<"\n # #  # #  ";
        cout<<"\n #  #   #  ";
        cout<<"\n #      #  ";
        cout<<"\n #      #  ";
        cout<<"\n \n ";
        break;
        }
    case 'N':
        {
        cout<<"\n #     #  ";
        cout<<"\n # #   #  ";
        cout<<"\n #  #  #  ";
        cout<<"\n #   # #  ";
        cout<<"\n #     #  ";
        cout<<"\n \n ";
        break;
        }
    case 'O':
        {
        cout<<"\n  # # #   ";
        cout<<"\n #     #  ";
        cout<<"\n #     #  ";
        cout<<"\n #     #  ";
        cout<<"\n  # # #  ";
        cout<<"\n \n ";
        break;
    case 'P':
        {
        cout<<"\n # # #  ";
        cout<<"\n #    #  ";
        cout<<"\n # # #   ";
        cout<<"\n #       "; 
        cout<<"\n #      ";
        cout<<"\n \n ";
        break;
        }
    case 'Q':
        {
        cout<<"\n  # # #   ";
        cout<<"\n #     #  ";
        cout<<"\n #     #  ";  
        cout<<"\n #  #  #  ";
        cout<<"\n  # # #  ";
        cout<<"\n       #  ";   
        cout<<"\n \n ";
        break;
    case 'R':
        {
        cout<<"\n # # #   ";  
        cout<<"\n #    #  ";  
        cout<<"\n #    #  ";
        cout<<"\n # # #   ";
        cout<<"\n #    #  ";
        cout<<"\n #     # ";
        cout<<"\n \n ";
        break;
        }
    case 'S':
        {
        cout<<"\n  # # # ";
        cout<<"\n #     ";
        cout<<"\n  # # #  ";
        cout<<"\n       # ";
        cout<<"\n # # # ";
        cout<<"\n \n ";
        break;
        }
    case 'T':
        {
        cout<<"\n # # # # # ";
        cout<<"\n     #     ";
        cout<<"\n     #     ";
        cout<<"\n     #     ";
        cout<<"\n     #     ";
        cout<<"\n \n ";
        break;
        }
    case 'U':
        {
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n #     # ";
        cout<<"\n  # # #  ";
        cout<<"\n \n ";
        break;
        }
    case 'V':
        {
        cout<<"\n #       #";
        cout<<"\n  #     # ";
        cout<<"\n   #   #  "; 
        cout<<"\n    # #   ";
        cout<<"\n     #    ";
        cout<<"\n \n ";
        break;
        }
    case 'W':
        {
        cout<<"\n #         #  ";
        cout<<"\n  #   #   #   ";
        cout<<"\n   # # # #    ";
        cout<<"\n    #   #      ";
        cout<<"\n \n ";
        break;
        }
    case 'X':
        {
        cout<<"\n #     #  ";
        cout<<"\n  #   #   ";
        cout<<"\n   # #    ";
        cout<<"\n  #   #   ";
        cout<<"\n #     #  ";
        cout<<"\n \n ";
        break;
        }
    case 'Y':
        {
        cout<<"\n #     # ";
        cout<<"\n  #   #  ";
        cout<<"\n    #    ";
        cout<<"\n    #    ";
        cout<<"\n    #    ";
        cout<<"\n \n ";
        break;
        }
    case 'Z':
        {
        cout<<"\n # # ##  ";
        cout<<"\n     #   ";
        cout<<"\n    #    ";
        cout<<"\n  #     ";
        cout<<"\n # # ##  ";
        cout<<"\n \n ";
        break;
        }
        case '0':
        {
        cout<<"\n  #### ";
        cout<<"\n #    # ";
        cout<<"\n #    # ";
        cout<<"\n #    # ";
        cout<<"\n  ####  ";
        cout<<"\n \n     ";
        break;
        }

    case '1':
        {
        cout<<"\n   #  ";
        cout<<"\n#  #  ";
        cout<<"\n   #  ";
        cout<<"\n   #  ";
        cout<<"\n# # # #"; 
        cout<<"\n \n   ";
        break;
        }
    case '2':
        {
        cout<<"\n  # #  ";
        cout<<"\n #   # ";
        cout<<"\n    #  ";
        cout<<"\n  #    ";
        cout<<"\n #  # #";
        cout<<"\n \n    ";
        break;
        }
    case '3':
        {
        cout<<"\n # #  ";
        cout<<"\n#    #  ";
        cout<<"\n    # ";
        cout<<"\n#    #  ";
        cout<<"\n # #   ";
        cout<<"\n \n    ";
        break;
        }
    case '4':
        {
        cout<<"\n     # ";
        cout<<"\n   # # ";
        cout<<"\n  #  # ";
        cout<<"\n # ## #";
        cout<<"\n     # ";
        cout<<"\n \n    ";
        break;
        }
    case '5':
        {
        cout<<"\n # # #";
        cout<<"\n #     ";
        cout<<"\n # # # ";
        cout<<"\n      #";
        cout<<"\n # # # ";
        cout<<"\n \n    ";
        break;
        }
    case '6':
        {
        cout<<"\n  # # #";
        cout<<"\n #     ";
        cout<<"\n # # # ";
        cout<<"\n #    #";
        cout<<"\n  # ## ";
        cout<<"\n \n    ";
        break;
        }
    case '7':
        {
        cout<<"\n # # ##";
        cout<<"\n     # ";
        cout<<"\n    #  ";
        cout<<"\n   #   ";
        cout<<"\n  #    ";
        cout<<"\n \n    ";
        break;
        }
    case '8':
        {
        cout<<"\n  # # ";
        cout<<"\n #    #";
        cout<<"\n  # ##  ";
        cout<<"\n #    #";
        cout<<"\n   # #  ";
        cout<<"\n \n    ";
        break;
        }
    case '9':
        {
        cout<<"\n  # #  ";
        cout<<"\n #    # ";
        cout<<"\n  # # # ";
        cout<<"\n      # ";
        cout<<"\n  #  #  ";
        cout<<"\n \n     ";
        break;
        }
     
   case '.':
        {
        cout<<"\n  ## ";
        cout<<"\n #  # ";
        cout<<"\n  ## ";
        cout<<"\n \n     ";
        break;
        }
    default:
        {
        cout<<"PLEASE ENTER A NUMBER OR ALPHABET(A-Z)." ;   
        cout<<"\n ";
        cout<<"\n ";
        cout<<"\n ";
        cout<<"\n ";
        cout<<"\n ";
        cout<<"\n \n ";
        break;
        }
    }    
    
    }
  }
 }
 cout<<"\t______________________________________"<<endl;
 cout << "\n\t       And if you liked it,        " << endl;
 cout << " \t      give a star on GitHub !   " << endl;
 cout << "  \t           Thank you!               " << endl;
 cout<<"\t______________________________________"<<endl<<endl;

 return 0;
}

