	
#include<stdio.h>
/*function to clear given number of bit*/
 int Clear_bit(int n,int number_of_b)
 {
   if(number_of_b)
   return(n & (~(1<<(number_of_b-1))));
   else
   return(n);
 }
int main()
{
  int num =1,number_of_bit=1;
  printf("befor bit clear=%d\n",num);
  printf("after bit clear=%d\n",Clear_bit(num,number_of_bit));
 
}
