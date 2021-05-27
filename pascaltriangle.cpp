#include <bits/stdc++.h>
using namespace std;
long fact(long n)
{
    int i, fact = 1;
    for (i = n; i > 1; i--)
        fact *= i;
    return fact; 
    }
long nCr(long n, long r)
{    
    return long(fact(n) / (fact(n - r)*fact(r))); //generate result of nCr
}

int main()
{
   int n;
   cin>>n;
   for (int i = 0; i <n; i++)
   {
       for (int j = 0; j < (n - i - 1); j++)
          cout <<" ";
       for (int j = 0; j < (i + 1); j++)
           cout <<nCr(i, j) <<  " ";
       cout << endl;
   }
    return 0;
}