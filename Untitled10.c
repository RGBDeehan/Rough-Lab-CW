#include <stdio.h>
int main(){
int i,r=0,b=0,n,j;
scanf("%d",n);
int x[n];

for(i=0;i<n;i++){
    scanf("%d",x[i]);
    }

for(j=0;j<n;j++){
if(x[j]%2==0){
    b=b+x[j];
}
else if(x[j]%2!=0){
    r=r+x[j];

}
  printf("%d\t",r);
printf("%d\t",b);  }






return 0;
}
