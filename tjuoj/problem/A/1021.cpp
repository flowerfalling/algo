#include <iostream>

using namespace std;

int main()
{
    int i, n;
    n = 0;
    while (++n)
    {
        cin >> i;
        if (i)
            printf("Case %d: %d\n", n, i);
        else
            break;
    }
}
