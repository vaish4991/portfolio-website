# include <stdio.h>
int main() {
    int avg;
    int marks = 0; 
    avg = marks/500*100;
    if (avg >= 75)
    printf("Passed: Grade A\n");
    else 
    if(avg < 75 && avg>=50)
    {
    printf("Passed:Grade B\n");
    }
    else 
    if(avg < 50 && avg<=35)
    {
        printf("Passed: Grade C\n");
    }
    else
    {
        printf("You are failed\n");
    }
    return 0;
}
    
