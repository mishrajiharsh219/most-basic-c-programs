// A leap year is exactly divisible by 4 except for century years (years ending with 00).
// The century year is a leap year only if it is perfectly divisible by 400.

#include<iostream>
using namespace std;
int main(){
int year;
cout<<"enter the year";
cin>>year;
if((year%4==0)&&(year%100!=0))
cout<<"year is leap year";
else if((year%100==0)&&(year%400==0))
cout<<"year is leap year";
else 
cout<<"not a leap year";

}