#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of first interger: ");
    scanf("%d", &a);
    int b;
    printf("Enter the value of second integer: ");
    scanf("%d", &b);
 printf("Before swap the values are %d %d", a, b);

 int temp=a;
 a=b;
 b=temp;
 printf("\nAfter swap the values are %d %d", a, b);
    return 0;
}