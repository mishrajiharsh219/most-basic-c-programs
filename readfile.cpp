#include <bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("my.txt");
    string str;
    while (getline(infile,str))
    {                       
        cout << str<< "\n";
    }
    return 0;
}