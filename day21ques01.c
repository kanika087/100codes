#include<stdio.h>
int main() {
    int n, first, last, temp, divisor = 1, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp;
    result = n - first * divisor - last;
    result = result + last * divisor + first;
    printf("number after swapping: %d\n", result);
    return 0;
}