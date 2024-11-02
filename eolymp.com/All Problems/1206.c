

#include <stdio.h>
#include <stdlib.h>


int f91(int n){
    if (n>=101) return n-10;
    return f91(f91(n+11));
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",f91(n));
    return EXIT_SUCCESS;
}