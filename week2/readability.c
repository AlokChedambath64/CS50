#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage ./caesar key\n");
        //to exit the code if the condition has been fulfilled.
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        //! is used to check if the element is NOT a digit. we need it to print only when the element is not a digit. 
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //argv[1] is still a string hence, we need to covert it into a number

    int k = atoi(argv[1]);

    string text = get_string("plaintext: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if (isupper(text[i]))
        {
            text[i] = ((text[i] - 65) + k) % 26 + 65;
        }
        else if (islower(text[i]))
        {
            text[i] = ((text[i] - 97) + k) % 26 + 97;
        }
    }
    printf("Ciphertext: %s\n", text);

}
