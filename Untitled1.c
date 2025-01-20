// Find max age from a list of ages //

#include <stdio.h>
int main(){

freopen("age.txt","r",stdin);
freopen("ans.txt","w",stdout);

int m,n,x[100],i;
m=0;
for (i=0;i<n;i++){
        scanf("%d",&x[i]);
    if(x[i]>m){
        m=x[i];
    }
}
return 0;
}

/*
#include <stdio.h>

int main() {
    // Open the input and output files
    freopen("age.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);

    int m, n, x[100], i;

    // Read the number of ages
    scanf("%d", &n);

    // Initialize m to a small number or first value in the list
    m = -1;

    // Read the ages and find the maximum
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        if (x[i] > m) {
            m = x[i];
        }
    }

    // Write the maximum age to the output file
    fprintf(stdout, "Maximum age is: %d\n", m);

    return 0;
}
*/



