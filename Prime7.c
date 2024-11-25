#include <stdio.h>
int main() {
int x,a,b,i;
printf("Enter num");
scanf("%d",&x);
a=0;
for (i=2;i<x;i++){
    if(x%i==0){
        a=i;
        b=a+1;
if (a==0){printf("There is no ");}
else if(x%b==0){printf("%d\t%d\n",a,b);}
    }

}

return 0;
}
