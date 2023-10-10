#include<stdio.h>

int main(){
    int i,j;
    scanf("%d",&i);
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            printf("%d*%d=%2d ",j,i,i*j);
        }
        printf("\n");
    }
}