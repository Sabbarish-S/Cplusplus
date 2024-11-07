#include <bits/stdc++.h>
using namespace std;

// number pattern

int numpattern (int rows)
{
    int count =1;
    for (int row = 0; row <= rows; row++)
    {
        for (int column =1; column <=row; column++)
        {
            cout << " "<< count;
            count++;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows to process :" << endl;
    cin >> n;
    numpattern(n);
}