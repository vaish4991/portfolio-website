#include <stdio.h>
struct Address {
    char city[50];
    int pin;
    };
    struct Student{
        int id;
        char name[50];
        struct Address addr; //nested structure
    };
    int main(){
        struct Student student1 = {1,"Bob" , { "New York" , 12345}};
        printf("Name: %s\n", student1.name);
        printf("City:%s\n" , student1.addr.city);
        printf("PIN: %d\n" , student1.addr.pin);
        return 0;
    }