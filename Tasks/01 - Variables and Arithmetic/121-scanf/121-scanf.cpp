#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;
    int y = 0;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %d\n", x);

    printf("What is the date\n");

    int found2 = scanf_s("%d", &y);

    printf("Matched %d items\n", found2);

    printf("y = %d\n", y);
}


