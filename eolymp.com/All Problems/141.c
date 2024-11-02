#include <stdio.h>

int digsum(int x){
    int digsums = 0;
    while (x!=0){
        digsums = digsums + x%10;
        x = x/10;
    }
    return digsums;
}

int mincount (int x, int y){
    int minsum = 100;
    int mincount = 0;
    for (int i=x; i<=y;i++){
        if (digsum(i) < minsum){
            mincount=1;
        }
        else if(digsum(i)==minsum){
            mincount++;
        }
    }
    return mincount;
}

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("%d\n",mincount(a,b));
    return 0;
}