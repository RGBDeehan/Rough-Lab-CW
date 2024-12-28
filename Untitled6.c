#include<stdio.h>
int main(){
int n,m,u,v,t,t1,t2,s=0;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&u);
scanf("%d",&v);

s=n-m;
t1=m/u;
t2=s/v;
t=t1+t2;

printf("%d\n",t);
return 0;
}

