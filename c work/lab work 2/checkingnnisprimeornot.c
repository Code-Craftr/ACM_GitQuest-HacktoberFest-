#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int i;
    for(i=2; i<9; i++){
    int s=a%i==0;
    }
    if(a==0){
        printf("the no is not a prime no.");
    }
    else{
        printf("the no. is a prime no,");
    }
    
    return 0;
}