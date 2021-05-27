#include <bits/stdc++.h>
using namespace std;
int mul(int n,int m)
{int count=0;

    int nw = 1;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
        for (int i = 1; i <= count; i++)
        {
            nw = nw * m;
        }
        return nw;
    }
int main()
{
    int n,def,arm=0,count=0;
    cout<<"give number";
    cin>>n;
    def=n;

   while(n!=0)
   {
int m=n%10;
arm=arm+mul(def,m);
n=n/10;
   }
    if(arm==def)
    cout<<"armstrong";
    else
    cout<<"not armstrong";
    return 0;
}