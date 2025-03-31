#include <stdio.h>
int main() {
    int num1,num2,num3,num4,num5,num6;
    float avg;
    printf("Enter the number:");
    scanf("%d%d%d%d%d%d" ,&num1, &num2, &num3 ,&num4 , &num5 , &num6 );
    avg = num1+num2+num3+num4+num5+num6 / 120 * 100;
    printf("average of student is: %lf" , avg);
    return 0;
}