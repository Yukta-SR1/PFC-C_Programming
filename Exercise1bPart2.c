//What happens if you change i <= 10 to i < 10? Try it!

#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        printf("%d: Welcome to C Programming!\n", i);
    }
    return 0;
}

//if i <= 10 is changed to i < 10, the message will be printed only for 9 times.