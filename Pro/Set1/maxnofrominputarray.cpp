#include<bits/stdc++.h>
int main()
{
  int a[50],i,j,max,pos,n;
  scanf("%d",&n);
  if(n>0 && n<100000)
  {
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    max=a[i];
    for(j=i+1;j<n;j++)
    {
      if(a[j]>max)
      {
        max=a[j];
        pos=j;
      }
    }
    if(a[i]!=max)
    {
      a[pos]=a[i];
      a[i]=max;
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
}
else
{
  printf("Invalid Input");
}
  return 0;
}
