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
  int m,n,ans;
char mc[10],xc[10];
scanf("%s",&mc);
scanf("%s",&xc);
if(arraypass(mc))
{
  if(arraypass(xc))
  {
     m=atoi(mc);
     n=atoi(xc);
     ans=pow(m,n);
     printf("%d",ans);
  }
  else
  printf("Invaid Input");
}
else
printf("Invalid Input");
return 0;
}

