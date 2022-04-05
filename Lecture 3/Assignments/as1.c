//Judelle Gaza

#include <stdio.h>
#include <stdbool.h>

void main(){
//Declaring Variables
bool teenager;
int age;

//Asks and scans for user inpu
printf("Input age: ");
scanf("%d", &age);

/*utilizing ternary operators to assign a bool value to variable teenager
if int var age is greater than or equal to 13 AND is less than or equal  */
teenager = (age >= 13 && age <= 19);
printf("%s", teenager ? "TRUE" : "FALSE");
}