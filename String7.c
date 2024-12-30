/* Input a word & check whether the 1st & last letter same*/
#include <stdio.h>
int main(){
char x[100];
int i,c,p;
gets (x);
p=strlen(x);

  if(x[0]==x[p-1] || x[0]==x[p-1]-32 || x[0]==x[p-1]+32){
    printf("The Word Starts & Ends with Same Letter");
  }
else{
  printf("The Word Starts & Ends with Different Letter");
}

return 0;
}


