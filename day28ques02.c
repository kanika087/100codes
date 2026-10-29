#include<stdio.h>
int main() {
    int i, n;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements for array: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("the elements of array are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
