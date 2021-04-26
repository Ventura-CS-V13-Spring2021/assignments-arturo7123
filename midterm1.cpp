#include<iostream>
#include<fstream>

using namespace std ;

int main()
{
	ifstream std ; 
	int count = 0 ;
	std.open("students.txt") ; //opening file 
	if(std.fail()) //checking file if open or not
	{
		cout << "File not working" ;
	}
	
	while(std.good()) //Loop will continue to run until file will be completed 