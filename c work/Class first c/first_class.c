#include<stdio.h>

int main(){
    int salary=120; //variable created
    salary=56;
    int a; //int variable is for numbers
    a=10;
    int b;
    b=5; // = this is not a equal operator it is a assigment operator
    int expense;
    expense=50;
    float decimal; //float is for decimal no.
    decimal=5.5;
    int bonus;
    bonus=15;
    int sum;
    sum = salary+bonus;
    printf("hello world\n %d is the salary he get\n %d is his expenses\t %d\n", salary, expense, decimal); // opposite slash is used to change the line
    printf("%d is the bonus he got\n", bonus);
    int savings= salary+bonus-expense;
    printf("%d is the amount after expense\n", savings);
    printf("%d is the salary including bonus\n", sum);
    int remainder= a%b;
    int remains= b%a;
    printf("%d\n %d\n", remainder, remains);
    int c;
    c=3;
    int d;
    d=7;
    int e;
    e=10;
    int f;
    f=5;
    int summ;
    summ= e+c*d-f; // the assign variable has the last priority
    printf("%d\n", summ);

    int aa=6; 
   // aa= aa+4; // the computer put the aa value in this thread
   //aa+=4; // this is the short end code, like a shortcut, this doesn't in clude any space
   aa++; // ++ is used to increase the value by 1 only.
    printf("%d", aa);
    printf("hello world \"nice\"");
    

    return 0;
}