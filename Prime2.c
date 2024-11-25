#include <stdio.h>
int main() {
int x,i;
printf("Enter num");
scanf("%d",&x);
i=0;
for (i=2;i<x;i++){
    if(x%i==0){ printf("Factors: %d\n",i);}}
    /*c++;
    } }
if(c==0){printf("The Number is prime\n");}
    else{printf("The Number is Composit");}  */
return 0;
}
