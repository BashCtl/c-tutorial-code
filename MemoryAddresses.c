#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address o where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%ld bytes\n", sizeof(a));
    printf("%ld bytes\n", sizeof(b));
    printf("%ld bytes\n", sizeof(c));

    // addresses
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);



    return 0;
}