#include <stdio.h>
int main() {
int x ,c,i,e,d;
e=0;d=0;
printf("Enter a number");
scanf("%d",&x);
c=0;
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

}
printf("Number of odd:%d\n",d);
printf("Number of even:%d\n",e);
return 0;
}

