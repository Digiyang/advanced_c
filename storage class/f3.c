/*
    Third challenge:
        - create a c program that shares a variable amongst two files
        - create a source file named main.c
            - this source file should include a global variable used as a loop counter
            - this file includes a main function that uses the global variable to iterate through a loop 5 times
                - inside this loop a function should be invoked that is defined in another file (do not use an include file)
                - the display function should take no parameters
*/

#include<stdio.h>

extern int count;
extern void display(void)
{
    printf("%d\n", count+1);
}