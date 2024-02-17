#include <bits/stdc++.h>
using namespace std;
const double PI = 3.141592653589793;
double area(double length, double width)
{
    return length * width;
}

double area(double radius)
{
    return PI * pow(radius, 2);
}

int main()
{

    double rectangleArea = area(5.0, 3.0);
    double circleArea = area(2.5);

    cout << "Area of rectangle: " << rectangleArea <<endl;
    cout << "Area of circle: " << circleArea <<endl;

    return 0;
}
