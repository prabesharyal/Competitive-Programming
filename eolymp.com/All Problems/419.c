
#include <stdio.h>
#include <stdlib.h>


int func(int n){
    int count = 0;
    while (1){
        if (n == 1){
            break;
        }
        if (n%2 != 0){
            n = 3 * n + 1;

        }
        else {
            n = n/2;

        }
        count++;
    }
    return count;
}


int main(){
    int i, j;
    int count = 0;
    scanf("%d %d",&i, &j);
    printf("%d %d ", i, j);
    for (int i = 0; i <=j; i++){
    count = count + func(i);
    }
    printf("%d",count);
    return EXIT_SUCCESS;
}