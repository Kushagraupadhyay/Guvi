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
int a,start,end,div,flagg=0;
char x[10],y;
scanf("%s",&x);
if(arraypass(x))
{
  a=atoi(x);
  div=1;
  while(a/div>=10)
  {
    div*=10;
  }
 while(a!=0)
 {
   start=a/div;
   end=a%10;
   if(start!=end)
   {
     flagg=1;
     break;
   }
  a=(a%div)/10;
  div=div/100;
 }
 if(flagg==1)
 {
   printf("No");
 }
 else
 {
   printf("Yes");
 }
}
else
printf("Invalid Input");
return 0;
}
