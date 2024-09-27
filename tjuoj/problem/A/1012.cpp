#include <iostream>

using namespace std;

int main()
{
    int c;
    string out[4] = {
        "huan ying ben ke xin sheng ru xue",
        "huan ying hui xiao",
        "huan ying yan jiu sheng xin sheng ru xue",
        "huan ying hui xiao"};
    cin >> c;
    cout << out[c - 1] << endl;
}
