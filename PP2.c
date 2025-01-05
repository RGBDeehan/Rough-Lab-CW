/*
Input a string in all upper case format and find which vowels appear the most. */
#include <stdio.h>
int main(){
char x[100];
int i,p,a=0,b=0,c[5],d=0,e=0;
gets (x);
p=strlen(x);

for(i=0;i<p;i++){
  if(x[i]=='A'){
    c[0]++;
  }
     else if(x[i]=='E'){
        c[1]++;
      }
     else if( x[i]=='I' ){
        c[2]++;
      }
       else if ( x[i]=='O' ){
        c[3]++;
       }
        else if ( x[i]=='U') {
            c[4]++;
        }
    }


return 0;
}
