#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int r;
    cin >> r;
    printf("%lf %lf", PI * r * r, 2 * PI * r);
}
