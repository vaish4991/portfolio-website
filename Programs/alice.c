#include<stdio.h>
//define a structure
struct Student
{
    int id;
    char name[50];
    float marks;
    /* data */
};
 int main(){
    //intialise a structure
    struct Student student1 = {1,"Alice",85.5};
    //access structures members
    printf("ID:%d\n",student1.id);
    printf("Name:%s\n",student1.name);
    printf("Marks:%.2f\n" ,student1.marks);
    return 0;

}

