#include <stdio.h>
#include <math.h>

float threesome(int a){
    float sum;
    sum = sqrt(a%10+ (a/10)%10 + a/100);
    return sum;
}



int main(){
    int a;
    scanf("%d",&a);
    printf("%0.3f\n",threesome(a));

}