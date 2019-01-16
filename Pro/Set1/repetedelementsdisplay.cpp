#include<bits/stdc++.h>
bool check(int b[],int n,int m)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(b[i]==m)
    return false;
    else
    return true;
  }
}
int main()
{
  int a[50],b[50],i,j,count=0,n;
  scanf("%d",&n);
  if(n>0 && n<100000)
  {
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=0;j<n;j++)
  {
    for(i=j+1;i<n;i++)
    {
      if(a[j]==a[i])
      {
        if(check(b,n,a[i]))
        {
          b[count]=a[j];
          count++;
        }
        else
        continue;
      }
    }
  }
  if(count==0)
  {
    printf("Unique");
  }
  else
  {
  for(i=0;i<count;i++)
  printf("%d ",b[i]);
 }
}
else
{
  printf("Invalid Input");
}
  return 0;
}
