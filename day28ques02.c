#include<stdio.h>
int main() {
<<<<<<< HEAD
    int i, n, sum = 0;
=======
    int i, n;
>>>>>>> 6b99eb9eccfc128a1029e4f37d452610bc5277be
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
