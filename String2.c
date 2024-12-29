/*
Display number of upper case & lower case
*/
#include <stdio.h>
int main(){
char x[100];
int p,i,d=0,c=0;
scanf("%s",&x);
p=strlen(x);

for(i=0;i<p;i++){
    if(x[i]>='a' && x[i]<='z'){
        c++;
    }
else if(x[i]>='A' && x[i]<='Z'){
        d++;}
}

printf("%d UPPER\n",c);
printf("%d lower\n",d);
return 0;
}

