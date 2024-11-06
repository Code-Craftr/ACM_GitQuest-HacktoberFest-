#include<stdio.h>

int main(){
    // int length = 4;
    // int breath = 5;
    int breadth;
    int length;
    printf("Enter the Length\n");
    scanf("%d", &length);

    printf("Enter the breadth\n");
    scanf("%d", &breadth);

    printf("The area of the rectangle is %d", length*breadth);

    return 0;
}