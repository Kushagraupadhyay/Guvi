#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
bool arraypass(char x[])
{
      int i = 0,j,flag=0;
      while (x[i] != '\0')
      {
          ++i;
      }
  for(j=0;j<i;j++)
  {
    if(isdigit(x[j])==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    return true;
  }
  else
  return false;
}

int main()
{
  int a,b,i,j,flag;
char x[10],y[10];
scanf("%s",&x);
scanf("%s",&y);
if(arraypass(x))
{ if(arraypass(y))
  {
      a=atoi(x);
      b=atoi(y);
      for(i=a+1;i<b;i++)
      {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
          if(i%j==0)
          {
            flag=1;
            break;
          }
        }
        if(flag==0)
        printf("%d ",i);

      }
  }
}
else
printf("Invalid Input");
return 0;
}
