#include<iostream>
using namespace std;
int main()
{
    int num=20;
    int num1=0B1101; //binary no.
    int num2=0xface; //hexadecimal
    int num3=0123; //octal number
    cout<<"\n"<<sizeof(num);
        cout<<"\n num"<< &num;
                cout<<"\n num1 address"<<&num1;
num++; //num=num+1 post increment operation 21
cout<<"\n"<<&num;
cout<<"\n"<<num; //numbers increments from 20 to 21 in same memory location
cout<<"\n num1 address"<<&num1;
num1++;
cout<<"\n num1 address"<<num1;
if(num>=num1)
cout<<"\nok good";
else
cout<<"\n not good";
cout<<"\n_______________";
//pointer is special type of variable which stores the address of another same type
int *ptr=&num;
float *fptr;
char *ptrc;
cout<<"\n"<<sizeof(ptr);//4
cout<<"\n"<<sizeof(fptr);//4
cout<<"\n"<<sizeof(ptrc);//4

}
