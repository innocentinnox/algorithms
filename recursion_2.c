#include <stdio.h>
#include <stdlib.h>

int print(int n){
    if(n > 0){
        for (int i = 0; i < n; i++){
            printf("* ");
        };
        printf("\n");
        print(n-1);
    }
}

int fact(int n){
    if(n == 0 || n == 1){ // base case
        return 1; 
    };
    return n * fact(n - 1); // recursive case
};

int main() {
    int factorial = fact(5);
    printf("%d", factorial);
    return 0;
}