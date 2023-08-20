
#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    char input[1];
    printf("Enter a number from 0-9:");
    fflush(stdin);
    fflush(stdout);
    /* force to read the first digit only */
    scanf("%1s", input);
    /* check offset position from 0 in ASCII table */
    x = strcmp(input,"0");
    switch (x)
    {
        case 0:
        {
            printf("zero");
            break;
        }
        case 1:
        {
            printf("one");
            break;
        }
        case 2:
        {
            printf("two");
            break;
        }
        case 3:
        {
            printf("three");
            break;
        }
        case 4:
        {
            printf("four");
            break;
        }
        case 5:
        {
            printf("five");
            break;
        }
        case 6:
        {
            printf("six");
            break;
        }
        case 7:
        {
            printf("seven");
            break;
        }
        case 8:
        {
            printf("eight");
            break;
        }
        case 9:
        {
            printf("nine");
            break;
        }
        default:
        {
            printf("Warning! Input only number from 0-9");
        }
    }
    
    return 0;
}
