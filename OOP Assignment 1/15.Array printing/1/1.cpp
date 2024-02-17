#include <bits/stdc++.h>
using namespace std;

int main()
{

    int myArray[6] = {1, 2, 3, 4, 5, 6};


    cout << "Original Array: ";
    for (int i = 0; i < 6; ++i)
    {
        std::cout << myArray[i] << " ";
    }
    cout << endl;


    reverse(myArray, myArray + 6);

    cout << "Reversed Array: ";
    for (int i = 0; i < 6; ++i)
    {
        std::cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
