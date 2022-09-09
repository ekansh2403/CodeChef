#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cout << "Enter number of test cases:";
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> X >> Y;

        if (X < Y)
        {
            cout << "FIRST" << endl;
        }
        else if (X == Y)
        {
            cout << "ANY" << endl;
        }
        else
        {
            cout << "SECOND" << endl;
        }
    }

    return 0;
}
