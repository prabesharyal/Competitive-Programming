#include <stdio.h>


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SelectionSort(int array[], int N){

for(int i=0; i<N-1; i++){
    int min = i;
    for (int j=i+1; j<N; j++){
        if (array[min]%10 > array[j]%10){
            swap(&array[min], &array[j]);
        }
        else if ((array[min]%10 == array[j]%10) && (array[min] > array[j])){
            swap(&array[min], &array[j]);
        }
    }
}

    

}


int main() {
    int N;
    scanf("%d", &N);
    int randomNumber[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &randomNumber[i]);
    }
    SelectionSort(randomNumber, N);

    for (int i = 0; i < N; i++) printf("%d ", randomNumber[i]);
    return 0;
}