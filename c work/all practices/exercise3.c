#include<stdio.h>

int main(){
    // int h = 5;
    // int r = 7;
    // printf("The volume of the cylinder whose radius is %d and of hight %d is %f", r, h, 3.14*r*r*h);
    int h;
    int r;
    printf("Enter the hight of the cylinder\n");
    scanf("%d", &h);
    printf("Enter the radius of the cylinder\n");
    scanf("%d", &r);

    printf("The volume of the cylinder with radius %d and height %d is %f", r, h, 3.14*r*r*h);
    return 0;
}