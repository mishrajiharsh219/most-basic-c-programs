#include <bits/stdc++.h>
using namespace std;

int main()
{
   int gcd=1;
    int a,b,c;
    cout<<"enter two numbers";
    cin>>a>>b;
    if(a>b)
    c=a;
    else c=b;
    for (int i = 1; i <=c; i++)
    {
        if((a%i==0)&&(b%i==0))
       {if(i>gcd)
           gcd=i;
       }
       
    }
    cout<<"gcd is "<<gcd;
    cout<<"lcm is"<<(a*b)/gcd;

    return 0;
}