#include <stdio.h>

int main()
{
    int i = 6;

    puts("Start while loop");

    while (i < 5)
    {
        printf("i = %d\n", i);
        i++;        // same as i = i + 1 but more concise;
    }

    printf("Exiting with i=%d\n", i);


    int j = 10;

    puts("Start while loop");

    while (j >= 0)
    {
        printf("j = %d\n", j);
        j -= 2;        // same as i = i + 1 but more concise;
    }

    printf("Exiting with j=%d\n", j);
}

