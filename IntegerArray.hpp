#pragma once
#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H

class IntegerArray{
private:
    static const int N = 10;
    int numbers[N];
    int length = 0;
public:
    void fillUp();
    int getLength() const;
    int getLastEle() const;
    void printAll() const;
    void sortAsc();
    void removeLastEle();
    void appendElement(int n);
};


#endif