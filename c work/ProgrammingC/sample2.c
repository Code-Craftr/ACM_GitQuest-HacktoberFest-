#include<stdio.h>

int main(){
    int a=12;
    int val;
    if(a==12) {
        printf("if part");
        int val=13;
    }
    else {
        printf("else part");

    }
    printf("%d", val);
    return 0;
}