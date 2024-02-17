#include <bits/stdc++.h>
using namespace std;
int calculateSum(int n)
{

    if (n == 0)
    {
        return 0;
    }

    else
    {
        return n + calculateSum(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int sum = calculateSum(n);
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}
