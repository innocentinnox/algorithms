#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// Interrupt handler function
void handle_signal(int signal) {
    printf("\nInterrupt received (Signal %d). Cleaning up...\n", signal);
}

/*
Explanation:
signal(SIGINT, handle_signal); → Registers the handle_signal function to execute when Ctrl + C is pressed.
When Ctrl + C is detected, handle_signal runs instead of terminating the program immediately.
The program keeps running in a loop, printing "Running..." until interrupted.
*/

int main() {
    // Register SIGINT (Ctrl + C) handler
    signal(SIGINT, handle_signal);

    printf("Press Ctrl + C to trigger an interrupt...\n");

    while (1) {
        printf("Running...\n");
        sleep(2);
    }

    return 0;
}
