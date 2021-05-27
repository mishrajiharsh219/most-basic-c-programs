#include <iostream>

using namespace std;
int main()
{
    int n, k, i, j;
    cout << "enter the number of rows ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        for (j = n; j > i; j--)
        {
            cout << " ";
        }
        for (k = 1; k < i * 2; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}