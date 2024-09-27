#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    char c[3];
    while (true)
    {
        cin >> c;
        if (strcmp(c, "000"))
        {
            sort(c, c + 3);
            printf("%c %c %c\n", c[0], c[1], c[2]);
        }
        else
            break;
    }
}
