#include<stdio.h> //Preprocessor Line - stdio=>standard input output.header

int main(){//main Function - Starting Point
    // Arithmetic 
    // +,-,*,/,%
    // printf("%d\n",10+10);
    // printf("%d\n",10-10);
    // printf("%d\n",10*10);
    // printf("%d\n",10/10);
    // printf("%d\n",103%10);

    // Unary 
    // ++,--
    // int a = 10; //assign

    // printf("%d\n",a--);
    // printf("%d\n",a);


    // Relation / Comparison
    // <,>,<=,>=,==,!= ==>(1-True/0-False)
    // printf("%d\n",10>5);
    // printf("%d\n",10<9);
    // printf("%d\n",10<=9);
    // printf("%d\n",10>=9); 
    // printf("%d\n",10==100);
    // printf("%d\n",10!=100);

    // Logical 
    // && || !
    // && -Logical and
    // printf("%d",10>5 && 10<100);
    // printf("%d",1 && 1);
    // printf("%d\n",0 || 1);
    // printf("%d\n",1 || 0);
    // printf("%d\n",!(1 || 0));
    // printf("%d\n",!(0));

    // Assignment 
    // =,+=,-=,*=,/=
    int a = 10; //Initialization
    // a=20; // override
    // a = a+20; // add
    a+=20;//30
    a-=10;//20
    // printf("%d",a);


    // Bitwise      
    printf("%d\n",4&5);            //and
    printf("%d\n",4|5);         //or                                                                                                                                                                     
    printf("%d\n",4^5);      //Xor
    printf("%d\n",~10);                                                                                                                                                                        
    printf("%d\n",~-10);   
    
    // Shift 
    printf("%d\n",10<<2);
    printf("%d\n",10>>2);

}
