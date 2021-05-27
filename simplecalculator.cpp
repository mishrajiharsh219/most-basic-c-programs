#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c,d,e;
   char ch;
   cout<<"write two numbers";
   cin>>a>>b;
   cout<<"what operation";
   cin>>ch;
   switch (ch)
   {
   case '+':
   cout<<"sum is"<<a+b;
       break;
   case '-':
   cout<<"difference is"<<a-b;
       break;
    case '*':
    cout<<"multiply is"<<a*b;
        break;
    case '%':
    cout<<"remainder is "<<a%b;
       break;
       
   default:cout<<"not right operation";
       break;
   }
    
    return 0;
}