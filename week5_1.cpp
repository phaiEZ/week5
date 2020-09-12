#include<stdio.h>
int x,y,z,j,i,k,n,isim;
char a[1000];

int phai_bin(int n){
    for(i=0;n>0;i++){  
        if (n%2 == 1){
            a[i] = '1';
        }
        else{
            a[i] = '0';
        }    
        n=n/2;    
    }    
}

int main(){
    scanf("%d",&x);
    if (x == 0){
        printf("###\n");
        printf("# #\n");
        printf("###\n");
        return(0);
    }
    phai_bin(x);
    // printf("%d",i);  
    isim = i;
    for(i=i-1;i>=0;i--){    
        if (a[i] == '1'){
            printf("#");
        }
        else{
            printf("###");
        }
        printf(" ");
}
printf("\n");
i = isim;
for(i=i-1;i>=0;i--){    
        if (a[i] == '1'){
            printf("#");
        }
        else{
            printf("# #");
        }
        printf(" ");
}
printf("\n");
i = isim;
for(i=i-1;i>=0;i--){    
        if (a[i] == '1'){
            printf("#");
        }
        else{
            printf("###");
        }
        printf(" ");
} 
return(0);
}