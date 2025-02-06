#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    for(i=1;i<rows+1;i++){
        for(j=0;j<i;j++){
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}