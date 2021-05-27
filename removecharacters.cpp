#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   for (int i = 0; i <s.size(); i++)
   {
       if ((s[i] >= char(65)) && (s[i] <= char(122)))
       continue;
       else
       s[i]='\0';
   }
   cout<<s;
    
    return 0;
}