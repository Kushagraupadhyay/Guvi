#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,n1,n3;
  n3=0;
  cin>>n;
  if(n==0)
  {
    printf("0");
  }
  else
  {
    while(n!=0)
    {
      n1=n%10;
      n=n/10;
      n3=n3*10+n1;

    }
    cout<<n3;
  }
  return 0;
}
