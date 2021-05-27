#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    char a;
    int cnt=0;
    string s;
    getline(cin,s);
    cout<<"which charracter to check";
    cin>>a;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==a)
        cnt++;
    }
    cout<<"frequency is"<<cnt;
    return 0;
}