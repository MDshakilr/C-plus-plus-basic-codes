#include <bits/stdc++.h>
using namespace std;
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int main()
{
    int a = 5, b = 8;
    cout << "The maximum of " << a << " and " << b << " is: " << max(a, b) << endl;
    return 0;
}
