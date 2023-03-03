#include <stdio.h>

int main()
{
  /* while 循环 */
  if (1)
    printf("真的香\n");
  /* while(1) // 死循环 */
  /*   printf("真的香\n");  */
  int i = 1;
  while(i <= 10)
    {
      if (5 == i)
	break; // break/continue
      printf("%d ", i);
      i++;
    }

  
  int ch = 0;
  while ((ch=getchar()) != EOF)
    putchar(ch);
  
  
  return 0;
}
