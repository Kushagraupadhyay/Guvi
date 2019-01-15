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
  int a,b,i,ai[50],sum=0;
char n[10],k[10],ac[10],y;
scanf("%s",&n);
scanf("%s",&k);
if(arraypass(n))
{
  if(arraypass(k))
  {
    a=atoi(n);
    b=atoi(k);
  }
}
else
printf("Invalid Input");
for(i=0;i<a;i++)
{
  scanf("%s",&ac);
  if(arraypass(ac))
  {
    ai[i]=atoi(ac);
  }
  else{
    printf("Invalid Input");
    break;
  }
}
for(i=0;i<b;i++)
{
  sum+=ai[i];
}
printf("%d",sum);
return 0;
}
