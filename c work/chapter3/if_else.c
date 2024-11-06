#include<stdio.h>

int main(){
    int age;
    scanf("%d", &age);

    if(age>12 && age<20){
        printf("congratulation's you are in your teens");
    }
    else if(age<12) {
        printf("you are too small to be a teen");
    }
    else{
        printf("sorry you are too old to be called as a teen");
    }
    return 0;
}