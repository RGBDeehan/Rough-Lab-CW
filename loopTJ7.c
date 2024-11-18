
#include <stdio.h>
int main(){
int x ,  c;
printf("Input temp:");

c=0;
for(int i=0;i<7;i++){
  scanf("%d",&x);
  if(x>30){
    c++;
  }
}
printf("%d",c);


return 0 ;
}
