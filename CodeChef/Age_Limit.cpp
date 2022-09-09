#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, A;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> X >> Y >> A;
        if ((A >= X) && (A < Y))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}