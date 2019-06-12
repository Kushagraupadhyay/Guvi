//Longest increasing sequencce in an array
#include<iostream>
#include<stdio.h>
#include<malloc.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,max,count;
  scanf("%d",&n);
  int *a=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  if(n==0)
  {
    printf("0");
  }
  else
{
  max=0;
  count=0;
  for(int i=2;i<n;i++)
  {
    if(a[i]>a[i-1])
    {
      count++;
    }
    else
    {
      if(count>max)
      {
        max=count;
      }
      count=0;
    }
  }
  if(count>max)
  {
    max=count;
  }
  max++;
  printf("%d",max);
}
  return 0;
}
