#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,rev=0;
cout<<"give number";
cin>>n;
int def=n;
while(n!=0)
{
int m=n%10;
rev=rev*10+m;
n=n/10;
}
cout<<rev;
if(def==rev){
cout<<"palindrome";}
else
cout<<"not palindrome";
    return 0;
}