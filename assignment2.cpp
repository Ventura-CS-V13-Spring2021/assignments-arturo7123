#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables needed
    double celsius, fahrenheit;

    //prompt user to enter input then read
    cout << "Enter temperature in degrees Celsius: ";
    cin >> celsius;

    //calculate temperature in Fahrenheit
    fahrenheit = (9.0/5.0)*celsius + 32;

    //format output then display
    cout << setprecision(1) << fixed;
    cout << celsius << "C is equivalent to ";
    cout << fahrenheit << "F\n";

    //return 0 to mark successful termination
    return 0;
}