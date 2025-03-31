# include <stdio.h>
int main() {
    int num;
    printf("enter thr number");
    scanf("%d" , &num);
    do {
    printf("%d\n" , num); // Execute the loop at least once
          num++;
   } while(num <= 8);
    return 0;
}