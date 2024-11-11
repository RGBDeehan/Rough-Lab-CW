#include <stdio.h>
#include <math.h>

int main() {
    int num;
    double sqrt_num;


    printf("Enter a number: ");
    scanf("%d", &num);


    if (num < 0) {
        printf("Negative numbers cannot be perfect squares.\n");
        return 0;
    }


    sqrt_num = sqrt(num);


    if (sqrt_num == (int)sqrt_num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
