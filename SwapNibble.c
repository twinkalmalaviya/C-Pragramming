	
#include<stdio.h>
 
int main()
{
  int num =9;
  printf("before nibble swap=%d\n",num);
  /*logic for swaping nibble */
  printf("after nibble swap =%d\n",
  ( (num & 0x000F)<<8 | (num & 0x00F0) )
  |(num & 0x0F00)>>8 | (num & 0xF000));
}
