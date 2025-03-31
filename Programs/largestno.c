#include <stdio.h>
int main() {
    float a , b , c , large;
    printf("enter the three numbers");
    scanf("%f%f%f" , &a , &b , &c);
    large = a;
    if (b > large)
    large = b;
    if (c > large)
    large = c;
    printf("largest of three number is %lf" , large);
    return 0;
    }