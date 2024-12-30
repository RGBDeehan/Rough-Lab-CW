/* Input a word & check whether the 1st & last letter same (without upper & lower)*/
#include <stdio.h>
int main(){
char x[100];
int i,c,p;
gets (x);
p=strlen(x);

  if(x[0]==x[p-1]){
    printf("The Word Starts & Ends with Same Letter");
  }
else{
  printf("The Word Starts & Ends with Different Letter");
}

return 0;
}

