#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j>i; j--)
        {
            cout<<" ";
        }
        for (int k = i; k< i*2; k++)
        {
            cout<<k;
        }
        for (int l = i*2-2; l>=i ; l--)
        {
            cout<<l;
        }
        
        cout<<"\n";
    }
    
    return 0;
}