#include<stdio.h>

int main(){
    int celcius;
    printf("enter the temp you want to convert to the celcius\n");
    scanf("%d", &celcius);
    printf("To convert %d degree celcius the formula is (9/5 x c)+32 and by using this formula the answer is %f",celcius, celcius*(9.0/5.0)+32);

    return 0;
}