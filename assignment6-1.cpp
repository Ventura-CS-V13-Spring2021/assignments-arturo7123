#include <iostream>
#include "IntegerArray.cpp"
using namespace std;

int main(){
    IntegerArray N;

    N.fillUp();
    N.printAll();
    cout << "Current Length is : " << N.getLength() << endl<< endl;

    cout << "After sorting -> " << endl;
    N.sortAsc();
    N.printAll();

    cout << "\nRemoving Last Element -> " << endl;
    N.removeLastEle();
    cout << "Current Length is -> " << N.getLength() << endl;
    N.printAll();


    cout << "\nAppend the Element -> " << endl;
    N.appendElement(100);
    cout << "Current Length is : " << N.getLength() << endl;
    N.printAll();



    return 0;
}