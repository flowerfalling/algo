#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n)
        {
            int arr[n];
            for (int &i : arr)
                cin >> i;
            sort(arr, arr + n);
            printf("%.2lf\n", accumulate(arr + 1, arr + n - 1, 0) / double(n - 2));
        }
        else
            break;
    }
}
