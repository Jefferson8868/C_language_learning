#include <stdio.h>
#include <string.h>


/*
  结构体
  复杂对象
  名字+身高+年龄+身份证号码...

  
  
  

 */


struct Book
{
  char name[20]; // C语言程序设计
  short price; // 55
  
  
};


int main()
{
  
  struct Book book = {"C语言程序设计", 55};
  printf("书名 = %s \n", book.name);
  printf("价格 = %d \n", book.price);
  book.price = 15;
  printf("新价格 = %d \n", book.price);
  
  struct Book* pointer = &book;
  printf("书名 = %s \n", (*pointer).name);
  printf("价格 = %d \n", (*pointer).price);

  printf("书名 = %s \n", pointer->name);
  printf("价格 = %d \n", pointer->price);
  
  
  /* ********************************  */

  strcpy(book.name, "C++");
  // string copy -- 字符串拷贝 --库函数
  // --> 库函数
  printf("%s \n", book.name);
  
  return 0;
}
