// Judelle Gaza

#include <stdio.h>

int main(void) {
    // Declaring Variables
    int input, n, e;                        

    // Asks and Scans for user input
    printf("Input n: ");                    
    scanf("%d", &input);            

    // Prints out the table of 2 to the nth power
    printf("  n    2^n   \n=============\n");
    e = 1;                 
    for (n = 0; n <= input; n++) {              // n starts at 0, condition while n is <= than the user input, and n is incremented for every iteration
        printf("%3d     %-9d\n", n, e);
        e *= 2;                       }         // e is multiplied by 2 n times while the for loop is executed
    return 0;
}