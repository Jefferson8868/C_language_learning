#include <stdio.h>

int main()
{
  /* if 语句
    if (expression)
        语句1;
    else
        语句2；

    
    if (expression)
        语句1;
    else if 
        语句2；
    else
        语句3l


   */
  int age;
  printf("Please Enter Your Age: \n");
  scanf("%d", &age);
  
  if (age < 18)
    {
      printf("未成年\n");
      printf("不能谈恋爱，诶，就是玩\n");
      
    }
  else
    printf("成年了\n");
  /* ****************************************** */
  if (age < 18)
    {
      printf("还是未成年\n");
      printf("想谈恋爱？不可能\n");
    }
  else if (age >= 18 && age <= 28)
    printf("已经是青少年了！\n");
  else if (age > 28 && age < 50)
    printf("事业巅峰期--中年人\n");
  else if (age >= 50 && age <90)
    printf("少壮不努力老大徒伤悲，已是老年人了\n");
  else
    printf("老王八在世，不愧是你。\n");
  /* ****************************************** */
  /* wrong format if statement */
  short a = 0;
  short b = 2;
  if (a == 1)
      if (b ==2)
	printf("娃哈哈真好喝\n"); // 就近原则，是 if (b == 2)的else，并非 if (a == 1)
      else
	printf("娃哈哈一点儿都不好\n");
  /* ****************************************** */
  /* right format if statement */
   a = 0;
   b = 2;
  if (a == 1)
    {
      if (b ==2)
	printf("娃哈哈真好喝\n");
    }
  else
    printf("娃哈哈一点儿都不好\n");


  
  int num = 4;
  if (num = 5)			//单等号赋值 --> 不是判断
    {				//suggested: 5 == num
      printf("呵呵真好喝\n"); 
    }

  for(int i = 0; i <= 100; i++)
      (i%2==1) ? printf("%d ", i) : printf("");
  
  /* ****************************************** */
  /* switch 语句 */
  int day = 0;
  printf("What day is today? \n");
  scanf("%d", &day);
  /*
    if (1 == day)
      printf("Monday\n");
    else if (2 == day)
      printf("Tuesday\n");
    ......
   */
  /* case 整形常量** */
  switch(day)
    {
    case 1:
      printf("Monday\n");
      break
    case 2:
      printf("Tuesday\n");
      break
    case 3:
      printf("Wednesday\n");
      break
    case 4:
      printf("Thursday\n");
      break
    case 5:
      printf("Friday\n");
      break
    case 6:
      printf("Saturday\n");
      break
    case 7:
      printf("Sunday\n");
      break
    }
  /* simplier version */
  switch(day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("工作日\n");
      break
    case 6:
    case 7:
      printf("休息日\n");
      break  // --> for future editing
    default:
      printf("你活在周几？？？\n");
      break

	  
    }
  
  
  
  
  return 0;
}
