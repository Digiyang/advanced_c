/* Variable Length array challenge:
    - write a program to read elements in an array and find the sum of array elements using val
*/
#include <stdio.h>

int main()
{
    size_t size = 0;
    printf("Enter size of the array: ");
    scanf("%zd", &size);

    int array[size];
    printf("Enter numbers!\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int sum;
    int j = 0;
    while (j < size)
    {
        sum += array[j];
        j++;
    }

    printf("The sum of numbers is : %d\n", sum);

    return 0;
}