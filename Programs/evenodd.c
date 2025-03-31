#include <stdio.h>

int main() {
    int num;
      printf("Enter the number.\n");
    scanf("%d" , num);

    if(num > 0) {
         if(num % 2 == 0) {
             printf("The number is positive and even.\n");
    } else {
        printf("The number is positive and odd.\n");
    }
    } else {
        printf("the number is non positive.\n");
    }
   return 0;

}
