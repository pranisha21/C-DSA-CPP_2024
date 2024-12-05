// output 

#include <stdio.h>

int main() {
    int x = 19;

    int x_value = x++ + --x - x++;
    printf("X: %d\n",x_value);

    x = 19;

    int x_value2 = --x + x-- - x++ + ++x;
    printf("X: %d\n",x_value2 );
}