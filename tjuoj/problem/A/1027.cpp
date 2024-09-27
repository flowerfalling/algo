#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n, sum = 0;
    int m;
    while (true)
    {
        sum = 0;
        cin >> n >> m;
        if (n || m)
        {
            while (m--)
            {
                sum += n;
                n = sqrt(n);
            }
            printf("%.2lf\n", sum);
        }
        else
            break;
    }
}
