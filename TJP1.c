#include <stdio.h>
int main() {
    float number, square, cube;

    printf ("Enter a number: ");
    scanf ("%f" , &number);

    square = number * number;
    cube = number * number * number;

    printf("The square of %.2f is: %.2f\n", number, square);
    printf("The cube of %.2f is: %.2f\n",number, cube);


    return 0;
}
