#include <stdio.h>
int power(int n,int x){
    if(x == 0){
        return 1;
    } else {
        return n * power(n, x-1);
    }
}
int main(){
    int res = power(2,3);
    printf("2^3 = %d", res);
    return -1;
}