#include <iostream>
using namespace std;
int main()
{
     char  selection;
     cout << "Enter your choice among A, B, C\n";
     cin >> selection;
     switch(selection)
     {
       case 'A': cout << "You chose A." ;
       case 'B': cout << "You chose B." ;
       case 'C': cout << "You chose C." ;
        break;
       default: cout << "You did not choose any. " ;
     }
     return 0;
}