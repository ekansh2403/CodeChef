#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    if ((N >= 2 && N <= 1000) && (A >= 1 && A <= 1000) && (B >= 1 && B <= 1000) && (N >= (A + B)))
    {

        cout << (N - A) << " " << (N - A) - B << endl;
    }
    return 0;
}
