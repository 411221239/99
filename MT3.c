#include<stdio.h>

int main(){
    int i,j;
    for(i=1;i<10;i++){
        for(j=1;j<4;j++){
            printf("%d * %d = %2d\t",j,i,i*j);
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<10;i++){
        for(j=4;j<7;j++){
            printf("%d * %d = %2d\t",j,i,i*j);
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<10;i++){
        for(j=7;j<10;j++){
            printf("%d * %d = %2d\t",j,i,i*j);
        }
        printf("\n");
    }
    printf("\n");

}