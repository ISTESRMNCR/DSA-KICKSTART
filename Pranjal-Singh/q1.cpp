#include <iostream>
using namespace std;

int sb(int A[], int n, int x)
    {
     int c=0;
    int sum=0; int b; int f=0; int l;
for(int i=n-1;i>=0;i--)
{ b=(n-1)-i;
 for(int j=0;j<=i;j++)
 {
     for(int k=c;k<=c+b;k++)
     {
         sum=sum+A[k];
     }
     if(sum>x)
     {
         f=1;
         break;
     }
     sum=0;
     c++;
 }
 if(f==1)
 break;
 c=0; sum=0;
 }   
 if(f==1)
 {
     l=b+1;
     return l;
 }   
  }