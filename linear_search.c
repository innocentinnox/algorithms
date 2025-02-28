#include <stdio.h>

int leanerSearch(int arr[], int n, int target){
    for (int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1; // Not found
}

int main(){
    int arr[] = {4,2,9,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;

    int result = leanerSearch(arr, n, x);
    if(result == -1){
        printf("Element is not present in the array");
    } else {
        printf("Element is present at index %d", result);
    }

    return 0;
 }