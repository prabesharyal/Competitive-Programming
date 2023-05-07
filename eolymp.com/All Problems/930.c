#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int array[],int N){

    for (int i = 0; i<N-1; i++) {
        for (int j = 0; j < N-i-1; j++){
            if (array[i]> array[j+1]){
                swap(&array[i],&array[j+1]);
            }
        }
    }
}

void CheckMissing(int array[],int N){
    int missing = 0;
    int missinga[10];
    for (int i = 0; i<10; i++) {
        int existsinloop = 0;
        for (int j = 0; j <N; j++) {
            if (array[j] == i){
                existsinloop = 1;
                break;
            }
        }
        if (existsinloop == 0){
            missinga[missing]=i;
            missing++;
        }
    }
    printf("%d\n",missing);
    for(int i = 0; i<missing; i++) printf("%d ",missinga[i]);
}




int main(){
    char phone[20];
    scanf ("%[^\n]%*c", &phone);
    int count=0;
    int onlynumbers[15];
    for (int i = 0; i < 20; i++){
        int ascii = (int)(phone[i]);
        int decimal = ascii - 48;
        if (decimal >= 0 && decimal <= 9) {
            onlynumbers[count]= decimal;
            count++;
        }
    }
    BubbleSort(onlynumbers,count);
    CheckMissing(onlynumbers,count);

    return EXIT_SUCCESS;
}