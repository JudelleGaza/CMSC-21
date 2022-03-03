/*Judelle Gaza - CS21 - Reading Assignment Page 46-47 – ch3_ex3.c */

# include <stdio.h> //Preprocessor Directive
int main(void)      //Indicates that the function main returns an integer value and does not accept arguments
{
    //DECLARATION: Declaring variables to type int
    int num1, denom1, num2, denom2, result_num, result_denom; 
    
    /*printf function asks user to enter a fraction,
      the scanf function scans user input and assigns the input to variables num1 and denom1*/
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    /*Assigns user input to variables num2 and
     denom2 for the second fraction*/
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    /*result_num and result_denom stores the result numerator
    and result denominator from the following operations respectively*/
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    //prints the new fraction - %d being an integer
    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}
