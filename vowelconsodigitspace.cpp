#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int vowel=0,connst=0,digit=0,whit=0,spec=0;
  getline(cin,s);
  for (int i = 0; i < s.size(); i++)
  {
      if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
      {
          vowel++;
      }
      else if((s[i]>=char(65))&&(s[i]<=char(122)))
      connst++;
      else if((s[i]>=48)&&(s[i]<=57))
      digit++;
      else if(s[i]==' ')
      whit++;
      else
      spec++;
  }
  cout<<"vowel are"<<vowel<<endl;
  cout<<"consonents are"<<connst<<endl;
  cout<<"whitespaces are"<<whit<<endl;
  cout<<"digits are"<<digit<<endl;
  cout<<"special are"<<spec<<endl;
    
    return 0;
}