#include<stdio.h>
#include "convert.h"

int main()
{
    short int n1, n2;
    long long c1 = 0 ,c2 = 0, i1 = 0, i2 = 0,
              and_pair = 0, or_pair = 0, xor_pair = 0, 
              shiftLeftN1 = 0, shiftLeftN2 = 0;
    
    printf("Input two numbers!\n");
    scanf("%hd %hd", &n1, &n2);
    c1 = convertDecimalToBinary(n1);
    c2 = convertDecimalToBinary(n2);
    printf("c1 = %lld | c2= %lld\n\n", c1, c2);
    i1 = convertDecimalToBinary(~n1);
    i2 = convertDecimalToBinary(~n2);
    and_pair = convertDecimalToBinary(n1 & n2);
    or_pair = convertDecimalToBinary(n1 | n2);
    xor_pair = convertDecimalToBinary(n1 ^ n2);
    shiftLeftN1 = convertDecimalToBinary(n1 << 2);
    shiftLeftN2 = convertDecimalToBinary(n2 << 2);

    printf("Inverted n1 = %lld\nInverted n2 = %lld\nAND = %lld \nOR = %lld \nXOR = %lld \n"
            "Shift left n1 = %lld \nShift left n2 = % lld\n",
            i1,i2,and_pair,or_pair,xor_pair,shiftLeftN1,shiftLeftN2);

    return 0;
}