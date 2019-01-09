#include<iostream>
int main()
{
  int x;
  scanf("%d",&x);
  if(x<0)
  printf("Invalid");
  else if (x%2!=0)
  printf("Odd");
  else
  printf("Even");
  return 0;
}
