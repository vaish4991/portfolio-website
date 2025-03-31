#include <stdio.h>
int main() {
    for(int i = 0; i < 5; i++){
        if(i==2) {
            break; //skip the rest of the loop when i equals 2
        }
        printf("%d\n" , i); //i ==2 will not be printed
    }
    return 0;
}