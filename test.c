#include<stdio.h>
#define SYS_DIVZERO 327
#define SYS_NULLPTR 328
#define SYS_USERFN 329
#define SYS_FOO_REC_CRASH 330
#define WRONG_VALUE_RETURN 331
int main(void)
{
	int i=0;
	long returnValue=0;
	returnValue=syscall(SYS_DIVZERO);
	returnValue=syscall(SYS_NULLPTR);
	returnValue=syscall(SYS_USERFN);
	returnValue=syscall(WRONG_VALUE_RETURN);
	printf("the syscall return value is:%ld\n",returnValue);
	syscall(SYS_FOO_REC_CRASH);

}
