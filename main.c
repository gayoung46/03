#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b;
    (float) a/b; 
    
    printf("분자를 입력하세요: ");
    scanf("%d", &a);
    
    printf("분모를 입력하세요 : ");
    scanf("%d", &b);
    
    printf("나누기의 결과는%f 입니다.\n ", (float) a/b); 
     
  system("PAUSE");	
  return 0;
}
