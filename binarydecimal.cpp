#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,b,c,d,e;
   int sum=0,i=0;
   cout<<"write binary for conversion";
   cin>>n;
   while(n!=0){
   m=n%10;    
   sum+=m*pow(2,i);
   n=n/10;
   i++;
   }
    cout<<sum;
    return 0;
}