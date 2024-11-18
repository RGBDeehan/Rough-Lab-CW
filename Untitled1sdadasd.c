#include <stdio.h>
int main(){
int x , y ;
printf("Enter packet:");
scanf("%d",&x);
 y = ((x/4)*90 ) + (x % 4)*30;
 printf("Bill: %d\n",y);


return 0 ;
}
