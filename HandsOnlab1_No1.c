#include <stdio.h>

int main()
{
    int hh, mm;
    float ss;
    printf("Please enter number of hours: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &hh);
    printf("Please enter number of minutes: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &mm);
    printf("Please enter number of seconds: ");
    fflush(stdout);fflush(stdin);
    scanf("%f", &ss);
    if (ss>60)
    {
        mm = mm + ((int)ss/60);
        ss = ss-(((int)ss/60)*60);
    }
    if (mm > 60)
    {
        hh = hh + (mm/60);
        mm%=60;
    }
    printf("The entered time is: %d hours %d minute and %.2f seconds",hh,mm,ss);
    return 0;
}
