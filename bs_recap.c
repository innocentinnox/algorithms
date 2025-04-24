#include <stdio.h>
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int binary_search(int arr[], int n, int target){
    int start = 0;
    int stop = n;
    int operations = 0;
    while (start <= stop){
        int mid = (start + stop) / 2;
                operations++;
                printf("%d: start: %d, stop: %d, mid: %d \n", operations, start, stop, mid);
        if(target == arr[mid]){
            return mid;
        } else if (target < arr[mid]){
            stop = mid  - 1;
        } else if (target > arr[mid]){
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = binary_search(arr, n, 1);
    printf("Res %d", res);
    return 0;
}


/**
 * binary_search(arr, target):
 *  start = 0
 *  stop  = len(arr)
 * while start <= stop: // still have gap
 *  mid = (start + stop) / 2
 *  if mid item = target:
 *      return mid
 *  if target < mid item:
 *      stop = mid - 1
 *  if target > mid item: 
 *      start = mid + 1
 * return -1
 */