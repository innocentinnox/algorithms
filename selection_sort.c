#include <stdio.h>

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void selection_sort(int *arr, int n){
    for (int i = 0; i < n - 1; i++){

        int min = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[min]) min = j;
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){
    int arr[] = {5, 3, 8, 6, 2, 8, 7, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    printArray(arr, n);
    return 0;
}