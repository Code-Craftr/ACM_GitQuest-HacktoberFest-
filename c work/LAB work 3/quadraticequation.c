#include<stdio.h>
#include<math.h>


int main(){
    printf("The given equation ax^2+bx+c=0\n");
    int a;
    printf("enter the value of A:\n");
    scanf("%d", &a);
    int b;
    printf("enter the value of B:\n");
    scanf("%d", &b);
    int c;
    printf("enter the value of C:\n");
    scanf("%d", &c);
    float disc = (b*b)-(4*a*c);
    printf("the descrimant of the following no. is %f\n", disc);
    
    if(disc<0){
        printf("no real root exist");
    }
    else{
        float root1 = (-b+sqrt(disc))/(2*a);
        printf("The root 1 value is %f\n", root1);
        float root2 = (-b-sqrt(disc))/(2*a);
        printf("The root 2 value is %f\n", root2);
    }

    return 0;
}