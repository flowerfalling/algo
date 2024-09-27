#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long n, sum = 0;
    cin >> n;
    int arr[n];
    for (int &i : arr)
    {
        cin >> i;
        sum += i;
    }
    sort(arr, arr + n);
    printf("%d %d %ld\n", arr[0], arr[n - 1], sum);
}
