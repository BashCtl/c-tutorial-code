#include <stdio.h>

void printAge(int age)
{
    printf("You are %d years old\n", age);
}

int main()
{
    // pinter = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //          some tasks are performed more easilly with pointers
    //          * = indirection operator (value at address)

    int age = 21;
    int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("address of age: %d\n", age);
    printf("address of pAge: %p\n", pAge);
    printf("address of pAge: %d\n", *pAge);

    printf("size of age: %ld bytes\n", sizeof(age));
    printf("size of pAge: %ld bytes\n", sizeof(pAge));

    printAge(age);
    printAge(*pAge);

    return 0;
}