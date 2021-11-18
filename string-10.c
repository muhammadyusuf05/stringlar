#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\n");
    
    char salom[] = "Salom hammaga";

    int satr = sizeof(salom) / sizeof(salom[0]);

    for (int i = satr - 1; i >= 0; i--)
    {
        int belgi = salom[i];

        printf("%c", salom[i]);
    }
    printf("\n\n");

    return 0;
}