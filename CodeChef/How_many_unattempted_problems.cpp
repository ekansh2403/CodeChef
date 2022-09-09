#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if ((X >= 1 && X <= 1000) && (Y >= 1 && Y <= 1000))
    {
        if (X >= Y)
        {
            cout << (X - Y) << endl;
        }
    }

    return 0;
}
