#include <stdio.h>
#include <stdbool.h>

int turn;
bool flag[2] = {false, false};
void enter_region(int i) {
    flag[i] = true;
    turn = 1 - i;
    while (flag[1 - i] && turn == 1 - i) { /* busy‐wait */ }
};

void leave_region(int i) {
    flag[i] = false;
};

int main () {
    

    return -1;
}