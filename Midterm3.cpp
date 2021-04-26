#include<iostream>
#include<fstream> 
#include <cstdlib>
#include <ctime>

using namespace std ;

//function prototypes
int getRdnum() ;
int findMin(int num1 , int num2 , int num3);
int findMax(int num1 , int num2 , int num3);
int getDifference(int max , int min);
void fileWrite(int diff , ofstream& num);

int main()
{
	int num1 , num2 , num3 ;
	int diff ;
	int min ;
	int max ;
	
	srand(time(NULL));  // Initialize random number generator.
	
	ofstream num ;
	num.open("question3.txt"); // opening file 
  	
	do{
	
  num1 = getRdnum() ; // maybe wrong
  num2 = getRdnum() ; // gets random numbers
  num3 = getRdnum() ;

  cout << "Num_1 : " << num1 << "\n";
  cout << "Num_2 : " << num2 << "\n" ; // maybe mistake here too
  cout << "Num_3 : " << num3 << "\n" ;

  min = findMin(num1 , num2 , num3) ; // gets minimum
  max = findMax(num1 , num2 , num3) ; // gets maximum

	cout << "\n\nMinimum number : " << min ;
	cout << "\n\nMaximum number : " << max ;
	
	diff = getDifference(max , min) ; // getting difference 
	cout << "\n\nDifference : " << diff ;
	
	cout << "\n\n<------------------------------------------------->\n\n" ;
	
	fileWrite(diff , num); // writtng difference to file
	
	}while(diff>=3); // Loop that will continue to unless the difference b/w max and min will be less then 3
	
	
	num.close() ; // Closing file
	
	return 0 ;
}

int getRdnum()
{
  int num= 0 ;

    for(int i=0;i<10;i++) // loop that generates random numbers
        num = (rand() % 10) ;

  return num ;
}

int findMin