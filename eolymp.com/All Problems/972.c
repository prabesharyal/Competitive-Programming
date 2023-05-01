#include <stdio.h>

int TotalTime(int TimeArray[]){
    int sum = 0;
    sum = TimeArray[0]*60*60 + TimeArray[1]*60 + TimeArray[2];
    return sum;
}

void FormatandPrintTime(int Time){
    int hours = Time/(60*60);
    int minutes = (Time - (hours*60*60))/(60);
    int seconds = Time - hours*60*60 - minutes*60;
    printf("%d %d %d\n", hours, minutes, seconds);
}

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int MainArray[],int n){
    for (int i=0; i<n; i++){
        int min = i;
        for (int j=i+1; j<n; j++){
            if (MainArray[j] < (MainArray[min])) min = j;
        }
        swap(&MainArray[i],&MainArray[min]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int MainArray[n];
    for (int i=0; i<n; i++){
        int TimeArray[3];
        for (int j=0; j<3; j++){
            scanf("%d",&TimeArray[j]);
        }
        MainArray[i]=TotalTime(TimeArray);
    }
    SelectionSort(MainArray,n);
    for (int i=0; i<n; i++){
        FormatandPrintTime(MainArray[i]);
    }
    return 0;
}