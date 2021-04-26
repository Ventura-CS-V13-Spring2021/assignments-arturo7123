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