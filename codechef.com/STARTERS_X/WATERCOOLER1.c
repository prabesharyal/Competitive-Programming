// CODECHEF : EQUALELE
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    { //Start From Here;
    
    int X,Y,M;
    scanf("%d%d%d",&X,&Y,&M);
    int CostOfRent, CostOfPurchase;
    CostOfRent = M * X;
    CostOfPurchase = Y;
    if (CostOfRent<CostOfPurchase){
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