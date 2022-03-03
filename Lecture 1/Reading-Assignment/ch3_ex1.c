/* Judelle Gaza - CS21 - Reading Assignment Page 38 – ch3_ex1.c */

#include <stdio.h>  //Preprocessor Directive
int main(void)      //Indicates that the function main returns an integer value and does not accept arguments
{
    /*DECLARATION: Declaring the variable types of variables i,j,x,and y*/
    int i, j;
    float x,y;

    /*Assigning values to each variable, where i and j are integers, - and x and y are floats*/
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    /*Using the printf function to print the output where %d represents the int i and j, while %f represents the floats x and y*/
    printf("i = %d, j = %d, x = %f, y = %f\n", i,j,x,y);
}
