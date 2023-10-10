#include<stdio.h>

int main(){
    int i,j;
    for(i=1;i<10;i++){
        for(j=1;j<10;j+=3){
            printf("%d * %d = %2d\t",j,i,i*j);
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<10;i++){
        for(j=2;j<10;j+=3){
            printf("%d * %d = %2d\t",j,i,i*j);
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<10;i++){
        for(j=3;j<10;j+=3){
            printf("%d * %d = %2d\t",j,i,i*j);
        }
        printf("\n");
    }
    printf("\n");
}