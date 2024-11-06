#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    switch(a){
        case 90-100:
        printf("grade A");
        case 80-90:
        printf("grade B");
        case 70-80:
        printf("grade C");
        case 60-70:
        printf("grade D");
        case 50-60:
        printf("grade E");
        case a<50:
        printf("Fail");
    }
    return 0;
}