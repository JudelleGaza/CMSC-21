// Judelle Gaza 

#include <stdio.h>

int main(void){
    int i, input;

    printf("Input i: ");
    scanf("%d", &input);

    // WHILE - prints i while i is less than 10 
    printf("a) while\n");
    i = input;
    while (i<10){
        printf("%d ", i);
        i++;            }   // increments i 
    
    // FOR 0 - prints i while i is less than 10
    i = input;
    printf("\nb) for\n");
    for (;i<10;) {
        printf("%d ", i);
        i++;            }   // increments i

    // DO WHILE - executes 'do' even if while condition is not satisfied
    i = input;
    printf("\nc) do while\n");
    do{
        printf("%d ", i);
        i++;            }   // increments i
    while (i<10);

    return 0;
}