#include    <iostream>
using namespace std;

int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;

    //*** Your code

    for(int i=0; i<10;i++ ){
      sum = sum+numbers[i];
      cout<<" "<<numbers[i];
    }
    cout<<end1;
    for(int i =0; i<10; i++){
      diff[i] = sum-numbers[i];
      cout<<" "<<diff[i];
    }