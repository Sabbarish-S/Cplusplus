#include <bits/stdc++.h>
using namespace std;

class addarr
{
    public:
    int arr_elements(int arr[], int x, int y)
    {
        return arr[x] + arr[y];
    }
};

int main()
{
    addarr ar;
    int n;
    cout<<" array size"<<endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x, y;
    cout << "Enter two indices to add: ";
    cin >> x >> y;
    cout <<"Two Sum arrays " << x << " and " << y << "\n" << ar.arr_elements(a ,x, y) << endl;

}