#include<iostream>
int main()
{
  int n,nod=0;
  scanf("%d",&n);
  while(n!=0)
  {
    nod+=1;
    n=n/10;
  }
  printf("%d",nod);
}
