#include <bits/stdc++.h>
using namespace std;

// RIGHT-ANGLED TRIANGLE

int triangle (int n)
{
    for (int i = 0; i <=n; i++)
    {
        for (int j =0; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    triangle(n);
    return 0;
}