#include<iostream>
int main()
{
  int a,b,c,largest;
  scanf("%d%d%d",&a,&b,&c); 
  largest=a;
  if(b>largest)
  {
    largest=b;
  }
  if(c>largest)
  {
    largest=c;
  }
  printf("%d",largest);
  return 0;
}
