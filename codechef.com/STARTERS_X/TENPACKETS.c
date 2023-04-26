// CODECHEF : FOURTICKETS
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    { //Start From Here;
    int X,Y;
    scanf("%d%d",&X,&Y);
    
    int sum1, sum2;
    sum1 = X*5;
    sum2 = Y*2 + X;
    if (sum1<sum2){
        printf("%d\n",sum1);
    }
    else {
        printf("%d\n",sum2);
    }
    
    
      
    //Test Cases Ends Here;
        T = T - 1;
    }

    return 0;
}