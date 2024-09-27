#include <iostream>

using namespace std;

int main()
{
    int m, n, i;
    long long o;
    cin >> m;
    while (m--)
    {
        o = 1;
        cin >> n;
        while (n--)
        {
            cin >> i;
            if (i & 1)
                o *= i;
        }
        cout << o << endl;
    }
}
