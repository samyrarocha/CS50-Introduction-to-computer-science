#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Asking for how many rows
    int height = get_int("Height: ");
    while (height < 1 )
    {
        printf("It has to be an integer number between 1 and 8!\n");
        height = get_int("Height: ");
        while (height > 8)
        {
            printf("It has to be an integer number between 1 and 8!\n");
            height = get_int("Height: ");
        }
    }
    
    //Buildng the pyramids
    

    for (int i = 0; i < height; i = i + 1) 
    {
        for (int j = 1; j < height - i; j++)
        {
            printf(" ");  
        }
        
        for (int x = height; x >= height - i; x-- )
        {
            printf("#");
            
        }
        
        printf("  ");
        
        for (int x = 0; x <= i; x++ )
        {
            printf("#");
            
        }
        
        printf("\n");
    }
}