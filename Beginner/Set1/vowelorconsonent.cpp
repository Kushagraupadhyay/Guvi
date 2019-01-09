#include <iostream>
int main()
{
  char x,y;
  scanf("%c",&x);
  y=tolower(x);
  if (isdigit(y)==true)
  printf("Invalid Input");
  else if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
  printf("Vowel");
  else if (y>='a'||y<='z')
  printf("Consonent");
  else
  printf("Invalid Input");
  return 0;
}
