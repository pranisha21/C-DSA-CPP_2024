// swap numbers wuthout using temp varieable

#include <stdio.h>
 int main() {
    int num1 = 10, num2 = 20;
    
    printf("num1 = %d, num2 = %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("num1 = %d, num2 = %d\n", num1, num2);
}