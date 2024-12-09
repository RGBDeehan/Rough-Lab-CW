#include <stdio.h>
int main(){
int x[10],m,c,i,j,b;

for(i=0;i<10;i++){
printf("Enter value:");
scanf("%d",&x[i]);
    }
c=0;m=x[0];
for(j=1;j<10;j++){
    if(x[j]>m){
        m=x[j];
    }
}
for(b=0;b<10;b++){
    if(x[b]==m){
        c++;
    }
}
printf("Max value: %d\n",m);
printf("Max value quantity: %d\n",c);

return 0;
}
