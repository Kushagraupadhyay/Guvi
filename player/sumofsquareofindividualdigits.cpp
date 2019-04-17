#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,sum=0,n1;
  cin>>n;
  if(n<0)
  {
    printf("Enter positive numbetr");
  }
  else
  {
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
        sum=sum+(n1*n1);
      }
      cout<<sum;
    }
  }
  return 0;
}
