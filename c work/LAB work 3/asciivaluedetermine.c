#include<stdio.h>

int main(){
    int ch;
    printf("Enter the char You want to detect:");
    scanf("%c", &ch);
    int ab = (int)ch;
    printf("The ASCII value of %c is %d\n", ch, ab);

    if ( ab>=65 && ab<+90){
        printf("This is a Uppercase Letter");
    }
    else if(ab>=97 && ab<=122){
        printf("This is a Lowercase Letter");
    }
    else if(ab>=48 && ab<=57){
        printf("This is a Digit");
    }
    else{
        printf("This is a special Synbol");
    }
    
    return 0;
}