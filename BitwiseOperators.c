#include <stdio.h>

int main()
{
    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift

    int x = 6;      // 6 =  00000110
    int y = 12;     // 12 = 00001100 
    int z = 0;      // 0 =  00000000

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);
    
    z = x << 1;
    printf("<< = %d\n", z);

    z = x >> 1;
    printf(">> = %d\n", z);

    return 0;
}