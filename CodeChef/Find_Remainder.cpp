#include <iostream>
using namespace std;

int main()
{
    int T, A, B, Mod;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> A >> B;
        Mod = A % B;
        cout << Mod << endl;
    }
    return 0;
}