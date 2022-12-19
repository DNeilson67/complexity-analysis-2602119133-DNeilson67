#include <stdio.h>

int main(void){
    int N, sum = 0;
    printf("input N =");
    scanf("%d",&N);
    int i = 1;
    while (i<=N){
        sum += i;
        i++;
    }
    printf("The sum is %d \n", sum);
}
