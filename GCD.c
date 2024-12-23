#include <stdio.h>
int main(){
int y,i,x,a,m;
printf("Enter 1st numbers to find GCD");
scanf("%d",&x);
printf("Enter 2nd numbers to find GCD");
scanf("%d",&y);
    if (x<y){
        m=x;}
else{m=y;}

for (i=2;i<=m;i++) {
    if (x%i==0 && y%i==0){
        a=i;
       
    }


}
 printf("GCD: %d/n",a);








return 0;
}
