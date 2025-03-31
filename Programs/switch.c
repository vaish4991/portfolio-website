# include <stdio.h>
int main() {
    int day = 3;

    switch (day){
        case 1:
        printf("monday\n");
        break;
        case 2:
        printf("tue\n");
        break;
        case 3:
        printf("wed\n");
        break;
        default:
        printf("not a valid day\n");
        break;

        return 0;
    }
}

