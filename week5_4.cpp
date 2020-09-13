#include <stdio.h>

int main()
{
    int space, rows;
    int i,k,count;
    scanf("%d",&rows);
    scanf("%d",&count);
    for (k = 0; k < count; k++){
    
    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }   
    } 
    return 0;
}