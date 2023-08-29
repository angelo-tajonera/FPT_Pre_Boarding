/******************************************************************************
Write a program to compute the area and perimeter of a rectangle with a width of three
inches and a height of five inches. What changes must be made to the program so that it
works for a rectangle with a width of 6.8 inches and a length of 2.3 inches?
*******************************************************************************/

#include <stdio.h>
#define Area(W, H) (W * H)
#define Perimeter(W, H) ((2 * W) + (2 * H))
#define width1  3u
#define height1  5u
#define width2  6.8f
#define height2 2.3f
int main()
{
    printf("Perimeter and Area of rectangle with width of %d and height of %d is %d and %d.\r\n", width1, height1, Perimeter(width1, height1),Area(width1, height1));
    printf("Perimeter and Area of rectangle with width of %.2f and height of %.2f is %.2f and %.2f.\r\n", width2, height2, Perimeter(width2, height2),Area(width2, height2));
    return 0;
}
