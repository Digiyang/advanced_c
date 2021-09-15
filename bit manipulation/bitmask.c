#include <stdio.h>
#include "convert.h"

int main()
{
    int number, bit_postion, status, new_status, final_number;
    long long binary_number = 0, binary_finalNumber = 0;

    printf("Input your number!\n");
    scanf("%d", &number);

    printf("\nEnter the number of bit you want to check (0-31): ");
    scanf("%d", &bit_postion);

    status = (number >> bit_postion) & 1;
    printf("The bit %d is set to: %d\n", bit_postion, status);

    final_number = (1 << bit_postion) | number;
    new_status = (final_number >> bit_postion) & 1;
    
    if(new_status != status ){
        printf("\nBit was set successfully!\n\n");
    }else
    {
        printf("\nBit was not set successfully!\n\n");
    }
    binary_number = convertDecimalToBinary(number);
    binary_finalNumber = convertDecimalToBinary(final_number);

    printf("Number before setting the %d bit: Decimal = %d | Binary = %lld\n", bit_postion, number, binary_number);
    printf("Number after setting the %d bit: Decimal = %d | Binary = %lld\n", bit_postion, final_number, binary_finalNumber);

    return 0;
}