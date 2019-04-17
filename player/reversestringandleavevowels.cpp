#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  char a[100],count,i,flag;
  scanf("%s",&a);
  count=0;
  flag=0;
  i=0;
  while(flag!=1)
  {
    if(a[i]=='\0')
    {
      flag=1;
    }
    else
    {
      count++;
    }
    i++;

  }
  for(i=count-1;i>=0;i--)
  {
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
    {
      continue;
    }
    else
    {
      printf("%c",a[i]);
    }
  }
}
