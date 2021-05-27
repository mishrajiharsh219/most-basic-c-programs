#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m[100],large;
    cout<<"give total number of numbers";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>m[i];
    }
    large=m[0];
    for (int i = 0; i < n; i++)
    {
        if(m[i]>large)
        large=m[i];
    }
    cout<<"max is"<<large;
    return 0;
}