#include <bits/stdc++.h>
using namespace std;

// left angled triangle

int triangle (int  n)
{
     for (int i = n; i > 0; i--)
     {
        for (int j=1; j <=n; j++)
        {
            if (j >=i){
            cout << "*";
            }
            else{
            cout << " ";
            }
        }
        cout << endl;

     }
}

int main (){
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;
    triangle(n);
    return 0;
 
}