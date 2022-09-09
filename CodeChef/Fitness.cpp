#include <iostream>
using namespace std;

int main()
{
    int T, X, TD, week;
    cin >> T;
    if (T >= 1 && T <= 10)
    {
        for (int i = 1; i <= T; i++)
        {
            cin >> X;
            if (X >= 1 && X <= 10)
            {
                TD = X * 2;
                week = TD * 5;
                cout << week << endl;
            }
        }
    }

    return 0;
}
