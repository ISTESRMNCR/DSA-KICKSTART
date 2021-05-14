#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

vector<vector<string>> Anagrams(vector<string>& strs)
{
        vector<vector<string>> result;
        unordered_map<string, vector<string>> m;
        string temp;
 
        for(int i = 0;i < strs.size();i++){
            temp = strs[i];
            sort(temp.begin(), temp.end());
            m[temp].push_back(strs[i]);
        }
        for(auto iter = m.begin(); iter != m.end(); iter++)
            result.push_back(iter->second);  
        return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i=0;i<n;++i)
        cin>>string_list[i];
        vector<vector<string> > result= Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i=0;i<result.size();i++)
        {
            for(int j=0;j<result[i].size();j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}