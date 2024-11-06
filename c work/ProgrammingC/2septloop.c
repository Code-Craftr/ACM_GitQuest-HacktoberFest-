#include<stdio.h>

int main(){
    int i=5;
    
    for(int i=0; i<=10; i++){ //for loop first is for initialization, second is for condition and third is for reinitialization
        printf("Hello world %d\n", i); 
    }

    int count=1; // intialization part of the loop;
    while(count<20){ // contion part of the loop;
        printf("hello world %d\n", count); //the loop will run untill the count reaches just less than 20;
        count++; //reinitialization part of the loop;
    }

    int word;
    scanf("%d", &word);
    while(word<=20){
        printf("Hello world %d\n", word);
        word++;
     //printf("what up the no. is above 20");
    }

    
    }
    return 0;
}