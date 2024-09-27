#include <iostream>

using namespace std;

int main()
{
    string n;
    int sum;
    while (true)
    {
        sum = 0;
        cin >> n;
        if (n == "0")
            break;
        for (char c : n)
            sum += c - '0';
        cout << sum << endl;
    }
}
