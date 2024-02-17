#include <bits/stdc++.h>
using namespace std;
struct Rectangle
{
    double width;
    double height;
};

int main()
{

    Rectangle myRectangle;


    myRectangle.width = 5.0;
    myRectangle.height = 10.0;
    cout << "Rectangle Properties:" << endl;


    cout << "Width: " << myRectangle.width << endl;
    cout << "Height: " << myRectangle.height << endl;

    return 0;
}

