#include <stdio.h>
int main() {
    int n,m,i;
    printf("\nEnter a number whose multiplication table is to be displayed: ");
    scanf("%d" , &n);
    printf("\nthe multiplication table of %d is \n\n" ,n);
    for (i=1; i<=10; i++)
    {
        m=n*i;
        printf("%d * %d  = %d\n" ,n,i,m);
    }
    
}
    
