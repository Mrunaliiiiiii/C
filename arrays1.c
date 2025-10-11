#include<stdio.h>
int main(){
//     int marks[10];

//     marks[0]=50;
//     marks[1]=40;
//     marks[2]=49;
//     marks[3]=48;
//     marks[4]=47;
//      marks[5]=46;
//       marks[6]=44;
//        marks[7]=43;
//         marks[8]=42;
    
//   printf("%d\n",marks[0]);
//   printf("%d\n",marks[1]);
//   printf("%d\n",marks[2]);
//   printf("%d\n",marks[3]);
//   printf("%d\n",marks[4]);
//   printf("%d\n",marks[5]);
//   printf("%d\n",marks[6]);
//   printf("%d\n",marks[7]);
//   printf("%d\n",marks[8]);
  int marks[10] = {10,20,30,40,50,60,70,80,90,100};
  int i=0;
  for (i=0;i<10;i++){
    printf("enter marks for student %d:",i+1);
    scanf("%d",&marks[i]);
    
  }

}