#include <stdio.h>
int main() {
int x,c,s,i;
float y;
printf("Enter num");
scanf("%d",&x);
c=0;s=0;
for (i=2;i<x;i++){
    if(x%i==0){
    s=s+i;
c++;

    }  }
if( c > 0){
    y=(float)s/c;
}
else{printf("It has no divisor");}
printf("The avg is %.2f\n",y);



return 0;
}
