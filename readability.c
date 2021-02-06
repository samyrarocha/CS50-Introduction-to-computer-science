#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

float count_letters(string text);
float count_sentences(string text);

int main(void)
{
    //Asking for the text
    string text = get_string("Text: ");

    //Grade of the text
    float L = count_letters(text);
    float S = count_sentences(text);
    float index = (0.0588 * L) - (0.296 * S) - 15.8;
    index = round(index);

    //Print grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %g\n", index);
    }
}

//Computer text, count letters and calculates variable L
float count_letters(string text)
{
    int length = strlen(text);
    float letters = 0;
    float words = 1;
    float sentences = 0;
    for(int i = 0; i < length; i++)
    {
        //Counting letters
        if (isalpha(text[i]) != 0)
        {
          letters++;
        }
        //Counting words
        if (isspace(text[i]) != 0)
        {
            words++;
        }
    }
    float L = (letters / words) * 100;
    return L;
}

//Computer text, count sentences and calculates variable S
float count_sentences(string text)
{
    int length = strlen(text);
    float letters = 0;
    float words = 1;
    float sentences = 0;
    for(int i = 0; i < length; i++)
    {
        //Counting words
        if (isspace(text[i]) != 0)
        {
            words++;
        }
        //Counting sentences
        if ((text[i]) == '?' || (text[i]) == '!' || (text[i]) == '.')
        {
            sentences++;
        }
    }
    float S = (sentences / words) * 100;
    return S;
}

