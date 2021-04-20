#include <iostream>
#include <fstream>
using namespace std;
std::ifstream infile("students.txt");
int count = 1;
int a,b;
str x;
double avg;
int sum;
int studentcount = 0;
int main ()
{
  fileread();
}
void fileread(void)
{
  ifstream myfile;
  myfile.open ("students.txt")
  while(std::getline(infile,line))

{
  std::istringstream iss (line)
  if(count%2==0)
  {
    while(infile>>a>>b)
    {
      summation(a,b);
      average(a,b);

      cout<<" score 1 : "<< a << " score 2 : "<< b << " sum : " << sum<< "Average : " << avg << end1:
      if(avg > 80)
      {
        studentcount += 1:
}