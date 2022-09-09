#include <iostream>
using namespace std;

int main()
{
    int T, X, N, EP, FS;
    cin >> T;
    if (T >= 1 && T <= 200)
    {
        for (int i = 0; i < T; i++)
        {
            cin >> X >> N;
            if ((X >= 10 && X <= 200) && (N >= 0 && N <= 10))
            {
                if (X % 10 == 0)
                {
                    EP = X / 10; // point for each test case
                    FS = EP * N;
                    cout << FS << endl;
                }
            }
        }
    }
    return 0;
}