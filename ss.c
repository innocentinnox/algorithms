#include <stdio.h>
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void selection_sort(int *arr, int n){
    for (int i = 0; i < n; i++){
        int min_index = i;
        for (int j = i; j < n + 1; j++){    // avoid re-checking arr[i]
            if (arr[j] < arr[min_index]) min_index = j;
        }
        // swap arr[i] with arr[min_index] - only if needed
        if(min_index != i){
            int temp = arr[min_index];
            arr[min_index] = arr[i];
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