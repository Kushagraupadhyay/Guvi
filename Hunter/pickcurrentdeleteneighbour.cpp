#include<iostream>
int main()
{
  int n,a[50],sum=0,i,flag=0,max,index;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  while(flag==0)
  {
    max=0;
    for(i=0;i<n;i++)
    {
      if(a[i]>max)
      {
        max=a[i];
        index=i;
      }
    }
    a[index]=0;
    a[index+1]=0;
    a[index-1]=0;
    if(max==0)
    {
      flag=1;
      break;
    }
    else
    {
      sum+=max;
    }
  }
  printf("%d",sum);
  return 0;
}
