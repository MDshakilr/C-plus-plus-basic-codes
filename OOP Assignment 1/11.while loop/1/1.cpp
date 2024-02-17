#include <bits/stdc++.h>
using namespace std;

int main()

{
    int number;
    unsigned long long factorial = 1;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." <<endl;
    }
    else
    {
        while (number > 0)
        {
            factorial *= number--;
        }
        cout << "Factorial: " << factorial <<endl;
    }

    return 0;
}
