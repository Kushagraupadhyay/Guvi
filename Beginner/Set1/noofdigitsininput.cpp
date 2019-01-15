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
  int a,nod=0;
char x[10],y;
scanf("%s",&x);
if(arraypass(x))
{
  a=atoi(x);
  while(a>0)
  {
    a=a/10;
    nod+=1;
  }
  printf("%d",nod);
}
else
printf("Invalid Input");
return 0;
}
