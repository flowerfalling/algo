#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    if (!(y % 400) || (!(y % 4) && y % 100))
        cout << "Yes";
    else
        cout << "No";
}
