#include <stdio.h>
#include <string.h>

// typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    User user1 = {"Boban", "password123", 88};
    User user2 = {"Darko", "password123", 19};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    return 0;
}