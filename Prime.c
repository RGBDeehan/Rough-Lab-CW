#include <stdio.h>
int main() {
int x ,c,i,l,n,d,e;

printf("Enter a number");
scanf("%d",&x);
c=0;d=0;e=0;
if ( x <= 0){
    printf("It's not a prime number");
}
else{

    for(i=2;i<x;i++){
    if (x%i==0){
        c++;
        printf("%d\n",i);
if( i % 2 == 0){
      e++;
    printf("EVEN\n");
}
else{
    d++;
    printf("ODD\n");
}
    }
}
if(c == 0){
    printf("The number is Prime");
}
else {printf("The number is not prime");}

}

return 0;
}
