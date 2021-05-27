#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    int m = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            m++;
    }
    if (m == 0)
        return 1;
    else
        return 0;
}
int isarmstrong(int n)
{int def=n,num=n;
int m,sum=0,count=0;
while(n!=0){
    n=n/10;
    count++;
}
while(num!=0){
    m=num%10;
    sum=sum+pow(m,count);
    num=num/10;
}
if(sum==def)
return 1;
else
return 0;

}
int main()
{
int a,b,c;
cout<<"write number for checking";
cin>>a;
if(isprime(a))
cout<<"prime number"<<endl;
else 
cout<<"not prime"<<endl;
if(isarmstrong(a))
cout<<"armstrong"<<endl;    
else
cout<<"not armstrong"<<endl;
    return 0;
}