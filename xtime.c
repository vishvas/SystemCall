#include<stdio.h>
#include<linux/time.h>

#define MY_XTIME 326
int main(void){

struct timespec time;
int  syscallReturn=syscall(MY_XTIME,&time);
printf("System call has returned:%d\n",syscallReturn);
if(syscallReturn < 0){
	printf("Exception: getting system time\n");
}else{
printf("user-tv_sec:%d\n",time.tv_sec);
printf("user-tv_nsec:%d\n",time.tv_nsec);
}
return 0;
}
