#include <iostream>

using namespace std;

int main()
{
    int n, pos, neg, zero;
    double d;
    while (true)
    {
        pos = neg = zero = 0;
        cin >> n;
        if (!n)
            break;
        while (n--)
        {
            cin >> d;
            if (d < 0)
                neg++;
            else if (d > 0)
                pos++;
            else
                zero++;
        }
        printf("%d %d %d\n", neg, zero, pos);
    }
}
