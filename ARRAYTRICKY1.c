#include <stdio.h>
int main(){
int i,x[10],a,b,j,max_even,max_odd;

printf("Enter 10 numbers respectively: ");
   max_even=0;
   max_odd=0;
for(i=0;i<10;i++){
    scanf("%d",&x[i]);
    if(x[i]%2==0 ){
            if(x[i]>max_even){
        max_even=x[i]; }
        }
    else{
        if(x[i]>max_odd){
            max_odd=x[i];
        }

    }

}

printf("The highest even num: %d\n",max_even);
printf("The highest off num: %d\n",max_odd);
return 0;
}
