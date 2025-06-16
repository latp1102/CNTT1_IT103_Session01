#include <stdio.h>
//c1
// int main() {
//     int n, sum =0;
//     printf("Nhap so n: ");
//     scanf("%d",&n);
//     for(int i = 0;i <= n; i++) {
//         sum += i;
//     }
//     printf("tong la: %d", sum);
//     return 0;
// }
// do phuc tap: O(n)

// c2
int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
    int sum = n * (n + 1) / 2;
    printf("tong la: %d", sum);
    return 0;
}
// do phuc tap: O(1)