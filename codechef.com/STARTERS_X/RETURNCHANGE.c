// CODECHEF : RETURNCHANGE
#include <stdio.h>

int roundoff(int X) {
    if ((X%10)<5){
        X = X - (X%10);
    }
    else {
         X = X - (X%10) + 10;
    }
    return X;
}


int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    { //Start From Here;
    int X,Y;
    scanf("%d",&X);
    X = 100 - roundoff(X);
    printf("%d\n",X);
    
      
    //Test Cases Ends Here;
        T = T - 1;
    }

    return 0;
}