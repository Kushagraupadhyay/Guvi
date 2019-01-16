#include<bits/stdc++.h>
int main()
{
  int a[50],b,i,j,flag,pos,n;
  scanf("%d",&n);
  if(n>0 && n<100000)
  {
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=0;j<n;j++)
  {
    flag=0;
    for(i=0;i<n;i++)
    {
      if(a[i]==a[j])
      {
        flag++;
        if(flag==1)
        {
          pos=i;
        }
      }
    }
    if(flag==1)
    {
      b=a[pos];
      printf("%d",b);
      break;
    }
  }

}
else
{
  printf("Invalid Input");
}
  return 0;
}
