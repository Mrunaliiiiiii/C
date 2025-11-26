#include <stdio.h>


int main() {
    int age, license;


    printf("Enter your age: ");
    scanf("%d", &age);


    printf("Do you have a driving license? (1 = Yes, 0 = No): ");
    scanf("%d", &license);


    if (age >= 18) {   // Check voting age
        if (license == 1) {  
            printf("You are eligible to vote and you have a driving license.\n");
        } else {
            printf("You are eligible to vote but you do not have a driving license.\n");
        }
    } else {  // Age < 18
        if (license == 1) {
            printf("You are not eligible to vote but you have a driving license (This is unusual!).\n");
        } else {
            printf("You are not eligible to vote and you do not have a driving license.\n");
        }
    }


    return 0;
}



