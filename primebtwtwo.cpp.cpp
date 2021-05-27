#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,count=0;
    cout<<"give intervals";
    cin>>a>>b;
   while(a<=b){
   for (int i = 2; i < a; i++)
   {
if(a%i==0)
count++;
   }
if(count==0)
cout<<a<<" ";
a++;
count=0;
   }
    return 0;
}