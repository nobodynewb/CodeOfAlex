#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    while (height > 8 || height < 1)
    {
        height = get_int("Height?\n");
    }
    for (int i = 1; i <= height; i++)
    {
        for (int m = height - i - 1; m >= 0; m--)
        {
            printf(" ");
        }
        for (int k = i; k > 0; k--)
        {
            printf("#");
        }
        printf("  ");
        for (int j = i; j > 0; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}
