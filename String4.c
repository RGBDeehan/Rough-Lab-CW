/*Count number of words (Without Skipp extra spaces) */
#include <stdio.h>
int main(){
char x[100];
int i,c,p;
gets (x);
p=strlen(x);
c=0;
for(i=0;i<p;i++){
  if(x[i]==' '){
    c++;
  }
}
printf("%d\n",c+1);
return 0;
}
