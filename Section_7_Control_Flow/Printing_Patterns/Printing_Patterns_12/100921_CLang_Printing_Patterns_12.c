/*
** Printing Pat
** Assignment 1
**       *
**      ***
**     *****
**    *******
**   *********
**    *******
**     *****
**      ***
**       *
*/

#include<stdio.h>

int main()
{
    int i, j, num, space;

    printf("Enter number of rows need to print = ");
    scanf("%d", &num);
    /*
    // Method 1
    for (i = 1; i <= num; i++)
    {
        for (space = 1; space <= (i - 1); space++)
        {
            printf(" ");
        }
        
        for (j = i; j <= (2 * num) - i; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    */
    // Printing Pyramid    
    for (i = 1; i <= num; i++)
    {
        for (space = 1; space <= (num - i); space++)
        {
            printf(" ");
        }
        
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    // Printing Inverted Pyramid
    for (i = num - 1; i >= 1; i--)
    {
        for (space = 1; space <= (num - i); space++)
        {
            printf(" ");
        }
        
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
