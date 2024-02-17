#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int age;
    cout<<"Enter age:";
    cin>>age;

    double height;
    cout<<"Enter height:";
    cin>>height;


    if (age>=10&&height>=1.4)
        cout <<"can ride roller coaster";
    else
        cout<<"no ride";
    return 0;
}
