/*
    Second challenge:
        - write a c program that finds the sum of various numbers
        - you cannot pass any variable representing the running total to the sum() function
*/

#include <stdio.h>

int sum(int num)
{
    static int x = 0;
    x += num;
    return x;
}

int main()
{
    printf("%d\n", sum(25));
    printf("%d\n", sum(15));
    printf("%d\n", sum(30));
    return 0;
}