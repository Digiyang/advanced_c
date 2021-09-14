/*
    Binary to decimal and decimal to binary program
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int convertBinaryToDecimal(long long bin);
long long convertDecimalToBinary(int n);


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
    int i = 0;
    long long binary, *ptr;
    ptr = (long long *) malloc(sizeof(long long)*n);
    while (n > 0)
    {
        ptr[i] = n % 2;
        n = n / 2;
        ++i;
    }
    printf("Binary number is: \n");
    for(i = i-1; i>=0; --i)
    {
        printf("%lld", ptr[i]);
    }
    printf("\n");
    return *ptr;
}

int main()
{
    long long binary;
    printf("Input your binary number: \n");
    scanf("%lld", &binary);
    int finalDecimal = convertBinaryToDecimal(binary);
    printf("Decimal number is: \n%i\n\n", finalDecimal);

    int decimalNumber;
    printf("Input your decimal number: \n");
    scanf("%d", &decimalNumber);
    convertDecimalToBinary(decimalNumber);

    return 0;
}