
// Happy coding code

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num<10) {
        printf("Number is less than 10\n");
    } else if (num>10 && num<20) {
        printf("Number is greater than 10 but less than 20\n");
    } else {
        printf("Happy Coding\n");
    }
}