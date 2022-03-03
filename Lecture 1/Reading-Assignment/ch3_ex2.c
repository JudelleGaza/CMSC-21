/* Judelle Gaza - CS21 - Reading Assignment Page 40 – ch3_ex2.c */

#include <stdio.h>  //Preprocessor Directive
int main(void)      //Indicates that the function main returns an integer value and does not accept arguments
{ 
    /*DECLARATION: Declaring the variable types of variables i - int and x - float*/
    int i;          
    float x; 

    /*Assigning values*/
    i = 40; 
    x = 839.21f; 

    /*OUTPUT BY USING printf*/
    /*%d outputs i with min. amount of space, %5d requires 5 characters so it adds 3 spaces, 
    for %-5d spaces are added afterwards, and %5.3d displays i in decimal form*/
    printf(" |%d|%5d|%-5d|%5.3d|\n", i, i, i, i);   

    /*%10.3f adds 3 spaces before x as it needs 3 more characters to satisfy format, 
      %10.3e displays exponential form while using 10 characters, %-10g prints spaces after x making it left justified*/
    printf(" |%10.3f|%10.3e|%-10g|\n", x, x, x, x); 
    return 0;
}
