#include <bits/stdc++.h>
using namespace std;
double calculateCircleArea(double radius)
{
    return 3.1416 * pow(radius, 2);
}
int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = calculateCircleArea(radius);
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    return 0;
}

