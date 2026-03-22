#include <stdio.h>

int main() {
    int n;
    
    printf("Nhập độ lớn mảng n:");
    scanf("%d" , &n);
    
    int arr[n];
    
    printf("Nhập %d số nguyên:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phần tử [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMảng sau khi đảo ngược là:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
} 
    