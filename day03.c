#include<stdio.h>
int main() {
    int a, b;
    printf("enter length and breadth of rectangle");
    scanf("%d %d", &a, &b);
    printf("perimeter of rectangle is %d", 2 *(a + b));
    printf("area of rectangle is %d", a * b);
    return 0;
}