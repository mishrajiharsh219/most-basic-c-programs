#include <bits/stdc++.h>
using namespace std;
struct time{
int hour;
int min;
int sec;
}start,stop,diff;
int main()
{
  cout<<"enter the start time";
  cout<<"enter hour,min,sec";
  cin>>start.hour>>start.min>>start.sec;
  cout<<"enter the stop time";
  cin>>stop.hour>>stop.min>>stop.sec;
  while (stop.sec > start.sec)
  {
      --start.min;
      start.sec += 60;
  }
  while (stop.min > start.min)
  {
      --start.hour;
      start.min += 60;
  }
 diff.hour = start.hour - stop.hour;
  diff.min=start.min-stop.min;
  diff.sec=start.sec-stop.sec;

  cout<<"time difference:"<<endl;

  cout<<diff.hour<<":"<<diff.min<<":"<<diff.sec;
    
    return 0;
}