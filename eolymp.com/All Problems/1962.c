#include <stdio.h>

void swap(long long *a, long long *b){
    long long temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(long long array1[], long long array2[], int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j <n; j++){
            if ((array2[j]) > (array2[min])){
                swap (&array1[j], &array1[min]);
                swap (&array2[j], &array2[min]);
            }
        }
    }
}

 
int main() {
    int N;
    scanf("%d", &N);
    long long OlympiadPoint1a[N], OlympiadPoint1b[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &OlympiadPoint1a[i]);
        scanf("%lld", &OlympiadPoint1b[i]);
    }
    SelectionSort(OlympiadPoint1a, OlympiadPoint1b, N);
    // for (int i = 0; i < N; i++) printf("%d ", OlympiadPoints[i]);
    // printf("\n");
    for (int i = 0; i < N; i++) printf("%d %d\n", OlympiadPoint1a[i], OlympiadPoint1b[i]);
}