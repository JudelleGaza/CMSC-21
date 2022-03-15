//Judelle Gaza

#include <stdio.h>
int main(void)
{
    /*Declaring variable types*/
    int num1, num2, num3;

    /*Asking for user input and scanning for the 2-digit input*/
    printf("Please enter a 3-digit number: ");
    scanf("%1d%1d%1d",&num1,&num2,&num3);

    /*Reversing the order of the numbers*/
    printf("Reverse: %1d%1d%1d", num3, num2, num1);
    
    return 0;
}