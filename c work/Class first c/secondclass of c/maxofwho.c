#include<stdio.h>

int main(){
    int a, b;
    printf("enter the first no.");
    scanf("%d",&a);
    printf("enter the second no.");
    scanf("%d",&b);
    if(a>b){
        printf("the A (%d) is the bigger no.",a);
    }
    else {
        printf("the B (%d) is the bigger no.",b);
    }
    return 0;
}