// CODECHEF : CHEFEREN
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    
    { //Start From Here;
    int N,A,B;
    scanf("%d %d %d", &N,&A,&B);
    int total=0, odd=0,even=0;

    if (N%2==0){
        total = (N/2)*A + (N/2)*B;
    }
    else{
        total = 0*A + 1*B;
    }
    printf("%d\n",total);  


    //Test Cases Ends Here;
     T = T - 1;
    }

    return 0;
}