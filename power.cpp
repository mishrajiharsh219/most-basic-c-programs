#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,pow=1;
    cout<<"give number";
    cin>>n;
    cout<<"give power";
    cin>>m;
    for (int i = 0; i <m ; i++)
    {
        pow=pow*n;
    }
    cout<<pow;
    return 0;
}