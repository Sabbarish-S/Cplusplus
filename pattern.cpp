#include <bits/stdc++.h>
using namespace std;

// rectangular pattern

int rectangle (int r, int c)
{
    // r is the number of rows in the rectangle
    for (int i =0 ; i < r ; i++){
        // c is the number of columns in the rectangle
        for (int j=0; j<c; j++ ){
            cout << "*";
        }
        cout << endl;
    }
   
}

int main(){
    //get the number of rows and columns from the user's input
    int r, c;
    cout << "Enter the number of rows: "<< endl;
    cin >> r;
    cout << "Enter the number of columns: " << endl;
    cin >> c;

    rectangle(r, c);
}