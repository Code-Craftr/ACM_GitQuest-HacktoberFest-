#include<stdio.h>

int main(){

    int a;
    scanf("%d", &a);
    
    int naturalno=0;
    int sum=0;

    while(naturalno<=a){
        sum=sum+naturalno;
        naturalno++;
    }
    printf("sum:%d", sum);
    return 0;
}