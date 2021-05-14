#include <iostream>
#include <vector>
#include <unordered_map>
#include <iterator>
#include <string>
using namespace std;

vector<vector<string> > Anagrams(vector<string> &string_list)
{
    int length = string_list.size();
    vector<vector<string> > result;
    unordered_map<string, vector<string> > um;
    unordered_map<string, vector<string> >::iterator itr;
    for (int x = 0; x < length; x++)
    {
        string s = string_list[x];
        sort(s.begin(), s.end());
        um[s].push_back(string_list[x]);
    }
    for (itr = um.begin(); itr != um.end(); itr++)
    {
        result.push_back(itr->second);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin >> string_list[i];
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
