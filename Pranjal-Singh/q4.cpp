#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    { char ch;
     int l=x.length();
     int max=l;
     int top=-1;
     int s[max];
     for(int i=0;i<l;i++)
     {
         if(x[i]=='('||x[i]=='{'||x[i]=='[')
         {s[++top]=x[i];
         continue;}
         if(top==-1)
         return false;
         switch(x[i])
         {
         case ')':
         ch=s[top];
         --top;
         if( ch== '{'||ch== '[')
         return false;
         break;
         case '}':
          ch=s[top];
         --top;
         if( ch=='['||ch=='(')
         return false;
         break;
         case ']':
          ch=s[top];
         --top;
         if( ch=='('||ch=='{')
         return false;
         break;
     }
     }
     if(top<0)
     return true;
     else 
     return false;
     }
     
    

};

// { Driver Code Starts.

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
}//driver code ends