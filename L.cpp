#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin >> n;
long long x[100];
  for(j=0;j<n*2;j++)
{
  cin >> x[j];
}
for(i=0;i<n*2;i=i+2){
  if(x[i]<x[i+1]){
    cout << "<" << endl;
  }
  else if(x[i]>x[i+1]){
    cout << ">" << endl;
  }
  else if(x[i]==x[i+1]){
    cout << "=" << endl;
  }
}

return 0;
}
