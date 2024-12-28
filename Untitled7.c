#include<stdio.h>
int main(){
int n,j;
scanf("%d",n);
int b[n],w[n],o[n];

for(j=0;j<n;j++){
    scanf("%d",&b[j]);
    scanf("%d",&w[j]);
    scanf("%d",&o[j]);
if(o<b[j]+w[j]){
    printf("Yes");
}
else if(o>b[j]+w[j]){
    printf("No");
}
}
return 0;
}
