#include <stdio.h>
int main(){
    int i,d,x[5],g,avg,b,m,n,s,c,j,SD;

printf("Enter 10 numbers respectively: ");
  s=0;
   for(i=0;i<5;i++){
    scanf("%d",&x[i]);
    s=s+x[i];
   }
   avg=s/5;b=0;g=0;d=0;
   for(j=0;j<5;j++){
    b=x[j]-avg;
    m=b*b;
    d=d+m;


   }  g=d/5;
    printf("Variance are: %d\n",g);
   printf("AVG: %d\n",avg);
   SD=sqrt(g);
   printf("THE SD: %d\n",SD);
    return 0;
}



/* 
#include <stdio.h>
#include<math.h>
int main(){
    float d,x[5],g,avg,b,m,n,s,c,SD;
    int i,j;
    printf("Enter 5 numbers respectively: ");
s=0;
   for(i=0;i<5;i++){
    scanf("%f",&x[i]);
    s=s+x[i];
   }
   avg=s/5;b=0;d=0;g=0;
   for(j=0;j<5;j++){
    b=x[j]-avg;
    m=b*b;
    d=d+m;

    }
    g=d/5;
    printf("Variance are: %.2f\n",g);
   printf("AVG: %.2f\n",avg);
   SD=sqrt(g);
   printf("THE SD: %.2f\n",SD);
    return 0;
}
*/
