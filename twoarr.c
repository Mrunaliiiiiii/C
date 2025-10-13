#include<stdio.h>

int main(){
    int TwoArr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};

    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                printf("Enter element arr[%d][%d]:",i,j);
                scanf("%d",&TwoArr[i][j]);
        }
    }


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          printf("%d ",TwoArr[i][j]);  

        }

        printf("\n");

    }


}