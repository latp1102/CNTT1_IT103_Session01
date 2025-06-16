#include <stdio.h>

int main() {
    int arr[] = {5,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i< n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];;
                arr[j + 1] = temp;
            }
        }
    }
    printf("mang sau sap xep: ");
    for (int i = 0; i< n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
// do phuc tap thoi gian: O(n*n)
// khong gian: O(1)
