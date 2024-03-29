#include    <iostream>
using namespace std;
void makebinary(int [], int);
void printbinary(int [], int);
void count0cluster(int [], int);
int main()
{
    const int SIZE = 20;
    int     binary[SIZE];

    srand(time(0));
    makebinary(binary, SIZE);
    printbinary(binary, SIZE);
    count0cluster(binary, SIZE);
}
void makebinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        num[i] = rand() % 2;
}
void printbinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        cout << num[i] << " ";
    cout << endl;
}
void count0cluster(int bin[], int size)
{ int count = 0;
  bool chata = true;
  for(int i = 0; i<size; ++i){
    if(bin[i]== 0 && chata){
      count++;
      chata=false;
    }
    else if(bin[i]==1){
      chata = true;
  }
  }
cout<<"Count of cluster: "<<count;
}


// Fonund the same code as others
// void count0cluster(int bin[], int size)
// { int count = 0;
//   bool chata = true;
//   for(int i = 0; i<size; i++){
//       if(bin[i]==0 && chata){
//           count++;
//           chata=false;
//       }
//       else if(bin[i]==1){
//           chata = true;
//       }
//   }
//   cout<<"Count of Cluster : " << count;
// }