#include <bits/stdc++.h>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle() : radius(0.0) {}

    void setRadius(double r)
    {
        if (r >= 0)
        {
            radius = r;
        }
        else
        {
            cout << "Invalid radius. Setting radius to 0." <<endl;
            radius = 0.0;
        }
    }
    double Area()
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    Circle myCircle;
    myCircle.setRadius(5.0);
    cout << "Area of the circle: " << myCircle.Area() <<endl;

    return 0;
}
