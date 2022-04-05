// Judelle Gaza 

#include <stdio.h>

int main(void) {
    int i;

    /*  equivalent for loop of number 1 
        initiate i as 1,
        the condition i < = 128, 
        and the after execution or the updation of i after executing body */
    for (i = 1 ;i <= 128; i*=2){
        printf("%d ", i);
    }
    return 0;
}