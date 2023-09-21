#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  char c;
  printf("input a character :");
  scanf("%c", &c);
  
  printf("The next character of %c (%d) is %c (%d)\n", c, c, c+1, c+1);
  
   system("PAUSE");	

  return 0;
}
