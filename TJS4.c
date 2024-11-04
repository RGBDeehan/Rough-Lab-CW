#include <stdio.h>
int main() {
float r, h, x ;

printf("Enter Radius of the cylinder: ");
scanf("%f" ,&r);

printf("Enter height of the cylinder: ");
scanf("%f",&h);

x = (3.1416 * r * r* h);

printf("The Volume is: %.4f\n",x);

return 0;
}
