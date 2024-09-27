#include <iostream>

using namespace std;

int main()
{
    int s;
    cin >> s;
    printf("%d:%d:%d", s / 3600, s % 3600 / 60, s % 60);
}
