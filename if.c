/*
if statement
if else statement
if else if statement
nested if statement
*/

/*
If Else 
*/

#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: \n ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    if(age>18) {
        printf("You are eligible to vote.\n");
    }
    else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}