#include <stdio.h>

int x,count,i;
int a[1000];
int even = 0,odd = 0;

int sumsum(int p){
    if (i % 2 == 0 || i == 0){
        odd += p;
        return(0);
    }
    else {
        even += p;
        return(0);
    }
}

int main(){
    scanf("%d",&x);
    i = 0;
    while(x>0){
        a[i] = x % 10;
        // printf("%d \n",x % 10);
        x = x/10;
        // printf("x = %d \n",x );
        i = i+1;
    }
    count = i;
    for (i = 0; i < count; i++){
        sumsum(a[i]);
        // printf("%d \n",a[i]);
    }
    printf("%d",even - odd);
}