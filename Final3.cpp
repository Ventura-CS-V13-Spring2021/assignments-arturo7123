#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int num_classes;
	string* class_list;
public:
	Student() : name(), num_classes(0), class_list(NULL) {};
	Student(string n, int num)
	{
		name = n;
		num_classes = num;
		class_list = new string[num];
		for (int i = 0; i < num; i++)
		{
			cout << "Enter the course name : ";
			cin >> class_list[i];
		}
	}
	Student(Student& rhs)
	{
		name = rhs.name;
		num_classes = rhs.num_classes;
		class_list = new string[num_classes];
		for (int i = 0; i < rhs.num_classes; i++)
			class_list[i] = rhs.class_list[i];
  {
    void getUserData()
    {
      This->~Student();
      cout<< "enter the name; ';" //maybe problem here check
      cin>> name;
      cout<< "Enter the number of classes: ";
      cin>> num_classes;
      while (num_classes <= 0)