#include <stdio.h>
#include <string.h>

int main()
{
  char a = 'F';
  int f = 123;

  char *pa = &a;
  int *pf = &f;

  printf("a = %c\n", *pa);          //F
  printf("f = %d\n", *pf);          //123
  printf("pa address is %p\n", pa); //000000000065FE0E

  char c = a;
  printf("c = %c\n", c); // F

  *pa = 'G';
  printf("a = %c\n", a);            //G
  printf("a = %c\n", *pa);          //G
  printf("pa address is %p\n", pa); //000000000065FE0E

  // char str[128];
  // printf("请输入域名：");
  // scanf("%s", str);

  // printf("str 的地址是： %p\n", str);
  // printf("str 的地址是： %p\n", &str[0]);

  char arr[] = "Abc";

  char *p = arr;
  printf("*p = %c , *(p+1)= %c , *(p+2)= %c", *p, *(p + 1), *(p + 2));
  //*p = A , *(p+1)= b , *(p+2)= c

  char *str = "I Love JavaScript";
  int i, length;
  length = strlen(str);
  for (i = 0; i < length; i++)
  {
    printf("%c", str[i]);
  }
  //I Love JavaScript
  return 0;
}