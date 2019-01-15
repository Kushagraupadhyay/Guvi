#include<iostream>
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
  int a,i,sum=0;
char x[10],y;
scanf("%s",&x);
if(arraypass(x))
{
  a=atoi(x);
  if(a<0)
  {
    printf("Invalid Input");
  }
  else
  {
    for(i=0;i<=a;i++)
    {
      sum+=i;
    }
    printf("%d",sum);
  }
}
else
printf("Invalid Input");
return 0;
}
