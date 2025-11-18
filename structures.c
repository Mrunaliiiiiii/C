#include<stdio.h>
#include<string.h>

struct Student{
    int roll_no;
    char name[30];
    float marks;
};

int main(){
    struct Student s1;
     s1.roll_no = 101;
     strcpy(s1.name,"jhon");
     s1.marks=90.5;

     printf("Roll No.:%d\n",s1.roll_no);
     printf("Name:%s\n",s1.name);
     printf("Marks:%f\n",s1.marks);

    struct Student s2 = {102,"jane",99.5};
    display(s2);
}


void display(struct Student s){
    
     printf("Roll No.:%d\n",s.roll_no);
     printf("Name:%s\n",s.name);
     printf("Marks:%f\n",s.marks);
}
