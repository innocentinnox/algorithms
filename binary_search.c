#include <stdio.h>

int binarySearch(int arr[], int n, int target){
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = (left + right) / 2;
        printf("Searching between: [%d, %d], mid = %d\n", left, right, mid);
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] < target){
            left = mid + 1; ;  // Search right half
        } else {
            right = mid - 1; // Search left half
        }
    }
    return -1;   // Element not found
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;

    int result = binarySearch(arr, n, x);
    if(result == -1){
        printf("Element is not present in the array");
    } else {
        printf("Element is present at index %d", result);
    }
    return 0;
}