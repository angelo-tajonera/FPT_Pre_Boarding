/******************************************************************************
Since a year is not exactly 365 days, we have a leap year once every 4 years except if the
year is dividable by 100. If the year is dividable by 400, the year is considered as a leap
year anyway.
Write a function with header:
int isLeapYear( int year)
that determines if a year is a leap year or not and gives a different function return value
for both cases.
Write also a function with header:
int numberOfDays(int month, int year)
that calculates the number of days in the month month of the year given.
Write a main function that reads a month and a year and prints the number of days in that
month of that year.
examples:
month 2 of 2000 has 29 days
month 2 of 1900 has 28 days
month 1 of 1950 has 31 days
*******************************************************************************/

#include <stdio.h>
int isLeapYear( int year);
int numberOfDays(int month, int year);
int main()
{
    int year, month;
    printf("Enter year :");
    fflush(stdin); fflush(stdout);
    scanf("%d", &year);
    printf("Enter month(in number) :");
    fflush(stdin); fflush(stdout);
    scanf("%d", &month);
    if ((month > 0) && (month <= 12))
    {
        printf("month %d of %d has %d days", month, year, numberOfDays(month, year));
    }
    else
    {
        printf("Invalid Month Entered"); 
    }
    return 0;
}

int isLeapYear( int year)
{
    int flag = 0;
    if ((year % 100) == 0)
    {
        if ((year % 400) == 0)
        {
            flag = 1;
        }
    }
    else
    {
        if((year % 4) == 0)
        {
            flag = 1;
        }
    }
    return(flag);
}
int numberOfDays(int month, int year)
{
    if (month == 2)
    {
        if (isLeapYear(year))
        {
            month = 29;
        }
        else
        {
            month = 28;
        }
    }
    else
    {
        if ((month ==  1) 
         || (month ==  3) 
         || (month ==  5) 
         || (month ==  7) 
         || (month ==  8) 
         || (month ==  10) 
         || (month ==  12))
        {
            month = 31;
        }
        else
        {
            month = 30;
        }
         
    }
    return(month);
}