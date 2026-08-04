/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int signal_input;


    printf("Traffic Signal Controller\n");
    printf("1 - RED\n");
    printf("2 - YELLOW\n");
    printf("3 - GREEN\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &signal_input);
    switch (signal_input) {
        case 1:
            printf("\n[ SIGNAL STATUS: RED ] -> STOP!\n");
            break;
        case 2:
            printf("\n[ SIGNAL STATUS: YELLOW ] -> CAUTION! Prepare to stop or proceed slowly.\n");
            break;
        case 3:
            printf("\n[ SIGNAL STATUS: GREEN ] -> GO! The path is clear.\n");
            break;
        default:
            printf("\n[ ERROR ] Invalid input! Please enter a number between 1 and 3.\n");
            break;
    }

    return 0;
}
