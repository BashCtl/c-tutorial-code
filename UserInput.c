#include <stdio.h>
#include <string.h>

int main()
{

    char name[25]; // bytes
    int age;

    printf("\nWhat's you name? ");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("\nHello %s, how are you?\n", name);
    printf("You are %d years old\n", age);

    return 0;
}