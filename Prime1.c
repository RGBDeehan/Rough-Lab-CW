#include <stdio.h>
int main() {
int x,c,i;
printf("Enter num");
scanf("%d",&x);
c=0;
for (i=2;i<x;i++){
    if(x%i==0){
    c++;
    } }
if(c==0){printf("The Number is prime\n");}
    else{printf("The Number is Composit");}





return 0;
}
