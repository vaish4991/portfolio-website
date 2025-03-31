# include <stdio.h>
int main() {
    int i = 0;

    while(i < 5) { // Condition is checked first
          printf("%d\n" , i); // Print the current value of i
    i++;  // Increment i
    }
    return 0;
}