#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
     cout<<"enter number to find factorial";
     cin>>n;
     int fact=1;
     for (int i = 1; i <=n; i++)
     {
         fact=fact*i;
     }
         cout<<"factorial is"<<fact;
    return 0;
}