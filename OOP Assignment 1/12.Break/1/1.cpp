#include <bits/stdc++.h>
using namespace std;


int main()
 {
    int number;

    while (true) {
        cout << "Enter a number : ";
        cin >> number;

        if (number == -1)
            {
            cout << "Exiting the program";
            break;
        }


        cout << "You entered: " << number << "\n";
    }

    return 0;
}
