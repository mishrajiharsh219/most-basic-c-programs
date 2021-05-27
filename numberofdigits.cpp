#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    int n,count=0;
    cout<<"write number to find its number of digits";
    cin>>n;
   while(n>0){
count++;
n=n/10;
   }
    cout<<"no of digits are"<<count;
    return 0;
}