#include<stdio.h>


int main(){
    // int marks[10];

    // marks[0]=90;
    // marks[1]=80;
    // printf("%d\n",marks[0]);
    // printf("%d\n",marks[1]);
    int marks[10] = {90,80,70,50,40,90,80,70,50,40};
    int i=0;

    for(i=0;i<10;i++){
        printf("Enter Marks for student %d:",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<10;i++){
        printf("MArks for %d : %d\n",i,marks[i]);
    }
}