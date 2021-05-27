#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cout<<"write the number to find the factors";
cin>>n;
for (int i = 1; i <=n; i++)
{
    if(n%i==0)
    cout<<i<<" ";
}
    
    return 0;
}