#include<stdio.h>

int main(){
    int age = 22;

    // Simple If Statement 
    // if(age>18){
    //     printf("You can vote\n");
    // }

    // If else statement 
    // if(age>18){
    //     printf("You can vote\n");
    // }else{
    //     printf("You cannot vote\n");

    // }

    // If else if Ladder 
    int marks=9;

//     if(marks>90){
//         printf("A Grade");
//     }else if(marks>80){
//          printf("B Grade");
//     }
//     else if(marks>70){
//          printf("C Grade");
//     }
//     else if(marks>60){
//          printf("D Grade");
//     }
//     else if(marks>35){
//          printf("E Grade");
//     }
//     else {
//          printf("F Grade");
//     }


// Nested If Else 
int weight = 55;
if(age>18)
{
         if(weight>50){
             printf("can donate Blood ");
     }else{
             printf("cannot donate Blood due to weight ");
         }
     }else{
             printf("cannot donate Blood due to age criteria");}

     

   

}