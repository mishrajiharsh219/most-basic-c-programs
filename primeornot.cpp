#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,count=0;
  cout<<"write number";
  cin>>n;
  for (int i = 2; i < n; i++)
  {
      if(n%i==0)
      count++;
  }
    if(count!=0)
    cout<<"not prime";
    else
    cout<<"prime";
    return 0;
}