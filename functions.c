#include<stdio.h>
// Function Declaration -  Inform
void greet();
void add();

int main(){
    // Function Call - Use
// greet();
// greet();
// greet();
add(1,1);
add(2,2);
add(3,3);
add(31,32);
}

// Function DEFINITION - Create
void greet(){
    printf("Good Morning. Mohini");
}



void add(int a,int b){
   
    printf("%d\n",a+b);
}

