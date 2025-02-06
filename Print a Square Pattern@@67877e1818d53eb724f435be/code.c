#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        printf("* ");
        for(j=0;j<rows-1;j++){
            printf("* ");
        }
        printf("\n");
}
}