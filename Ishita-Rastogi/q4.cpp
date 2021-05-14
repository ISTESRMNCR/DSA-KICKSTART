#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
   bool ispar(string x)
{
    // Your code here
    stack<char> s;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == '(' || x[i] == '{' || x[i] == '[')
            s.push(x[i]);
        else
        {
            if (s.empty())
                return false;

            char c = s.top();
            if (x[i] == ')' && c != '(')
                return false;
            else if (x[i] == '}' && c != '{')
                return false;
            else if (x[i] == ']' && c != '[')
                return false;
            s.pop();
        }
    }
    return s.empty();
} 
};

int main()
{
    int t;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        Solution obj;
        if(obj.ispar(a))
        cout<<"balanced"<<endl;
        else
        cout<<"not balanced"<<endl;
    }
}