#include <iostream>
using namespace std;

int main()
{
    int T, C;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> C;
        if (C > 20)
        {
            cout << "HOT" << endl;
        }
        else
        {
            cout << "COLD" << endl;
        }
    }
    return 0;
}