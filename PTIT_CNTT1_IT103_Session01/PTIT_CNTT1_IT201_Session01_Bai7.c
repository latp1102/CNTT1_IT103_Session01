#include <stdio.h>

int main() {
    int arr[] = {2,3,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int trungLap = 0;
    for(int i = 0;i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                trungLap = 1;
                break;
            }
        }
    }
    if (trungLap) {
        printf("mang co phan tu %d trung lap");
    } else {
        printf("mang ko co phan ty trung lap");
    }
    return 0;
}
// do phuc tap thoi giam: O(n*n)
// khong gian: O(1)
