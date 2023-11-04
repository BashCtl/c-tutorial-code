#include <stdio.h>

int main()
{

    int x = 5;
    int y = 2;

    int z = x / y;

    printf("%d\n", z);

    float z1 = x / (float) y;

    printf("%f\n", z1);

    int z2 = x % y;

    printf("%d\n", z2);

    return 0;
}