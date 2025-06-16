#include <stdio.h>

int main() {
    int arr[] = {1,3,2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x =1;
    int count = 0;;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("phan tu %d xat hien %d lan ",x, count);
    return 0;
}
// do phuc tap tgian: O(n)
// khong gian: O(1)