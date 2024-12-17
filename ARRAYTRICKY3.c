#include <stdio.h>
int main(){
int i,x[5],a,b,c,j;
printf("Enter 10 numbers respectively: ");
   for(i=0;i<5;i++){
    scanf("%d",&x[i]);
    }
    c=0;a=0;
    for(j=1;j<5;j++){
        if(x[j]%x[j-1]==0){
             a=x[j];
            c++;
            printf("The divisable are: %d\n",a);
        }
    }


printf("There are %d number are divisable\n",c);

return 0;}
