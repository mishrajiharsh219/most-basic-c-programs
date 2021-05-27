#include <bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    int m;
    string data;
    ofstream outfile("my.txt");
    getline(cin,data);
    outfile<<data<<endl;
    outfile.close();
    return 0;
}