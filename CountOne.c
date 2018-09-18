#include <stdio.h>
/* function to count number of one in given number */
int count_number_of_one(int n)
{
  int count=0;
  while(n)
  {
   count+=n&1;
   n<<1;
  }
  return count;
}
int main(void) {
 int num= 19;
 printf("number of 1 in num =%d\n",count_number_of_one(num));
 return 0;
}
