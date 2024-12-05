// divible by 3 or not 


#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num % 3 == 0) {
        printf("number is divisible by 3\n");
    } else {
        printf("number is not divisible by 3\n");
    }
}
