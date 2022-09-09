#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> A >> B >> C;
        int total = A + B + C;
        if (total >= 100 && A >= 10 && B >= 10 && C >= 10)
        {
            cout << "PASS" << endl;
        }
        else
        {
            cout << "FAIL" << endl;
        }
    }
    return 0;
}