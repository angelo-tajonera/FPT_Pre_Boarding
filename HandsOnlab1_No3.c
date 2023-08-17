#include <stdio.h>

int main()
{
    int number;
    printf("Please enter 3 digit number: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &number);
    printf("The number in backwards is: %d ",((number-((number/100)*100))-(number%10))+((number%10)*100)+(number/100));
    return 0;
}
