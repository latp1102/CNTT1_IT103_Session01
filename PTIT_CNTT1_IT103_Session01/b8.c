#include <stdio.h>

int main() {
    int arr[] = {1,2,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int soLan = 0;
    int value_pt = arr[0];
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > soLan) {
            soLan = count;
            value_pt = arr[i];
        }
    }
    printf("phan tu %d xuat hien nhieu nhat %d lan ", value_pt,soLan);
    return 0;
}
// do phuc tap thoi gian: O(n*n)
// khong gian: O(1)