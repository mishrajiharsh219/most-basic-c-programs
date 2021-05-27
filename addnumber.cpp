#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
cout<<"how many number you want to add";
cin>>n;
for (int i = 0; i < n; i++)
{
    int m;
    cin>>m;
    sum=sum+m;
}
cout<<"sum is"<<"\n"<<sum;


}