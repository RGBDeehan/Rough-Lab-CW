#include <stdio.h>
int main(){
int a,i,b,c,s,x[10];
s=0;a=0;c=0;
for (i=0;i<10;i++){
    printf("Enter value:");
    scanf("%d",&x[i]);
     s=s+x[i];
}
a=s/10.0;
for(b=0;b<10;b++){
    if(x[b]>a){
        c++;
        printf("The gre3ater value: %d\n",x[b]);
    }
}


printf("Average: %d\n",a);
printf("Greater than avg: %d\n",c);

return 0;
}
