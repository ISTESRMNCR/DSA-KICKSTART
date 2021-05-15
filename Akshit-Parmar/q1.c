/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

# include <stdio.h>


int SubWithSum(int arr[], int n, int x)
{
     int min_len = n + 1;
 
     for (int i=0; i<n; i++)
     {
          int curr_sum = arr[i];
 
          if (curr_sum > x) return 1;
 
          for (int end=i+1; end<n; end++)
          {
              curr_sum += arr[end];
 
             
              if (curr_sum > x && (end - i + 1) < min_len)
                 min_len = (end - i + 1);
          }
     }
     return min_len;
     
}
int main()
{
    int arr1[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int res1 =  SubWithSum(arr1, n1, x);
    (res1 == n1+1)?printf("Not possible\n") : printf("%d",res1);
}
