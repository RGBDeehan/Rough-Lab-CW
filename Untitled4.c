
#include <stdio.h>
int main(){
int n,y,a,b,c,d=0,e=0,i,j,k,s=0,s2=0;
scanf("%d",&n);
int x[n*6];
for(i=1;i<=n*6;i++){
scanf("%d",&x[i]);
/*printf("%d\n",x[i]);*/
}
s2=0;s=0;
for(j=0;j<n*6;j++){

    if(x[j]%2!=0){
        s=s+x[j];
    }
   else {
        s2=s2+x[j];

    }
}
printf("%d\n",s2);

printf("%d\n",s);

return 0;
}
