#include <stdio.h>
int main(){
    int i,num,sum=0;
    printf("enter a no.");
    scanf("%d" , &num);
    for(i=1;i<=num/2;i++){
                if(num%i == 0)
                {
                            sum=sum+i;

                }

    }
    if(sum==num && num>0)
    {
    printf(" %d number is perfect number" , num);
    }
    else 
    {
        printf("%d the number is not perfect number" , num);
    }
return 0;
}