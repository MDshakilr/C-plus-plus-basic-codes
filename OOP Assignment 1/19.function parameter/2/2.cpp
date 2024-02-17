#include <bits/stdc++.h>
using namespace std;
float area(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    float base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    float result = area(base, height);
    cout << "The area of the triangle is: " << result << endl;

    return 0;
}
