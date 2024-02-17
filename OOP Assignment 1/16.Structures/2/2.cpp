#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x;
    double y;
};

void printPoint(const Point& p)
{
    cout << "(" << p.x << ", " << p.y << ")";
}

int main()
{

    Point myPoint = {3.5, 2.0};
    cout << "My point is located at ";
    printPoint(myPoint);

    return 0;
}
