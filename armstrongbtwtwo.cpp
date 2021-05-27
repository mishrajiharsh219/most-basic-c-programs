#include <bits/stdc++.h>
using namespace std;

int armst(int n){
    int  count = 0, m,sum=0;
    int def=n;
    int def1=n;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    while (def != 0)
    {
        m = def % 10;
        sum = sum + pow(m, count);
        def = def / 10;
    }
    if(sum==def1)
    return 1;
    else 
    return 0;
}

int main()
{
    cout<<"write interval";
    int a,b;
    cin>>a>>b;
for (int i = a; i <= b; i++)
{
 if(armst(i))
 cout<<i<<" ";
}
    return 0;
}