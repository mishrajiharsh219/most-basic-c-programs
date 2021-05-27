#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a[100],b,c,sum=0;
   cout<<"enter total numbers to find average";
  cin>>b;
   for (int i = 0; i < b ; i++)
   {   cout<<"enter";
       cin>>a[i];
   }
   for (int i = 0; i <b; i++)
   {
       sum=sum+a[i];
   }
  c=sum/b;
  cout<<c;
    return 0;
}