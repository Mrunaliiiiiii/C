#include <stdio.h>
int main (){
    FILE  *f;
    f= fopen("two.txt","r");
    fprintf(f,"Hello File3");
    fclose(f);
}