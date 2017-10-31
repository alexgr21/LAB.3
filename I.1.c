#include <stdio.h>
#include <limits.h>

int main()
{

    printf("Min value of short: %i", SHRT_MIN); printf("\n");
    printf("Max value of short: %i", SHRT_MAX); printf("\n");
    printf("Max value of unsigned short: %i \n", USHRT_MAX);

    printf("Min value of char is: %i", CHAR_MIN); printf("\n");
    printf("Max value of char is: %i", CHAR_MAX); printf("\n");
    printf("Max value of unsigned char: %i \n", UCHAR_MAX);

    printf("Min value of long : %ld", LONG_MIN); printf("\n");
    printf("Max value of long : %ld", LONG_MAX); printf("\n");
    printf("Max value of unsigned long: %lu \n", ULONG_MAX);

    printf("Min value of int: %d", INT_MIN); printf("\n");
    printf("Max value of int: %d", INT_MAX); printf("\n");
    printf("Max value of unsigned int: %u \n\n", UINT_MAX);
}
