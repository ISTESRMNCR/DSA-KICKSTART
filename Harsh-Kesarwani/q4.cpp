#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool ispar(string x)
    {
        int count1 = 0, count2 = 0, count3 = 0;
        int length = x.length();
        bool flag = true;
        if (length % 2 != 0)
        {
            flag = false;
        }
        else
        {
            char arr1[] = {'(', '[', '{'};
            char arr2[] = {')', ']', '}'};
            for (int y = 0; y < length; y++)
            {
                if (x[y] == arr1[0] || x[y] == arr2[0])
                {
                    if (x[y] == arr1[0])
                    {
                        count1++;
                    }
                    else
                    {
                        count1--;
                    }
                }

                else if (x[y] == arr1[1] || x[y] == arr2[1])
                {
                    if (x[y] == arr1[1])
                    {
                        count2++;
                    }
                    else
                    {
                        count2--;
                    }
                }

                else
                {
                    if (x[y] == arr1[2])
                    {
                        count3++;
                    }
                    else
                    {
                        count3--;
                    }
                }
            }
            if (count1 != 0 || count2 != 0 || count3 != 0)
            {
                flag = false;
            }
        }
        return flag;
    }
};

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}