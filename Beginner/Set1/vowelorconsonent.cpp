#include <iostream>
int main()
{
  char x,y;
  scanf("%c",&x);
  if((x>='a' && x<='z')||(x>='A' && x<='Z'))
  {
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
    printf("Vowel");
    else
    printf("Consonent");
  }
  else
  printf("Invalid Input");
  return 0;
}
