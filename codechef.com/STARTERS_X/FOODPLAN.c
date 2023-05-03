// CODECHEF : FOODPLAN
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    { //Start From Here;
        long long X,Y;
        scanf("%lld%lld",&X,&Y);
        
        if (0.9*X<Y){
            printf("ONLINE\n");
        }
        else if(Y<0.9*X){
            printf("DINING\n"); 
        }
        else{
            printf("EITHER\n"); 
        }
    
    
    
      
    //Test Cases Ends Here;
        T = T - 1;
    }

    return 0;
}