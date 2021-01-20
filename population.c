#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int start = get_int("Start Size: ");
    while (start < 9)
    {
        printf("It should be greater than 9!\n");
        start = get_int("Start Size: ");

    }

    // TODO: Prompt for end size

    int end = get_int("End Size: ");
    while (end < start)
    {
        printf("Just kill %i llama(s). You should try a number greater than the previous one.\n", start - end);
        end = get_int("End Size: ");

    }
    // TODO: Calculate number of years until we reach threshold

    int gain, loss, total;
    int n;
    total = start;
    n = 0;
    while (total < end)
    {

        gain = (float) total / (float) 3;
        loss = (float) total / (float) 4;
        total = total + gain - loss;
        n++;

    }

    // TODO: Print number of years

    printf("Years: %i\n", n);
}