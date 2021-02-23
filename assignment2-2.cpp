#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     
     if ((number1 == number2) && (number1 == number3))
          cout << "The numbers are the same." ;
     else if ((number1 == number2) || (number1 == number3))
          cout << "Two duplicates" ;
     else cout << "Numbers are distinct" ;
     
     return 0;
}