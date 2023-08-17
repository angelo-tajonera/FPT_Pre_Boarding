#include <stdio.h>

int main()
{
    float number, sum;
    printf("Please 1st number: ");
    fflush(stdout);fflush(stdin);
    scanf("%f", &number);
	sum += number; 
    printf("Please 2nd number: ");
    fflush(stdout);fflush(stdin);
    scanf("%f", &number);
	sum += number; 
    printf("Please 3rd number: ");
    fflush(stdout);fflush(stdin);
    scanf("%f", &number);
	sum += number; 
    printf("Please 4th number: ");
    fflush(stdout);fflush(stdin);
    scanf("%f", &number);
	sum += number; 
    printf("Please 5th number: ");
    fflush(stdout);fflush(stdin);
    scanf("%f", &number);
	sum += number; 
    printf("The mean is: %.2f ",sum/5);
    return 0;
}