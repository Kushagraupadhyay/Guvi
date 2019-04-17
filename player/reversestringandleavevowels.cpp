#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  char a[100];
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%c",&a[i]);
  }
  for(i=n-1;i>=0;i--)
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
