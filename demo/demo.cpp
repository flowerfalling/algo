#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 2;
    printf("%d %d\n", i * 100, i++);
    printf("%d %d\n", i++, i * 100);
}