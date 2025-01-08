#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a; //Value in the address
    int *pointer; //Pointer address
    cout << "Enter a integer" << endl;
    cin >> a;
    pointer = &a;
    cout << "The Value " <<a<<" is stored at the address - " << pointer << endl;


}