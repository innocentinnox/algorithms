#include <stdio.h>
#include <unistd.h>

int main(){
    const char *message = "Hello, OS!\n";
    write(1, message, 13);  // SVC to write to standard output (file descriptor 1)
    return 0;
}