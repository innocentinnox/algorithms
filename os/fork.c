#include <stdio.h>
#include <unistd.h>

int main(){
    fork();
    printf("Hello, OS!\n");
    return 0;
}
