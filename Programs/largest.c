# include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter the numbers\n");
    scanf("%d%d%d" , &x, &y , &z);
    if (x > y)
    {
        if(x > z)
        printf("\nLargest = %d" , x);
        else
        printf("Largest number = %d" , z);
    }
    else
    {
        if (y > z)
        
            printf("\nLargest = %d" ,y);
            else
            printf("\nLaegest = %d" , z);
    }
}
        
    

