#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }

    int curr = 0;
    int prev2= 0;
    int prev1 = 1;

    for(int i = 2; i<= n; i++)
    {
        curr = prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return curr;
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;

}