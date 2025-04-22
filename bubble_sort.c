#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int *array, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1 - i; j++) { // From i to  last item, the largest is already sorted (bubbled up)
                                                // So only swap from 0 to n - 1 - i
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    int array[] = {5, 3, 8, 6, 2, 8, 7, 4, 1};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
    printArray(array, n);
    return 0;
}