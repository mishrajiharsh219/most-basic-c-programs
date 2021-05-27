#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){
while(a!=0){
return a*pow(a,b-1);
}
}
int main()
{
    int n,m,a;
    cout<<"give number";
    cin>>n;
    cout<<"give power";
    cin>>m;
   a = power(n,m);
   cout<<a;
    return 0;
}
