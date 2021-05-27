#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
if(b!=0)
return gcd(b,a%b);
else
return a;
}
int main()
{
 int a,b;
 cout<<"give number";
 cin>>a>>b;
 int m=gcd(a,b);
 cout<<m; 
    return 0;
}