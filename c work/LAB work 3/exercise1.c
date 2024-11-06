#include<stdio.h>

int main(){
    int a;
    printf("enter the no. till you want natural no:");
    scanf("%d",&a);
    for(int i=15; i<a; i++){
        printf("Naturalno.%d\n", i);
    }
    return 0;
}