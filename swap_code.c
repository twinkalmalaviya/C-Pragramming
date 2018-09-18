#include <stdio.h>

int main(void) {
  int num1=5,num2=9;
  printf("number before swap\n num1= %d,num2=%d\n",num1,num2);
/* swap two number wihtout temp */
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("number after swap\n num1= %d,num2=%d\n",num1,num2);

}
