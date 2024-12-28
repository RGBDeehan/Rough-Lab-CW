#include<stdio.h>
int main(){
int n,a,c,i,j,k;
scanf("%d",&n);
int x[n],y[n],z[n];
for(i=1;i<=n;i++){
scanf("%d",&x[i]);
scanf("%d",&y[i]);
scanf("%d",&z[i]);
if(z[i]<x[i]+y[i]){
printf("Yes\n");}
else if(z[i]>x[i]+y[i]){
printf("No\n");}}
return 0;
}

