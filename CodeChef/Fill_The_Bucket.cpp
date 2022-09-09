#include <iostream>
using namespace std;

int main()
{
    int T, K, X;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> K >> X;
        if (K >= X)
        {
            K = K - X;
            cout << K << endl;
        }
    }
    return 0;
}
