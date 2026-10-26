#include<stdio.h>
int main() {
     int n, i;
    double sum = 1.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++){
        sum = sum + (double)(2 * i - 1) / (2 * i);
    }
    printf("Sum of the series = %.2f\n", sum);
    return 0;
}

