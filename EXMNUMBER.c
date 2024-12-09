#include<stdio.h>
int main(){
int p[5],i,a1,a2,j,l,c,s,S,d[5],k;

for(i=0;i<5;i++){
printf("Enter physics value:");
scanf("%d",&p[i]);
s=s+p[i];
}
a1=s/5;
for(i=0;i<5;i++){
printf("Enter chemistry value:");
scanf("%d",&d[i]);
S=S+d[i];
}
a2=S/5;
c=0;

if(a1>=a2){
    printf("1st xm tougher\n");
}

else {
    printf("2nd xm tougher\n");
}
k=0;
for(j=0;j<5;j++){
    if(p[j]<d[j]){
        c++;
    k=d[j]-p[j];
   printf("How mark IMPROVED; %d\n",k);
printf("Who improved: %d\n",d[j]);
    }
}
printf("how many std imprv: %d\n",c);
return 0;
}

