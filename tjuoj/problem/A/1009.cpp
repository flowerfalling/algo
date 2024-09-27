#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979;

int main()
{
    double a, b, x;
    cin >> a >> b >> x;
    double c = x * PI / 180;
    double s = a * b * sin(c) / 2;
    printf("%.4lf\n", s);
    printf("%.4lf\n", a + b + sqrt(a * a + b * b - 2 * a * b * cos(c)));
    printf("%.4lf\n", 2 * s / a);
}
