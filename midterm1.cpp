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
  {
		string name = " " ;   
		int score_1 = 0 ;
		int score_2 = 0 ;    // Data variables
		int sum = 0 ;
		float avg = 0.0 ;

  		std >> name ;
		cout << "Student : " << name << "   \t"; // Student name 
		
		std >> score_1 ;
		cout << "Score 1 : " << score_1 << "\t"; // Score 1
		
		std >> score_2 ;
		cout << "Score 2 : " << score_2 << "\t"; // Score 2
		
		sum = score_1 + score_2 ;
		cout << "Sum : " << sum << "\t" ; // Sum 
		
		avg = float(sum)/2 ;
		cout << "Avg : " << avg ; // Average 

    		if(avg>80)
			count++ ; // Counting students who has average greater then 80 
			 
			
		cout << "\n\n" ; // New line
		
	}
	
	cout << "\n\n\n<------------------------------------------------------->\n" ;
	cout << "The total number of students who has average > 80 : " << count << " students.\n\n"; // Print student with average greater the 80
	
	std.close(); // Closing file 
	return 0;
}