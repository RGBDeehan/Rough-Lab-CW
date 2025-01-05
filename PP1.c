/*
Input a string in all upper case format and find which vowels appear the most. */
#include <stdio.h>
int main(){
char x[100];
int i,p,a=0,b=0,c=0,d=0,e=0;
gets (x);
p=strlen(x);

for(i=0;i<p;i++){
  if(x[i]=='A'){
    a++;
  }
     else if(x[i]=='E'){
        b++;
      }
     else if( x[i]=='I' ){
        c++;
      }
       else if ( x[i]=='O' ){
        d++;
       }
        else if ( x[i]=='U') {
            e++;
        }
    }
if(a>b && a>c && a>d && a>e){
    printf("A");
}
else if(b>a && b>c && b>d && b>e){
    printf("B");
}
else if(c>b && c>a && c>d && c>e){
    printf("C");
}
else if(d>b && d>c && d>a && d>e){
    printf("D");
}
else if(e>b && e>c && e>d && e>a){
    printf("E");
}
return 0;
}
