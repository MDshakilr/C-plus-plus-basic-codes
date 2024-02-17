#include <bits/stdc++.h>
using namespace std;
int main()
{

    int myInteger = 42;
    float myFloat = 3.14;
    char myChar = 'A';


    int* intPointer = &myInteger;
    float* floatPointer = &myFloat;
    char* charPointer = &myChar;

    cout << "Address of myInteger: " << intPointer << endl;
    cout << "Address of myFloat: " << floatPointer << endl;
    cout << "Address of myChar: " << static_cast<void*>(charPointer) <<endl;

    return 0;
}
