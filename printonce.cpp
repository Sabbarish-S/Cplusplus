#include <bits/stdc++.h>
using namespace std;

string modified(string s)
{
    stack<char> st;
    for(char str: s)
    {
        if(!st.empty() && st.top() == str) continue;
        st.push(str);
    }

    string result = "";

    while(!st.empty())
    {
        result = st.top()+result;
        st.pop();
    }
    return result;


    

}

int main()
{
    cout<<"Enter the String :" << endl;
    string s;
    cin>>s;
    cout<<"The modified string is : "<<modified(s);
}