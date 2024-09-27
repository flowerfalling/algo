#include <iostream>

using namespace std;

int main()
{
    int i, a, b;
    cin >> i;
    a = int(!(i % 2));
    b = int(i > 4 && i <= 12);
    printf("%d %d %d %d\n", a && b, a || b, a ^ b, !(a || b));
}
