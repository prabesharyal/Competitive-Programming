#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i+j < n-1){ //above secondary diagonal
                printf("%d", 2);
            }
            else if (i+j > n-1) //Below The Secondary Diagonal
            {
                 printf("%d", 1);
                /* code */
            }
            else {
                printf("%d",0);
            }
            
        }
            printf("\n");
    }
    return 0;
}