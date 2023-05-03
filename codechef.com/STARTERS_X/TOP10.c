// CODECHEF : TOP10
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    { //Start From Here;
    
        int X;
        scanf("%d",&X);
        
        if (X <= 10){
            printf("YES\n");
        }
        else {
            printf("NO\n"); 
        }
    
    
      
    //Test Cases Ends Here;
        T = T - 1;
    }

    return 0;
}