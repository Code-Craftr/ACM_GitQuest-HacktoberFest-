#include<stdio.h>

int main(){
    int i,j;
    scanf("%d %d", &i, &j);
    int ans = i- (i%j)+ j;
    printf("%d answer", ans);
    return 0;
}