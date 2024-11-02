#include <stdio.h>
#include <stdbool.h>
bool func(int x){
    int a,b,c;
    c= x%10;
    b = (x/10)%10;
    a = x/100;
    if (a!=b && a!=c && b!=c){
        return true;
    }
    else return false;
}
int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    for (int i=a; i<=b; i++){
        if (func(i)==true) printf("%d\n",i);
    }
    return 0;
}