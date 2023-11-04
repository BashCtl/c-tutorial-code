#include <stdio.h>
#include <stdbool.h>

int main()
{

    char a = 'C';
    char b[] = "Bro";

    float c = 3.141592; // 4 bytes

    double d = 3.141592653589793; // 8 bytes

    bool e = true; // 1 byte

    char f = 100; // 1 byte (-128 to + 127)

    unsigned char g = 255; // 1 byte (0 to + 255)

    short int h = 32767; // 2 bytes ( -32,768 to +32,767)
    unsigned short int i = 65535; // 2 bytes (0 to + 65,535)

    int j = 23434; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 28374872; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 39492837498827934; // 8 bytes
    unsigned long long int m = 328749827938742874U; // 8 bytes

    printf("%f\n", c);
    printf("%lf\n", d);
    printf("%d\n", e);




    return 0;
}