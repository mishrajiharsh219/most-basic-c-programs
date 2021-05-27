// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     int a[100];
//     a[0]=0;
//     a[1]=1;
//     cout<<"Write number till fibonacci";
//     cin>>n;
//     cout << a[0] << " " << a[1];
//     for (int i = 2; i < 100; i++)
//     {
//         a[i]=a[i-1]+a[i-2];
       
//         if(a[i]>n)
//         break;
//         else
//             cout << a[i] << " ";
//     }
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"write number for fibonaaci";
    cin>>n;
    int fib=0;
    int a[1000];
   a[0]=0;
   a[1]=1;
   cout<<a[0]<<" "<<a[1]<<" ";
    for (int i = 2; i <n; i++)
    {  
        
        a[i]=a[i-1]+a[i-2];
        cout<<a[i]<<" ";
}
    return 0;
}