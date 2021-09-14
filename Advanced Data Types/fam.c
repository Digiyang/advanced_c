/*
    Flexible array members:
        - write a program that uses flexible array member inside a structure
        - create a structure named myArray that has length member and a flexible array member named array
        - read in from the user the size of the array at runtime
        - allocate memory for the structure based on this size read in from the user
        - set the length member and fill the array with some dummy data
        - print the array elements
*/

#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int arraySize;
    int array[];
};

int main()
{
    int size;
    struct myArray *ptr = NULL;
    printf("Enter desired size : ");
    scanf("%d", &size);

    ptr = malloc(sizeof(struct myArray) + size * sizeof(int));
    int i = 0;
    ptr->arraySize = size;
    ptr->array[0] = 75;
    ptr->array[1] = 60;
    ptr->array[2] = 150;

    printf("the array includes: %d:%d:%d\n", ptr->array[0], ptr->array[1], ptr->array[2]);
    return 0;
}