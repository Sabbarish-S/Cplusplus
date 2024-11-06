#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int datatype(string t)
    {
        if (t=="Character")
        {
            return sizeof(char);
        }
        else if (t=="String")
        {
            return sizeof(string);
            
        }
        else if (t=="Integer")
        {
            return sizeof(int);
        }
        else if (t=="Double")
        {
            return sizeof(double);
        }
        else if (t=="Boolean") 
        {
            return sizeof(bool);
        }
        else if (t=="Long")
        {
            return sizeof(long);
        }
        else{
            return -1;
        }


    }

};

int main()
{
    string t;
    cout << "Enter the data type to know it's size" << endl;
    cin >> t;
    cout << endl;
    Solution ob;

    cout << ob.datatype(t) <<endl;
}
