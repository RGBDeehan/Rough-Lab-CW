#include <stdio.h>
int main() {
int x , hundreds , tens , ones ;    
printf("Enter the three digit number : ");
scanf("%d" , & x);

hundreds = (x / 100) ;
tens = (x % 100) / 10 ;
ones = (x % 100) % 10 ;

printf("The hundreds is : %d\n" , hundreds);
printf("The tens is : %d\n", tens);
printf("The ones is : %d\n" ,ones);

return 0;
}