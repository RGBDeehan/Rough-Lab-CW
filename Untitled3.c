#include <stdio.h>
int main(){
int n,y,a,b,c,i,j,k;
scanf("%d",&n);
int x[n];
for(i=1;i<=n;i++){
scanf("%d",&x[i]);
}
for(k=0;k<=n+1;k++){
        a=0;b=0;
for(j=0;j=n/3;j++){
   a=x[k+1];
   b=x[n-1];


if(a>b){
    printf("A");
}
else if(a<b){
    printf("B");
}
else if(a==b){
    printf("D");

} }
}

printf("%d",&a);
return 0;
}

