#include <stdio.h>
int main(){
int x[20],y[20],i,j,c;

printf("Enter the number: ");

    for(i=0;i<5;i++){
        scanf("%d",&x[i]);
    }
    for(j=2;j<x[i];j++){
        if(x[i]%j==0){
            y[j]=j;
            c++;
            if( x[0]%y[j]==0 &&  x[1]%y[j]==0 && x[2]%y[j]==0 && x[3]%y[j]==0 && x[4]%y[j]==0)
{
    printf(" common factor%d\n",y[j]);

}


        }
    }

}

