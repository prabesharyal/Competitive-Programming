#include <stdio.h>
#include <math.h>

double func(double x){
    double func = pow(x,3) + 2 * pow(x,2) - 3;
    return func;
}

int main() {
    double x;
    while(scanf("%lf",&x)==1)
    printf("%0.4lf\n",func(x));
    
}
