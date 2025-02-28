#include <stdio.h>
void draw(int n);
void draw_recursive(int n);

int main(){
    // draw(5);
    draw_recursive(5000);
    return 0;
}

void draw_recursive(int n){
    // if nothing to draw, return - Base case
    if (n<=0) return;

    //  Print a piarmid of height n -1
    draw_recursive(n - 1);

    // print one more row
    for (int i = 0; i < n; i++) printf("#"); // Print n hashes
    printf("\n");
}

void draw(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++) printf("#");
        printf("\n");
    }
}