#include<stdio.h>
int main() {
    int i;
    int arr[5];
    printf("enter 5 elements for array: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("the elements of array are: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}