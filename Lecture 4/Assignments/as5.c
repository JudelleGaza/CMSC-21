// Judelle Gaza

#include <stdio.h>

int main(){
    int days, startday, n;          

    // While loop for continuous user input if input is Invalid for the number of days
    while (1){
        printf("How many days in a Month?\nInput [28-31]: ");
        scanf("%d", &days);                                 
        // breaks if condition is satisfied
        if (days >= 28 && days <= 31) {
            break;                    }
        else{
            printf("Invalid Input. Please Try Again. ");}}

    // While loop for continuous user input if input is Invalid for the starting day
    while (1){
        printf("\nWhich day of the week to start? [1] Sunday [2] Monday [3] Tuesday [4] Wednesday [5] Thursday [6] Friday [7] Saturday\nInput [1-7]: ");
        scanf("%d", &startday);
        // breaks if condition is satisfied
        if (startday >= 1 && startday <= 7) {
            break;                          }
        else{
            printf("Invalid Input. Please Try Again. ");}}
    
    // CALENDAR PRINTING
    printf("\n=== YOUR CALENDAR ===\nSu Mo Tu We Th Fr Sa\n");

    /* Prints Spaces if n is less than startday 
        - if the starting day is not on a sunday */
    for (n=1; n < startday; n++){
        printf("   ");          }

    /* Prints the days of the month calendar - use %2d to indicate the spacing 
        increments n and prints n until the said number of days, also increments n*/
    for (n=1; n <= days; n++)       {
        printf("%2d ", n);    
        // prints to a new line every end of the row
        if (n%7 == (8-startday) % 7){
            printf("\n");          }}
    return 0; 
}