#include<bits/stdc++.h>
using namespace std;
   long long convertOctalToDecimal(int octalNumber);
int main()
{
    int octalNumber;

   
   cout<<"write a number";
   cin>>octalNumber;
    int m=convertOctalToDecimal(octalNumber);
    cout<<m;
    return 0;
}

long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while (octalNumber != 0)
    {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    return decimalNumber;
}