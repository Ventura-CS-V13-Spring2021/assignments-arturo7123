#include <iostream>
#include <cstdlib>
#include <ctime>
#include "IntegerArray.hpp"
using namespace std;



void IntegerArray::fillUp(){
        srand(time(0));
        for (int i = 0; i <N; i++){
            numbers[i] = 1 + rand() % 100;
        }
        length = N;
}
int IntegerArray::getLength()const {
        return length;
}
int IntegerArray::getLastEle()const{
        return numbers[length - 1];
}
void IntegerArray::printAll()const{
        cout << "Array elements are: ";
        for (int i = 0; i < length; i++){
            cout << numbers[i] << " ";
        }
        cout << endl;
}
void IntegerArray::sortAsc(){
        for (int i = 0; i < length; i++){
            for (int j = i; j < length; j++){
                if(numbers[i] > numbers[j]){
                    numbers[i] = numbers[i] + numbers[j];
                    numbers[j] = numbers[i] - numbers[j];
                    numbers[i] = numbers[i] - numbers[j];
                }
            }
        }
}
void IntegerArray::removeLastEle(){
        length--;
}
void IntegerArray::appendElement(int n){
        if(length<=9){
            numbers[length] = n;
            length++;
        }
}