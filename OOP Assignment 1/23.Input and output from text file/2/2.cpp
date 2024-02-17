#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream outputFile("squares.txt");
    if (!outputFile.is_open())
    {
        cerr << "Error: Could not open the file for writing." <<  endl;
        return 1;
    }
    for (int i = 1; i <= 10; ++i)
    {
        int square = i * i;
        outputFile << square <<  endl;
    }
    outputFile.close();
    ifstream inputFile("squares.txt");

    if (!inputFile.is_open())
    {
        cerr << "Error: Could not open the file for reading." <<  endl;
        return 1;
    }
    cout << "Contents of squares.txt:" <<  endl;
    int value;
    while (inputFile >> value)
    {
        cout << value <<  endl;
    }
    inputFile.close();
    return 0;
}
