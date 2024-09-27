#include <iostream>

using namespace std;

int main()
{
    int s;
    string out = "Score is error!";
    cin >> s;
    if (90 <= s && s <= 100)
        out = "A";
    else if (80 <= s && s <= 89)
        out = "B";
    else if (70 <= s && s <= 79)
        out = "C";
    else if (60 <= s && s <= 69)
        out = "D";
    else if (0 <= s && s <= 59)
        out = "E";
    cout << out << endl;
}
