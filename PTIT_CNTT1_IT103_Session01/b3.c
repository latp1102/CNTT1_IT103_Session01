#include <stdio.h>
#include <stdlib.h>

int* mallocArray(int n) {
    int* arr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }
    return arr;
}
int main() {
    return 0;
}
// do phuc tap O(n)