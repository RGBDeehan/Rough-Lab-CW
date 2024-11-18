#include <stdio.h>
int main(){
int x , y ;
printf("Enter time:");
scanf("%d",&x);
 y = (ceil( x / 30.0)*40);
 printf("Bill: %d\n",y);


return 0 ;
}
