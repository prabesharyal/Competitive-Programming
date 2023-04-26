// CODECHEF : EXISTENCE
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    { //Start From Here;
    
        long long X,Y;
        scanf("%lld%lld",&X,&Y);
        
        if (((X*X*X*X)+(4*Y*Y))==(4*X*X*Y)){
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