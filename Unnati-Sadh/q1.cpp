#include <iostream>
using namespace std;
 
int smallestSubWithSum(int arr[], int n, int x)
{
    // Initialize current sum and minimum length
    int curr_sum = 0, min_len = n + 1;
 
    // Initialize starting and ending indexes
    int start = 0, end = 0;
    while (end < n) 
    {
        
        while (curr_sum <= x && end < n)
            curr_sum += arr[end++];
 
       
        while (curr_sum > x && start < n) 
        {
            
            if (end - start < min_len)
                min_len = end - start;
 
            
            curr_sum -= arr[start++];
        }
    }
    return min_len;
}
