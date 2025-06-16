#include <stdio.h>

void printDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d", i);
        i *= 2;
    }
}
int main() {
    int n;
    printDouble(n);
    return 0;
    // do phuc tap O(log n)
}
