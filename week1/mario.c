#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n=get_int("Size: ");
    }
    while (n > 8 || n < 0);
    for (int i = 0; i < n; i++)
    {
        // for the blanks
        for (int j=n-1; j>i; j--)
        printf(" ", i );

        // For the hashes
        for (int j=0; j<=i;j++)
        printf("#" );
        printf("\n");
    }
}
