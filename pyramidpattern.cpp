#include <bits/stdc++.h>
using namespace std;

int pyramid (int n)
{
    for (int i =n; i > 0; i--)
    {
        for (int j =1;  j <= n; j++)
        {
            if ( j>= i)
            {
                cout << "* ";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int c;
    cout << "Enter a number: "<<endl;;
    cin >> c;
    pyramid(c);
    return 0;

    
}