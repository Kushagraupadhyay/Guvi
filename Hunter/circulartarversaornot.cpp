#include<iostream>
#include<bits/stdc++.h>
#define north 0
#define east 90
#define south 180
#define west 270
bool is_circular(char arr[])
{
  int x=0,y=0,l,dir=north,i;
  l=strlen(arr);
  for(i=0;i<l;i++)
  {
    if(arr[i]=='R')
    {
      dir=(dir+90)%360;
    }
    else if(arr[i]=='L')
    {
      dir=(360+dir-90)%360;
    }
    else if(arr[i]=='G')
    {
      if(dir == north)
      {
        y++;
      }
      else if(dir == east)
      {
        x++;
      }
      else if(dir == south)
      {
        y--;
      }
      else if(dir == west)
      {
        x--;
      }
    }
  }
  if(x==0 && y==0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  char arr[50];
  scanf("%s",arr);
  if(is_circular(arr))
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
