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
  int a,b,i;
char x[10],y[10];
scanf("%s",&x);
scanf("%s",&y);
if(arraypass(x))
{ if(arraypass(y))
  {
      a=atoi(x);
      b=atoi(y);
      if(a<=10000 && b<=10000)
      {
      for(i=a+1;i<b;i++)
      {
        if(i%2!=0)
        printf("%d ",i);
      }
     }
    else
    printf("Invalid Input");
  }
}
else
printf("Invalid Input");
return 0;
}
