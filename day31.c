#include <stdio.h>
int main() {
    int n, temp, power = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Binary = 0");
        return 0;
    }
    temp = n;
    // Find the highest power of 2
    while (power <= temp / 2) {
        power = power * 2;
    }
    printf("Binary = ");
    // Print binary digits
    while (power > 0) {
        if (temp >= power) {
            printf("1");
            temp = temp - power;
        } else {
            printf("0");
        }
        power = power / 2;
    }
    return 0;
}
