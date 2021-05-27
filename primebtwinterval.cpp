#include <bits/stdc++.h>
using namespace std;

int isprime(int n){
    int m=0;
for (int i = 2; i < n; i++)
{
    if(n%i==0)
    m++;
}
if(m==0)
return 1; 
else 
return 0;
}


int main()
{int a,b,c;
    cout<<"give two integers for interval";
    cin>>a>>b;
    for (int i = a; i <=b; i++)
    {
        if(isprime(i))
         cout<<i<<" ";
    }
    return 0;
}