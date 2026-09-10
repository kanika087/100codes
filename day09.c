#include<stdio.h>
#include<math.h>
int main() {
    float principal, rate, time, simpleinterest, compoundinterest, amount;
    printf("enter principal amount");
    scanf("%f", &principal);
    printf("enter rate of interest");
    scanf("%f", &rate);
    printf("enter time in years");
    scanf("%f", &time);
    simpleinterest = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    compoundinterest = amount - principal;
    printf("simple interest is %f\n", simpleinterest);  
    printf("compound interest is %f\n", compoundinterest);
    return 0;
}