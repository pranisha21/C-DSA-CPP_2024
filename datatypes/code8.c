// even odd number checking 

#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("number is even \n");
    } else {
        printf("number is odd \n");
    }

}
