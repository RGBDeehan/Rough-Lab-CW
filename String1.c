/*
Show Full Upper Case. Apple==APPLE
*/
#include <stdio.h>
int main(){
char x[100];
int p,i,c=0;
scanf("%s",&x);
p=strlen(x);

for(i=0;i<p;i++){
    if(x[i]>='a' && x[i]<='z'){
        x[i]=x[i]-32;
    }

}

printf("%s",x);
return 0;
}
