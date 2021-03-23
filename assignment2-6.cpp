// Assignment2-6

// 2-4-1
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randNum, N;
   
    ofstream ofs;
    ofs.open("data.txt");
    cout << "Enter the amount of integers : ";
    cin >> N;
    srand(time(0));
    for ( int i; i < N; i++ ) {
        randNum = rand() % 100;
        ofs << randNum << endl;
    }
    ofs.close();
}

/*
// 2-4-2
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int randNum, min, max;
    int N = 0, sum = 0;
    double average;

    ifstream ifs;

    ifs.open("data.txt");
    
    while ( ifs >> randNum ) {
        if ( N == 0 )
            min = max = randNum;
        else {
            if ( randNum < min )
                min = randNum;
            if ( max < randNum )
                max = randNum;
            }
        sum += randNum;
        N++;
    }
    average = static_cast<double>(sum) / N;

    cout << "Total integers : " << N << endl;
    cout << "Sum : " << sum << endl;
    cout << "Minimum : " << min << endl;
    cout << "Maximum : " << max << endl;
    cout << "Average : " << average << endl;
    ifs.close();
}
*/