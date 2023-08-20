#include <stdio.h>

int main()
{
    float x;
    int Cond[6], NumCondMatch, NumCondCnt;
    /* if need to input many numbers
    int number=0; 
    while(1)
    { */
    printf("Enter a real number:");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &x);
    // ++number;
    /* check condition A */
    if ((3 <= x) 
     && (x < 8.5)) 
    {
        ++Cond[0];
    }
    else
    {
        ++Cond[1];
    }
    /* check condition B */
    if ((x < 3 ) 
     || ((5.4 < x) && (x < 7.3)) 
     || (x > 13))
    {
        ++Cond[2];
    }
    else
    {
        ++Cond[3];
    }
    /* check condition C */
    if ((x != 3 ) 
     && (x < 9.75))
    {
        ++Cond[4];
    }
    else
    {
        ++Cond[5];
    }
    /* Check which conditions are satisfied */
    // for(int i = 0; i <= number; ++i)
    for(int i = 0; i <= 1; ++i)
    {
        NumCondMatch = 0;
        for(int j = 0; j < 6; ++j)
        {
            if (Cond[j] == i)
            {
                NumCondMatch++;
            }
        }
        if (NumCondMatch > 0)
        {
            printf("%d matched condition: ", i);
            NumCondCnt = 0;
            for(int j = 0; j < 6; ++j)
            {
                if (Cond[j] == i)
                {
                    switch (j)
                    {
                        case 0:
                        {
                            printf("A");
                            break;
                        }
                        case 1:
                        {
                            printf("Not A");
                            break;
                        }
                        case 2:
                        {
                            printf("B");
                            break;
                        }
                        case 3:
                        {
                            printf("Not B");
                            break;
                        }
                        case 4:
                        {
                            printf("C");
                            break;
                        }
                        case 5:
                        {
                            printf("Not C");
                            break;
                        }
                    }
                    NumCondCnt++;
                    if (NumCondCnt < NumCondMatch)
                    printf(", ");
                    else
                    printf(" ");
                }   
            }
        }
        // }
        // printf("\r\n%f A%d B%d C%d NotA%d NotB%d NotC%d\n",x,Cond[0],Cond[2],Cond[4]
        // ,Cond[1],Cond[3],Cond[5]);
        // printf("\r\n");
    }
    return 0;
}
