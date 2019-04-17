#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[50],n,i,fact;
  scanf("%d",&n);
  if(n<0)
  {
    printf("Enter a positive number");
  }
  else
  {
    if(n==0)
    {
      printf("1");
    }
    else
    {
      fact=1;
      for(i=n;i>=1;i--)
      {
        fact*=i;
      }
      printf("%d",fact);
    }

  }

  return 0;
}
