/*
Input word show number of vowels
*/
#include <stdio.h>
int main(){
char x[100];
int p,i,d=0,c=0;
scanf("%s",&x);
p=strlen(x);

for(i=0;i<p;i++){
    if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' ||
        x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U'){
        c++;
    }
}
printf("%d VOWEL\n",c);

return 0;
}


