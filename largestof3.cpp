#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if((a>b)&&(a>c))
cout<<"A is largest"<<a;
else if((b>a)&&(b>c))
cout<<"B is largest"<<b;
else
cout<<"LARGEST is"<<c;
}