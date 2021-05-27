#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n != 0)
        return n + sum(n - 1);
    else
        return n;
}
int main()
{
    int n;
    cout<<"give number";
    cin>>n;
    int s=sum(n);
    cout<<s;
    return 0;
}