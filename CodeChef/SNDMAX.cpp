#include <iostream>
using namespace std;

int main()
{
    int T, a, b, c;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> a >> b >> c;

        if (a > b && a < c)
        {
            cout << a << endl;
        }
        else if (a < b && a > c)
        {
            cout << a << endl;
        }
        else if (b > a && b < c)
        {
            cout << b << endl;
        }
        else if (b < a && b > c)
        {
            cout << b << endl;
        }
        else if (c < b && c > a)
        {
            cout << c << endl;
        }
        else if (c < a && c > b)
        {
            cout << c << endl;
        }
    }


return 0;
}
