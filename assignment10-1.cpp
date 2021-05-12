#include <cstdlib> 
#include <string> 
using namespace std; 
class Student 
{ 
public: Student(); 
        ~Student(); 
        void InputData(); 
        void OutputData(); 
        void ResetClasses(); 
        Student& operator =(const Student& rightSide); 
  
private: 
    string name; 
    int numClasses; 
    string *classList; 
}; 
  
#include <iostream> 
#include <iomanip> 
using namespace std; 
  
Student::Student() : name(""), numClasses(0), classList(NULL) 
{ 
} 
  
Student::~Student() 
{ 
    numClasses = 0; 
    ResetClasses(); 
    name = ""; 
} 
  
void Student::ResetClasses() 
{ 
    if (classList) { 
        delete[] classList; 
        classList = NULL; 
        numClasses = 0; 
    } 
} 
  
void Student::InputData() 
{ 
    ResetClasses(); 
    cout << "Type in student name > "; 
    getline(cin, name); 
    cout << "How many classes > "; 
    cin >> numClasses; 
    cin.ignore(2, '\n'); 
    if (numClasses > 0) { 
        classList = new string[numClasses]; 
        for (int i = 0; i<numClasses; i++) { 
            cout << "Name of class " << (i + 1) << " > "; 
            getline(cin, classList[i]); 
        } 
    } 
    cout << endl; 
} 
  
void Student::OutputData() 
{ 
    cout << "Class List: " << endl; 
    for (int i = 0; i < numClasses; i++) { 
        cout << setw(2) << right << i + 1 << ") " << classList[i] << endl; 
    } 
} 
  
Student& Student::operator =(const Student& rightSide) 
{ 
    ResetClasses(); 
    numClasses = rightSide.numClasses; 
    if (numClasses > 0) { 
        classList = new string[numClasses]; 
        for (int i = 0; i < numClasses; i++) { 
            classList[i] = rightSide.classList[i]; 
        } 
    } 
  
    return *this; 
} 
  
int main() 
{ 
  
    Student s1, s2; 
    s1.InputData(); 
    cout << "Student 1's data:" << endl; 
    s1.OutputData(); 
    cout << endl; 
    s2 = s1; 
    cout << "Student 2's data after student 1:" << endl; 
    s2.OutputData(); 
    s1.ResetClasses(); 
    cout << endl; 
    cout << "Student 1's data after:" << endl; 
    s1.OutputData(); 
    cout << endl; 
    cout << "Student 2's data:" << endl; 
    s2.OutputData(); 
    cout << endl; 
    system("pause"); 
    return 0; 
} 