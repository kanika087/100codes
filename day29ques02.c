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
    int max = arr[0];
    int min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("the maximum element in the array is: %d\n", max);
    printf("the minimum element in the array is: %d\n", min);
    
    return 0;
}