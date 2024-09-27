#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t, m, n, o1, o2;
    cin >> t;
    while (t--)
    {
        o1 = o2 = 0;
        cin >> m >> n;
        for (int i = m; i <= n; i++)
            if (i & 1)
                o1 += pow(i, 3);
            else
                o2 += pow(i, 2);
        printf("%d %d\n", o2, o1);
    }
}
