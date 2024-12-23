#include <stdio.h>
int main () {
int x[100],i,c,j;

printf("Enter the numbers respectively: \n");

for(i=0;i<10;i++){
    scanf("%d",&x[i]);
c=0;
for(j=2;j<x[i];j++){
    if(x[i]%j==0){
        c++;
    }
}
printf("FACTORS: %d\n",c);
}
return 0;}
