#include<stdio.h>
int main() {
    int i, n, sum = 0;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements of array:/n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum of array elements is: %d", sum);
    return 0;
}