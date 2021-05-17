#include <iostream>
#include <iomanip>
using namespace std;
void sort(int arr[], int num)
{
	for (int i = 0; i < num - 1; i++)
		for (int j = i; j < num; j++)
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);
}
int main()
{
	int arr[20];
	int num = 20, count;
	cout << "Enter the elements of the array (-999 to terminate input): ";
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		if (arr[i] == -999)
		{
			num = i;
			break;
		}
	}
	sort(arr, num);
	cout << "  N   Count\n";
	for (int i = 0; i < num; i++)
	{
		cout << setw(3) << right << arr[i];
		count = 0;
		for (int j = i; arr[i] == arr[j]; j++)
		{
			count++;
		}
		cout << setw(4) << right << count << endl;
		i += (count - 1);
	}
}