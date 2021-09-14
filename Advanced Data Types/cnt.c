#include <stdio.h>
#include <stdlib.h>

int main()
{
#ifdef __STDC_NO_COMPLEX__
    printf("not supported\n");
#else
    printf("complex supported!\n");
#endif
    return 0;
}