#include <stdio.h>

int main(){


    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did okay\n");
        break;
    case 'D':
        printf("At least it's not a F\n");
        break;
    case 'F':
        printf("YOU FAILED\n");
        break;
    
    default:
        printf("That's not a valid grade\n");
        break;
    }


    return 0;
}