#include <stdio.h>
struct Address {
    char food[50];
    int number;
    };
    struct Student{
        int id;
        char name[50];
        struct Address addr; //nested structure
    };
    int main(){
        struct Student student1 = {1,"Vaishnavi Jagdale" , { "Dabeli" , 123456789}};
        printf("Name: %s\n", student1.name);
        printf("Favourite Food:%s\n" , student1.addr.food);
        printf("Phone number: %d\n" , student1.addr.number);
        return 0;
    }