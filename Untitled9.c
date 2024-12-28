#include<stdio.h>
int main(){
int n,i,j,k;
scanf("%d",&n);
int a[n],b[n],c[n],d[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
scanf("%d",&b[i]);
scanf("%d",&c[i]);
scanf("%d",&d[i]);
}
for(k=0;k<n;k++){
for(j=0;j<n;j++){
if(b[k+1]>b[k]){
    b[k]=b[k+1];

}
}
printf("%d",b[k]);
}








return 0;
}
