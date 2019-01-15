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
  int a;
char x[10],y;
scanf("%s",&x);
if(arraypass(x))
{
  a=atoi(x);
  if(a<0)
  printf("Invalid Input");
  else{
  if(a%400==0)
  printf("Leap Year");
  else if (a%100==0)
  printf("Not a Leap Year");
  else if(a%4==0)
  printf("Leap Year");
  else
  printf("Not a Leap Year");
}
}
else
printf("Invalid Input");
return 0;
}
