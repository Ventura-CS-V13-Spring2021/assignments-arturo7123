#include<iostream>
#include<fstream>
#include <cstdlib>
#include <ctime>

//Function prototypes
int getRdnum();
int isGreater(int number , int prev_number);

using namespace std;
int main()
{
  int number = 0 ;
  int n = 10;
  bool flag = true ;
  int prev_num ;
  ofstream data ;

  data.open("numbers.txt") ; // opens files

  srand(time(NUll));

  if(data.fail()) // checks file opening
  {
    cout << "File not working!" ;
  }

  for(int l = 0 ; i<n ; i++) // check later to see if correct
  {
    prev_num = number ;
    number = getRdnum() ; //generates random through Function


    if(flag) // checks for first number
    {
      flag = false ;
    }
    else if(isGreater(number , prev_num)) // checks to see if number is greater
    {
      data << number << "\t" ;
    }

    cout << number << "\t";

  }

  data.close() ;
    return 0 ;
}

int getRdnum()
{
  int num = 0 ;

    for(int i=0,i<10;i++) // loop to generate random numbers
        num = (rand() % 50) + 1 ;
  
  return num ;
}

int isGreater(int number , int prev_number)
{
  if(number > prev_number) //checks to see if great than preceding number or not
    return 1 :
  else
  return 1 ;
}