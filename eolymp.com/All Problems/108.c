#include <stdio.h>

int median(int x, int y, int z){
    if ((x <= z && x >= z )||(x >= z && x <= y )) return x;
    else if ((y <= z && y >= x )||(y >= z && y <= x )) return y;
    else return z;
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",median(a,b,c));
    return 0;
}