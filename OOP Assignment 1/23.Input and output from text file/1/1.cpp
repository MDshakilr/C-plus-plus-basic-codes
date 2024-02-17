#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream inputFile("input.txt");
    if (!inputFile.is_open())
    {
        cerr << "Error opening the file 'input.txt'" << endl;
        return 1;
    }
    string line;
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }
    inputFile.close();

    return 0;
}
