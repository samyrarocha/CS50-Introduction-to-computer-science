#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Asking for the key

    if (argc != 2)
    {
        printf("Usage: ./caesar Key\n");
        return 1;
    }
    int length = strlen(argv[1]);
    for (int i = 0; i < length; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar Key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]);

    // Asking for the plaintext

    string plain = get_string("Plaintext: ");

    //Caesar cipher

    length = strlen(plain);
    int i;
    char cipher;
    printf("ciphertext: ");
    for (i = 0; i < length; i++)
    {
        if (isalpha(plain[i]) != 0)
        {
            if (islower(plain[i]) != 0)
            {
                cipher = ((plain[i] - 'a' + key) % 26) + 'a';
                printf("%c", cipher);
            }
            if (islower(plain[i]) == 0)
            {
                cipher = ((plain[i] - 'A' + key) % 26) + 'A';
                printf("%c", cipher);
            }
        }
    }
    printf("\n");
    return 0;

}