#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
if(n>0){
 int s=n*fact(n-1);
 return s;}
else
return 1;
}
int main()
{
    int n;
    cin>>n;
   int m=fact(n);
   cout<<m;
    return 0;
}