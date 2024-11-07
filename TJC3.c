#include <stdio.h>
int main() {
float x,y,z;
int bill ;
    printf("Enter Fraction Km: ");
    scanf("%f", &x);

    printf("Enter Waiting Timen in minute: ");
    scanf("%f", &y);
z = ceil (x);
 bill = (z * 25 ) + (y * 5);
printf("Total Bill is: %d", bill);
return 0;
}
