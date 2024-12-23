#include <stdio.h>
int main () {
int x[10],i,c[10],d,s,a,j;

printf("Enter the numbers respectively: \n");
s=0;a=0;
for(i=0;i<10;i++){
    scanf("%d",&x[i]);
d=0;
for(j=2;j<x[i];j++){
    if(x[i]%j==0){
        d++;
    }
}
c[i]=d;
s=s+c[i];
}

a=s/10;

printf("AVG fact: %d\n",a);
return 0;}

