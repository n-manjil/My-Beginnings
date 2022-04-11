#include <stdio.h>

int main(void)
{
    int height, row, column, spaces;
    printf("Enter height: ");
    scanf("%d", &height);

    for (int row = 0; row < height; row++)
    {
        for(int spaces = 0; spaces < height - row - 1; spaces++) //For spaces before the hashes in the right aligned pyramid
        {
            printf(" ");
        }
        //For Right Aligned Pyramid
        for(int column = 0; column <= row; column++)
        {
            printf("#");
        }

        printf(" "); //For spaces betweeen the two pyramids
        
        //For Left Aligned Pyramid
        for(int column = 0; column <= row; column++)
        {
            printf("#");
        }
    
        printf("\n"); //Print a new line
    }
}
