#include <stdio.h>
int main(){
int n,i;
printf("Enetr the no. of elements in the array:");
scanf("%d", &n);
int arr;
printf("enter an elements of array:");
for(i=0; i < n; i++) {
    scanf("%d", &arr[i]);

}
printf("array in reverse order:\n");
for(i=n-1;i>=0;i--){
    printf("%d", arr[i]);
}
    printf("\n");
    return 0;
}
