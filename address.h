#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>

using namespace std;

class Address
{
private:
	string street;
	string state;
	int zip;
public:
	Address();
	Address(string str, string st, int z);
	string getStreet()const;
	string getState()const;
	int getZip()const;
	void printAddress()const;
	void setStreet(string addr);
	void setState(string st);
	void setZip(int z);
	void setAddress(string addr, string st, int z);
};
Address::Address()
{
	zip = 0;
}
Address::Address(string str, string st, int z)
{
	street = str;
	state = st;
	zip = z;
}
string Address::getStreet()const
{
	return street;
}
string Address::getState()const
{
	return state;
}
int Address::getZip()const
{
	return zip;
}
void Address::printAddress()const
{
	cout << "\tStreet  : " << street << endl;
	cout << "\tState   : " << state << endl;
	cout << "\tZIP     : " << zip << endl;
}
void Address::setStreet(string addr)
{
	street = addr;
}
void Address::setState(string st)
{
	state = st;
}
void Address::setZip(int z)
{
	zip = z;
}
void Address::setAddress(string addr, string st, int z)
{
	street = addr;
	state = st;
	zip = z;
}


#endif // !ADDRESS_H
