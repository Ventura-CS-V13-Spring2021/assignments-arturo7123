#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
string name;
int numClasses;
vector<string> classList;
                            //constructor
Student()
{
name="";
numClasses=0;
}
                      //destructor
~Student()
{
name;
numClasses;
classList;
}

                //mutators and accessors
void setName(string n)
{
name=n;
}
void setNumClasses(int num)
{
numClasses=num;
}   
string getName()
{
return name;
}
int getNumClasses()
{   
return numClasses;
}   
void input()          //taking input
{
string name;
int num;
cout<<"\nEnter student name:";
cin>>name;
setName(name);
cout<<"Enter number of classes:";
cin>>num;
cout<<"Enter class names (-1 to stop):\n";
string className;
while(true)
{
cin>>className;
if(className=="-1")
break;
classList.push_back(className);
}
}
void show_info()           //showing info
{
cout<<"\nName of Student:"<<getName()<<"\n";
cout<<"List Of classes:\n";
for(int i=0;i<classList.size();i++)
cout<<classList[i]<<"\n";
}
void operator = (const Student &s )           //assignment operator
{
name=s.name;
numClasses=s.numClasses;
classList=s.classList;
}
void reset()                //resetting the data
{
setNumClasses(0);
classList.empty();
}
};


int main()
{
Student s1;               //creating s1 as object1
s1.input();
s1.show_info();
  
Student s2;                 //creating s2 as object2
s2.input();
s2.show_info();
s1=s2;                    //copying the s2 data to s1 using assignment overloading operator.
s1.show_info();                   //now printing s1 data
}