#include<stdio.h>
int main() {
    float radius, circumference, area;
    float pi = 3.14;
    printf("enter the radius of circle");
    scanf("%f", &radius);
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    printf("circumference of circle is %f", circumference);
    printf("area of circle is %f", area);
    return 0;
}