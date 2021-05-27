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

int main()
{
    int n;
    cout<<"give number";
    cin>>n;
    for (int i = 1; i <=n/2; i++)
    {
        for (int j = n; j >=n/2; j--)
        {
            if((isprime(i))&&(isprime(j)))
            {
            
                if((i+j)==n)
                cout<<i<<" + "<<j<<endl;
            }
        }
        
    }
    
    return 0;
}

// for (i = 2; i <= n / 2; ++i)
// {
//     // condition for i to be a prime number
//     if (checkPrime(i) == 1)
//     {
//         // condition for n-i to be a prime number
//         if (checkPrime(n - i) == 1)
//         {
//             printf("%d = %d + %d\n", n, i, n - i);
//             flag = 1;
//         }
//     }
// }