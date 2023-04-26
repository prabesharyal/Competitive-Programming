// Eolymp : Mobile Phone
#include <stdio.h>

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int length(long long N) {
    int count = 0;
    while(N!=0){
        count++;
        N=N/10;
    }
    return count;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}


int main()
{
    long long N;
    scanf("%lld", &N);
    int len = length(N);
    int array[len-1];
    printf("%d",len);
    for (int i=0; i<len; i++){
        array[len-i] = N%10;
        N = N/10;
    }
    bubbleSort(array[len-1],len-1);
    for (int i=0; i<len; i++){
printf("%d",array[i]);
    N = N/10;
    }
    return 0;
}
