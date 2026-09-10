#include<stdio.h>
int main() {
    int totalseconds, hours, minutes, seconds;
    printf("Enter total seconds: ");
    scanf("%d", &totalseconds);
    hours = totalseconds / 3600;
    minutes = (totalseconds % 3600) / 60;
    seconds = totalseconds % 60;
    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds\n", totalseconds, hours, minutes, seconds);
    return 0;
}