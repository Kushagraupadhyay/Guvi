#include<iostream>
int main()
{
  int a[50],n,noe=0,i,count,maxsubset,b[50],z;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  count=1;
  maxsubset=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>=maxsubset)
    {
      maxsubset=a[i];
      count++;
    }
    else
    {
      maxsubset=a[i];
      b[noe]=count;
      noe++;
      count=1;
    }
  }
  b[noe]=count;
  z=b[0];
    for(i=1;i<=noe;i++)
    {
      if(b[i]>z)
      {
        z=b[i];
      }
    }
    printf("%d",z);

  return 0;
}
