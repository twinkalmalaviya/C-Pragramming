	
#include<stdio.h>
 
/* Apply the constructor attribute to StartupFunction() so that it is executed before main() */
void StartupFun(void) __attribute__ ((constructor));
/* Apply the destructor attribute to CleanupFunction() so that it is executed after main() */
void CleanupFun(void) __attribute__ ((destructor));
/* implementation of StartupFunction*/
void StartupFun(void)
{
    printf ("startup code\n");
}
/* implementation of CleanupFunctiom */
void CleanupFun(void)
{
    printf ("startup code\n");
}
 
int main (void)
{
    printf ("hello twnkal\n");
    return 0;
}
