#include<stdio.h>

int main(){
FILE *f;
f = fopen("one.txt","w");
fprintf(f,"Hello File3");
fclose(f);
}