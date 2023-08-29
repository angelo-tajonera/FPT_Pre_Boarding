/******************************************************************************
Write a program that a function to check if a character is alphanumeric, that is lower case,
upper case or numeric.
*******************************************************************************/

#include <stdio.h>
#define CharCheck(A) ((A <= 57) & (A >= 48) ? "Numeric": \
                        (A <= 90) & (A >= 65) ? "UpperCase" : \
                        (A <= 122) & (A >= 97) ? "LowerCase":"Not Alphanumeric")
int main()
{
    char x;
    printf("Enter Character :");
    fflush(stdin); fflush(stdout);
    scanf("%1s", &x);
    printf("%s",CharCheck(x));
    return 0;
}