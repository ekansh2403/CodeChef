#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> X >> Y;
        if (X < Y)
        {
            Y = Y - X;
            cout << Y << endl;
        }
        else if (Y < X)
        {
            X = X - Y;
            cout << X << endl;
        }
        else if (X == Y)
        {
            X = X - Y;
            cout << X << endl;
        }
    }

    return 0;
}