#include <stdio.h>
int main()
{
    int x[100],i,j,k,m,l;

    printf("Enter 10 number for GCD Respectively: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&x[i]);
        if(x[l]<x[l+1])
        {
            m=x[l];
        }
        else
        {
            m=x[l+1];
        }
    }
    for(l=0; l<10; l=l+2)
    {


        for(j=0; j<10; j=j+2)
        {
            for(k=2; k<m; k++)
            {
                if(x[l]%k==0 && x[l+1]%k==0)
                {

                    printf("GCD: %d\n",k);

                }
            }
        }
    }
    return 0;
}





