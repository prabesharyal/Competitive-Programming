#include <stdio.h>

long long logic(int n){
    long long required =1;
    if (n-1 !=1 ){
    required = (n-1)/(n-1) + 1;
    }
    return required;
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",logic(n));
    return 0;
}