#ifndef DOB_H
#define DOB_H
#include <iostream>

using namespace std;

class DOB
{
private:
	int month;
	int day;
	int year;
public:
	DOB();
	DOB(int m, int d, int y);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	void printDate() const;

	void setDOB(int m, int d, int y);
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);

};

DOB::DOB()
{
	month = 0;
	day = 0;
	year = 0;
}
DOB::DOB(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;

}
int DOB::getMonth() const
{
	return month;
}
int DOB::getDay() const
{
	return day;
}
int DOB::getYear() const
{
	return year;
}
void DOB::printDate() const
{
	cout << month<<"/" << day << "/" << year << endl;
}

void DOB::setDOB(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}
void DOB::setMonth(int m)
{
	month = m;
}
void DOB::setDay(int d)
{
	day = d;
}
void DOB::setYear(int y)
{
	year = y;
}
#endif // !DOB_H
