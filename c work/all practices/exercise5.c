#include<stdio.h>

int main(){
    int p = 10000;
    int r = 10;
    int t = 5;
    printf("the intrest on principle amount %d @%d for %d years is %d ",p, r, t, p*r*t/100);
    return 0;
}