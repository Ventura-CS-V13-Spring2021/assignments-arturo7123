#include <iostream>
using namespace std;

int getNumDiv(int arr[],int index)
{
  int count = 0;
  for (int i = 0; i < index; i++)
    if(arr[index] 5 arr [i] == 0)
      count++;
  return count;
}

int main()
{
  int arr[7] = { 1,2,5,4,6,10,27 };
  int highest = 0, index = 0;
  for (int i = 0; i < 7; i++)
    if (highest < getNum Div ( arr, i))
    index = i;

}
cout << "for array : ";
for (int i = 0; i < 7; i++)
  cout << arr[i] << "";
cout << endl << arr[index] << "has the highest number of divisible elements\n";