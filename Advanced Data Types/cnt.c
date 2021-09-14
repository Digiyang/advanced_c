/*
    Complex numbers challenge:
        - write a program that performs some calculations on complex numbers
        - create complex number with the imaginary number squared using the multiplication operator (I*I)
            - display as output the real number and the imaginary number
        - create a double complex number with the imaginary number squared using the pow function from the math library (pow(I,2))
            - display as output the real number and the imaginary number
        - create a double complex number that performs Euler's formula
            - PI = acos(-1)
            - the complex number is the the exponent of I*PI
            - display as output the real number and the imaginary number
        - create a double complex number that performs a conjugate
            - a complex number that is 1+2*I
            - a complex number that is 1-2*I
            - display as output the real number and the imaginary number
        - use the complex.h header file and the creal() and cimag() functions
*/
#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>


struct point {
    int x, y , z;
};

struct cnt
{
    int a, b;
};


int main()
{
#ifdef __STDC_NO_COMPLEX__
    printf("Complex numbers are not supported\n");
#else
    printf("Complex numbers are supported!\n\n");
    double complex a_img_squared = 3.0 + ((2.0*I)*(2.0*I));
    printf("Imaginary squared = %.1f%+.1fi\n", creal(a_img_squared), cimag(a_img_squared));
    double complex a_pow = (pow(I,2));
    printf("Imaginary squared with pow = %.1f%+.1fi\n", creal(a_pow), cimag(a_pow));
    double PI = acos(-1);
    double complex e = exp(I*PI);
    printf("Exponent = %.1f%+.1fi\n", creal(e), cimag(e));
    double complex z1 = 1+2*I, z2 = 1-2*I, z3= z1*z2;
    printf("Conjugate = %.1f%+.1fi\n", creal(z3), cimag(z3));
    // designated initializers
    int a[] = {[0 ... 9]=1, [10 ... 99]=2, [100]=3};
    int p = sizeof(a) /sizeof(a[0]);
    // display the size of the array 
    printf("\nSize of the array is: %d \n", p);
    for ( int *j = a; j < a + sizeof( a ) / sizeof( *a ); ++j )
    {
        printf( "%d ", *j );
    }
    printf("\n");
    
    struct point p1 = {.x = 0, .y = 1, .z = 2};
    printf("\nx = %d, y = %d, z = %d\n\n", p1.x, p1.y, p1.z);

    struct cnt p2[6] = {[2].b = 5, [2].a = 6, [0].a =2 };
    for (int i = 0; i < 6 ; i++)
    {
        printf("%d %d\n", p2[i].a, p2[i].b);
    }

#endif
    return 0;
}