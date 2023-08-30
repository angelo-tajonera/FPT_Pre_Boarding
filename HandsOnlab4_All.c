#include <stdio.h>
#define TextCons    (0xFFFFFFFFFFFFFFFF)

int main()
{
    /* 1. Declare a pointer to a short int and a pointer to a float. */
    short unsigned int *a, b;
    float *p, FloatTest = 17.6;
    a = &b;
    p = &FloatTest;
    /* 2. Of what use is the sizeof() operator? */
    printf("To show size allocate to a variable, sizeof() function is use e.g.:\r\n");
    printf("The size of address in which pointer \"p\" points at is is %lu byte\r\n", sizeof(*p));
    printf("The size of pointer \"p\" is %lu byte\r\n", sizeof(p));
    /* 3. In a given operating system, a pointer to a short int is 32 bits wide. How wide is a pointer
    to a long int in this same system? */
    printf("Short int has size of %lu byte. \r\n", sizeof(short int*));
    printf("Long Int has size of %lu byte. \r\n",  sizeof(int*));
    printf("Long long int has size of %lu byte. \r\n",  sizeof(long int*));
    printf("Based on this the width of pointer to a short int is same as the pointer to a long int.\r\nSo it's 32 bits wide too.\r\n");
    /* 4. Assume p is a pointer to a float. Further, assume, the value of p is 1000 (i.e., the address of
    the float it points to is 1000). The value of the float is 17.6. What value is p++? Define in
    words what *p and &p mean. Is there a way to determine the values of *p and &p given
    the info above? */
    printf("value of p is %p.\r\n", p);
    printf("value of float that p points to is %0.1f.\r\n", *p);
    printf("*p is equal to the value address that p points at which is %f.\r\n", *p);
    printf("&p is is the address that p points at which is %p.\r\n", &p);
    printf("Size of p is %lu.\r\n", sizeof(*p));
    printf("So p++ is equal to value of p + size of p which is %p.\r\n", ++p);
    printf("There is no way to determine \"&p\" due to address \"1000\" is define, \r\nbut determining \"*p\" is imposible unless the float the pointer is pointing out is an array.\r\n");
    /* 5. Given the initializations and memory map at the top, fill out the memory map on the
    bottom after the code has executed. Assume pointers are 32 bits wide.
    long int x=100;
    long int *y;
    long int **z;
    top     ------------------- code
            |                   |
            |                   | y=&x;
            |                   | z=&y;
            |                   | x++;
            |                   | *y=*y++;
            |                   | *z=*z++;
            -------------------     z++;
    8000    |       100         | x
            -------------------
            |                   |
            --------------------
    5000    |                   | y
            --------------------
            |                   |
            --------------------
    2000    |                   | z
            --------------------
            |                   |
            -------------------- 
    
    Map after code executes
    top     -------------------
            |                   |
            |                   |
            |                   |
            |                   |
            |                   |
            |                   |
             -------------------
    8000    |       100         | x
            -------------------
            |                   |
            --------------------
    5000    |       8000        | y
            --------------------
            |                   |
            --------------------
    2000    |       5000        | z
            --------------------
            |                   |
            --------------------  */
    long int x=100;
    long int *y;
    long int **z;
    long int *prevY, **prevZ;
    printf("address of x is %p (same as 8000).\r\n", &x);
    y=&x;
    z=&y;
    x++;
    printf("the value of y is %p (same as 8000).\r\n", y);
    printf("address of y is %p (same as 5000).\r\n", &y);
    printf("the value of z %p (same as 5000).\r\n", z);
    *y=*y++;
    *z=*z++;
    z++;
    return 0;
}
