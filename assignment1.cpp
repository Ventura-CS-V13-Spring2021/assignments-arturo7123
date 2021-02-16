#include <iostream>
#include <iomanip>  //for output formatting

using namespace std;


int main()
{
    //declare variables needed
    int ticA, ticB, ticC;
    double totalIncome;

    //prompt user to enter number of tickets for
    //each category, then read
    cout << "How many Class A tickets were sold? ";
    cin >> ticA;

    cout << "How many Class B tickets were sold? ";
    cin >> ticB;

    cout << "How many Class C tickets were sold? ";
    cin >> ticC;

    //perform calculation
    totalIncome = ticA * 15 + ticB * 12 + ticC * 9;

    //format output and display result
    cout << showpoint << setprecision(2) << fixed;
    cout << "Income generated: $" << totalIncome;

    //return 0 to mark successful termination
    return 0;
}