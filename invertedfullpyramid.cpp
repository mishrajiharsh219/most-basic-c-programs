#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int def=n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <=def*2-1; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
        def--;
    }   
    return 0;
}