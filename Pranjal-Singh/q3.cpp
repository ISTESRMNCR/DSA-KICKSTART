 #include<iostream>
using namespace std;
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