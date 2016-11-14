#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height;
    int j;
    int i;
    int x;
    
    do
    {
        printf("height: ");
        height = GetInt();
    }
    while(height < 0 || height > 23);
    
    for(i = 1; i <= height; i++)
    {
        for(j = 0; j < (height-i); j++)
        {
            printf(" ");
            
        }
        for (x = 0; x < i; x++)
        {
            printf("#");
        }
        printf("  ");
        
    printf("\n");
    }
    
}
