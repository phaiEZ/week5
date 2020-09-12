#include <stdio.h>    
     
int x,i;
    int num = 1229;    
    int rem = 0, sum = 0, n;    
    int a[1000];
    int j;

int yud(int p){
    j = 0;
    while(p > 0){    
        rem = p%10;
        a[j] = rem;    
        p = p/10;   
        j = j+1 ;
    }
    return(0);
}


int main()    {    
    scanf("%d",&x);
    yud(x);
    for (i = 0; i < j; i++)
    {
       sum += a[i];
    }
    if ((x%sum) == 0){
        printf("true");
    }
    else {
        printf("false");
    }

}  