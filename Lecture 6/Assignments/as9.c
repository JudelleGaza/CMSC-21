// Judelle Gaza - CS21- 1
// Length of Array

#include<stdio.h>

int main(void){
    int number[16];

    size_t n = sizeof(number)/sizeof(number[0]);
    printf("Total elements the array can  hold is: %d\n",n);

    return 0;
}