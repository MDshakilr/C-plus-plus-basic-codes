#include <bits/stdc++.h>
using namespace std;

int main()
{
    double weight, distance,shippingCost;

    cout << "Enter the weight of the package (kg): ";
    cin >> weight;

    cout << "Enter the distance of shipping (km): ";
    cin >> distance;




    if (weight < 5)
    {

        shippingCost = 2.5 * distance;

    }
    else if (weight < 20)
    {
        shippingCost = 5.0 * distance;
    }
    else
    {
        shippingCost = 10.0 * distance;
    }
    cout << "The shipping cost is: $" << shippingCost <<endl;

    return 0;
}
