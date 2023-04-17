// CODECHEF : BUDTECH
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T != 0)
    { //Start From Here;
    int R;
    scanf("%d", &R);
    R = R*1000;

    int allocated;

    allocated = ((R/2)/5);
    printf("%d\n", allocated);
    
    
      
    //Test Cases Ends Here;
        T = T - 1;
    }

    return 0;
}