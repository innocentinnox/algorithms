#include <stdio.h>

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) printf("%d", arr[i]);
    printf("\n");
}


/**
InsertionSort(A, n)
for i ← 1 to n-1 do
    key ← A[i]
    j ← i - 1
    while j ≥ 0 and A[j] > key do
        A[j + 1] ← A[j]
        j ← j - 1
    A[j + 1] ← key
 */
int insertion_sort(int *arr, int n){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;

        printf("%i. key: %d, j: %d \n", i,key,j);

        printf("----------- List B4 WLooP: "); printArray(arr, n);
        while(j>=0 && arr[j] > key){
            printf("arr[j+1] (%d) = arr[j](%d)       ", arr[j+1], arr[j]);
            arr[j+1] = arr[j]; 
            printArray(arr, n);
            printf("\n");
            j--;
        }
    
        arr[j+1] = key;
        printf("End of while loop %d's run List: ", i);
        printArray(arr, n);
    }
}

int main(){
    int arr[] = {5, 3, 8, 6, 2, 8, 7, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    printArray(arr, n);
    return -1;
}