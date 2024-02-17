 #include<bits/stdc++.h>
 using namespace std;




 int main()
 {
    int num1, num2,gcd,findGCD;

    cout << "Enter first number: ";
    cin >> num1;

cout << "Enter second number: ";
cin >> num2;

    while (num2 != 0)
        {
        int temp = num2;
        num2 = num1% num2;
        num1 = temp;


     gcd = findGCD(num1, num2);
     }

    cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd<<endl;

    return 0;
}
