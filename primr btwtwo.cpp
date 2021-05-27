#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"give intervals";
    cin>>a>>b;
    for (int i = a; i <=b; i++)
    {
        for (int j = 2; j < n; j++)
    {
        if(i%j==0)
        cout<<i<<" ";
    }
    
    }
    
    return 0;
}