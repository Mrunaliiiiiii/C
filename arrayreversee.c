#include <stdio.h>

int main() {
    int num,orgnum, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    orgnum=num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if(orgnum==reversed)
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}