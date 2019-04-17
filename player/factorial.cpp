#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a[50],n,i,fact;
  cin>>n;
  if(n<0)
  {
    printf("Enter a positive number");
  }
  else
  {
    if(n==0)
    {
      printf("0");
    }
    else
    {
      fact=1;
      for(i=n;i>=1;i--)
      {
        fact*=i;
      }
      cout<<fact;
    }

  }

  return 0;
}
