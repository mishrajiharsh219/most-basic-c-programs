#include <bits/stdc++.h>
using namespace std;
struct distance{
int feet;
float inch;
};
int main()
{
   struct distance frst,second,r;
   cout<<"enter first first distance";
   cout<<"enter feet";
   cin>>frst.feet;
   cout<<"enter inch";
   cin>>frst.inch;
   cout << "enter second distance";
   cout << "enter feet";
   cin >> second.feet;
   cout << "enter inch";
   cin >> second.inch;
  r.feet=frst.feet+second.feet;
   r.inch=frst.inch+second.inch;

   while (r.inch >= 12.0)
   {
       r.inch = r.inch - 12.0;
       ++r.feet;
   }    
   cout << r.feet << "'-" << r.inch << ".";
   return 0;
   }
