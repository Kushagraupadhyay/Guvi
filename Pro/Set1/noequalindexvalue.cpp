#include<bits/stdc++.h>
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
  for(i=0;i<n;i++)
  {
    if(a[i]==i)
    {
      b[count]=a[i];
      count++;
    }
  }
  if(count==0)
  {
    printf("-1");
  }
  else
  {
    for(i=0;i<count;i++)
    {
      printf("%d ",b[i]);
    }
  }

}
else
{
  printf("Invalid Input");
}
  return 0;
}
