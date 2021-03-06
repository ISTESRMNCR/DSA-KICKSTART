#include <iostream>
using namespace std;

class Solution
{
public:
    int sb(int arr[], int n, int x)
    {
        int sum = 0, length = n + 1;
        int front = 0, end = 0;
        while (end < n)
        {
            while (sum <= x && end < n)
            {
                sum = sum + arr[end];
                end++;
            }
            while (sum > x && front < n)
            {
                int minimunLength = end - front;
                if (minimunLength < length)
                {
                    length = minimunLength;
                }
                sum = sum - arr[front];
                front++;
            }
        }
        return length;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.sb(a, n, x) << endl;
    }
    return 0;
}