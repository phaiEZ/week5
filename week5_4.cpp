#include <stdio.h>

int space, rows,x;
int i,k,count;
int maketree(int rows){
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
    return 0;
}

int main(){
    
    scanf("%d",&x);
    scanf("%d",&count);
    for (k = 0; k < count; k++){
    maketree(x);
    } 
    return 0;
}