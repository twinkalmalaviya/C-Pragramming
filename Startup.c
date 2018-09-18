	
#include<stdio.h>
 
/* Apply the constructor attribute to StartupFunction() so that it is executed before main() */
void StartupFunction(void) __attribute__ ((constructor));
/* Apply the destructor attribute to CleanupFunction() so that it is executed after main() */
void CleanupFunction(void) __attribute__ ((destructor));
/* implementation of StartupFunction*/
void StartupFunction(void)
{
    printf ("startup code before main()\n");
}
/* implementation of CleanupFunctiom */
void CleanupFunction(void)
{
    printf ("cleanup code after main()\n");
}
 
int main (void)
{
    printf ("hello twnkal\n");
    return 0;
}
