#include <bits/stdc++.h>
using namespace std;
int main()
{
    int myArray[] = {1, 2, 3, 4, 5};
    int *ptr = myArray;
    int size = sizeof(myArray) / sizeof(myArray[0]);
    for (int i = 0; i < size; ++i)
    {
        cout << "Element " << i << ": " << *ptr <<endl;
        ++ptr;
    }

    return 0;
}
