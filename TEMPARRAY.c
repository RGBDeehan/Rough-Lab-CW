#include<stdio.h>
int main(){
int t[10],i,j,c;

for(i=0;i<10;i++){
printf("Enter value:");
scanf("%d",&t[i]);}
c=0;
for(j=1;j<10;j++){
    if(t[j]<t[j-1]){
        c++;
    }
}
printf("how many tmep high: %d\n",c);
return 0;
}
