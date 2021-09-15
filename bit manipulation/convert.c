/*
    Binary to decimal and decimal to binary program
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include"convert.h"

int convertBinaryToDecimal(long long bin) 
{
    
    static int decimal = 0;
    int reminder, power = 0;

    while (bin != 0)
    {
        reminder = bin % 10;
        bin = bin /10;
        decimal = decimal + pow(2,power) * reminder;
        ++power;
    }
    return decimal;
}

long long convertDecimalToBinary(int n)
{
    int i = 1, reminder;
    long long binary = 0;
    while (n != 0)
    {
        reminder = n % 2;
        n = n / 2;
        binary += reminder * i;
        i = i * 10;
    }
    return binary;
}

/*int main()
{
    long long binary;
    printf("Input your binary number: \n");
    scanf("%lld", &binary);
    int finalDecimal = convertBinaryToDecimal(binary);
    printf("Decimal number of \"%lld\" is: \n%d\n\n", binary,finalDecimal);

    int decimalNumber;
    long long finalBinary = 0;
    printf("Input your decimal number: \n");
    scanf("%d", &decimalNumber);
    finalBinary = convertDecimalToBinary(decimalNumber);
    printf("Binary number of \"%d\" is: \n%lld\n", decimalNumber, finalBinary);

    return 0;
}*/