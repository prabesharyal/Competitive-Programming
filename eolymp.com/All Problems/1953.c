#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int array[], int position[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j <n-i-1; j++){
            if (array[j] < array[j+1]){
                swap (&array[j], &array[j+1]);
                swap (&position[j], &position[j+1]);
            }
        }
    }
}


int main() {
    int N;
    scanf("%d", &N);
    int OlympiadPoints[N], position[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &OlympiadPoints[i]);
        position[i]= i+1;
    }
    BubbleSort(OlympiadPoints, position, N);
    // for (int i = 0; i < N; i++) printf("%d ", OlympiadPoints[i]);
    // printf("\n");
    for (int i = 0; i < N; i++) printf("%d ", position[i]);
}