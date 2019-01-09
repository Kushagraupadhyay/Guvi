#include <iostream>
int main()
{
  char x;
  scanf("%c",&x);
  if((x>='a' && x<='z')||(x>='A' && x<='Z'))
  {
    printf("Alphabet");
  }
  else
  printf("No");
  return 0;
}
