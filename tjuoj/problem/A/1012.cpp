#include <iostream>

using namespace std;

int main()
{
    int c;
    string out = "";
    cin >> c;
    switch (c)
    {
    case 1:
        out = "huan ying ben ke xin sheng ru xue";
        break;
    case 2:
        out = "huan ying hui xiao";
        break;
    case 3:
        out = "huan ying yan jiu sheng xin sheng ru xue";
        break;
    case 4:
        out = "huan ying hui xiao";
        break;
    }
    cout << out << endl;
}
