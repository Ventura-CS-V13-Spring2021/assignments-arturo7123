#ifndef STUDENT_H
#define STUDENT_H
#include "DOB.h"
#include "address.h"
#include <iostream>

class Student: public DOB
{
private:
	string sname;
	int id;
	DOB dob;
	Address address;
public:
	Student();
	Student(string stname, int idnum, DOB date, Address addr);
	int getID() const;
	DOB getDOB() const;
	Address getAddress() const;
	void setName(string name);
	void setID(int num);
	void setDOB(DOB dob);
	void setAddress(Address addr);
	void printStudent();
};


Student::Student()
{
	id = 0;
}
Student::Student(string stname, int idnum, DOB date, Address addr)
{
	sname = stname;
	id = idnum;
	dob = date;
	address = addr;
}
int Student::getID() const
{
	return id;
}
DOB Student::getDOB() const
{
	return dob;
}
Address Student::getAddress() const
{
	return address;
}
void Student::setName(string name)
{
	sname = name;
}
void Student::setID(int num)
{
	id = num;
}
void Student::setDOB(DOB dob)
{
	this->dob = dob;
}
void Student::setAddress(Address addr)
{
	address = addr;
}
void Student::printStudent()
{
	
	cout << "Student Name    : " << sname << endl;
	cout << "Student ID      : " << id << endl;
	cout << "Student DOB     : ";
	dob.printDate();
	cout << "Student Address   ";
	cout<<endl;
	address.printAddress();
	cout << endl<<endl;
}

#endif // !STUDENT_H
