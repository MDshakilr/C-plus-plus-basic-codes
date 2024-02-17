#include <bits/stdc++.h>
using namespace std;

int main()
{
    string myString = "Hello, World!";

    cout << "Original String: " << myString << endl;


    char charToChange = 'W';
    char replacementChar = 'C';


    size_t charIndex = myString.find(charToChange);


    if (charIndex != string::npos)
    {

        myString[charIndex] = replacementChar;

        cout << "Modified String: " << myString <<endl;
    }
    else
    {
        cout << "Character not found in the string." << endl;
    }

    return 0;
}

