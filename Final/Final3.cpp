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
	}
	void getUserData()
	{
		this->~Student();
		cout << "Enter the name: "; // maybe problem here
		cin >> name;
		cout << "Enter the number of classes: ";
		cin >> num_classes;
		while (num_classes <= 0)
		{
			cout << "Enter a positive number of classes: ";
			cin >> num_classes;
		}
		class_list = new string[num_classes];
		for (int i = 0; i < num_classes; i++)
		{
			cout << "Enter the course name : ";
			cin >> class_list[i];
		}
	}
	void display()
	{
		cout << "Name : " << name;
		cout << "\nCourses:\n";
		for (int i = 0; i < num_classes; i++)
			cout << i + 1 << ". " << class_list[i] << endl;
	}
	void reset()
	{
		num_classes = 0;
		delete[] class_list;
		class_list = nullptr;
	}
	Student operator= (const Student& rhs)
	{
		if (this == &rhs)
			return *this;
		this->~Student();
		name = rhs.name;
		num_classes = rhs.num_classes;
		class_list = new string[num_classes];
		for (int i = 0; i < rhs.num_classes; i++)
			class_list[i] = rhs.class_list[i];
		return *this;
	}
	~Student()
	{
		name = "";
		num_classes = 0;
		delete[] class_list;
		class_list = nullptr;
	}
};
int main()
{
	Student s1;
	
	cout << "Input data using getUserData function\n\n";
	s1.getUserData();
	cout << "Your Details are: \n";
	cout << "\nObject s1: (display)\n";
	s1.display();

	cout << "\nObject s2: (using copy constructor)\n";
	Student s2(s1);
	s2.display();

	cout << "\nObject s3: (using assignment operator)\n";
	Student s3 = s1;
	s3.display();

	cout << "\nObject s1: (after resetting)\n";
	s1.reset();
	s1.display();
}