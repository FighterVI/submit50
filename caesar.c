#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }


    int k = atoi(argv[1]);


    if (k < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }


    string plaintext = get_string("plaintext: ");


    printf("ciphertext: ");
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        char c = plaintext[i];

        if (isalpha(c))
        {
            char base = isupper(c) ? 'A' : 'a';
            char encrypted_char = (c - base + k) % 26 + base;
            printf("%c", encrypted_char);
        }
        else
        {

            printf("%c", c);
        }
    }
    printf("\n");

    return 0;
}
