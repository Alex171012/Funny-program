#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j < n * 2 - 2 * i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << j;
            if (j != i)
            {
                cout << ' ';
            }
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << ' ' << j;
        }
        cout << "\n";
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 2 * (i + 1); j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < n - i; ++j)
        {
            cout << j;
            if (j != n - 1 -i)
            {
                cout << ' ';
            }
        }
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << ' ' << j - 1;
        }
        cout << "\n";
    }
} 
