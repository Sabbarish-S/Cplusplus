#include <bits/stdc++.h>
using namespace std;

// Function to check the presence of the specified element in the array at the specified index differ at adjacent key value
// k - the adjacent key difference between the elementa
// n - the size of the array 
// x - the element to searched
int search_element(int arr[], int n, int x, int k){
    
    // trave from the left most element of the array

    int i = 0;
    while (i < n)
    {
        //if element x found at index i
        if (arr[i] == x)
        {
            return i;
        }

        // jump the difference
        i = i + max(1, abs((arr[i]-x)/k));
    }

    cout << "number " << x << "not present in the array";
    return -1;
}

int main()
{
    // int arr[] = {1, 3, 5, 7, 9, 11};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int x = 11;
    // int k = 2;
    //get the array from the user
    int n;
    cout << "Enter the size of the array"<<endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array"<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to be searched"<<endl;
    cin >> x;
    int k;
    cout << "Enter the adjacent key difference between the elements"<<endl;
    cin >> k;
    cout << "ELement "<< x << "present at the index" << search_element(arr, n,x,k);
}