#include <stdio.h>

int main(void) {
  int num1=0,num2=9;
  printf("number before swap\nnum1= %d,num2=%d\n",num1,num2);
  /*method one */
/* swap two number wihtout temp */
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("number after swap\nnum1= %d,num2=%d\n",num1,num2);
  /*method two */
  num1= num1+num2-(num2=num1);
    printf("number after swap\nnum1= %d,num2=%d\n",num1,num2);

}
