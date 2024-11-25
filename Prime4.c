#include <stdio.h>
int main() {
int x,a,i;

printf("Enter num");
scanf("%d",&x);

for (i=2;i<x;i++){
    if(x%i==0){
   a=i;

    }  }

printf("%d\n",a);

return 0;
}
