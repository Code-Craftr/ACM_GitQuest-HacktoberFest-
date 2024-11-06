#include<stdio.h>

int main(){
    int p;
    int r;
    int t;
    printf("The simple interest calculator\n");
    printf("Enter the principal amount\n");
    scanf("%d", &p);
    printf("Enter the Interest rate\n");
    scanf("%d", &r);
    printf("Enter the period for the amount\n");
    scanf("%d", &t);

    printf("The interest on %d @%d for %d is %d", p, r, t, p*r*t/100);
    return 0;
}