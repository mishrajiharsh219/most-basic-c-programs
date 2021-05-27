#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100], b[100][100], d[100][100]={0};
    int c, r;
    int r1, c1;
    cout << "give rows and column of  matrixs";
    cin >> r;
    cin >> c;
    cout << "give rows and column of  matrixs";
    cin >> r1;
    cin >> c1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "enter a" << i + 1 << j + 1;
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "enter b" << i + 1 << j + 1;
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            for (int k = 0; k < c; ++k)
            {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            cout<<d[i][j]<<"  ";
            if (j == c1 - 1)
                cout<<"\n";
        }
    }
}