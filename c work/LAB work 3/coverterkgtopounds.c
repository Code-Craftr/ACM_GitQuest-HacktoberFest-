#include<stdio.h>

int main(){
    float a;
    printf("Enter the value in KG: "); // enter the value in kg to convert into other files
    scanf("%f", &a); // enter the value you want to change 

    float b = a*1000;
    printf("The value of %.2f KG in grams is %.2f Grams\n", a, b); // conversion of kg to grams

    float c = a/100;
    printf("The value of %.2f Kg in quintal is %.2f Quintal\n", a, c); // conversion of kg into quintals

    float d = a/1000;
    printf("The value of %.2f KG in tonnes is %.3f Tonnes\n", a, d); // conversion of kg into tonnes

    float e = a*2.2024;
    printf("the value of %.5f KG in Pounds is %.5f Pounds\n", a, e); // conversion of kg into pounds


    return 0;
}