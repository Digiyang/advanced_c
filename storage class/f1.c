/* First challenge:
        - an int variable with block scope and temporary storage
        - a global double variable that is only accessible inside this file
        - a global float variable that is accessible within the entire program
        - a float local variable with permanent storage
        - a register int variable
        - a function that is only accessible with the file it is defined
 */

#include <stdio.h>

// a global double variable that is only accessible inside this file
static double y = 5;
// a global float variable that is accessible within the entire program
float z = 5;
// a function that is only accessible with the file it is defined
static void func(void);

int main()
{
    // an int variable with block scope and temporary storage
    int x = 5;
    // a float local variable with permanent storage
    static float g = 5;
    // a register int variable
    register int s = 5;
    return 0;
}