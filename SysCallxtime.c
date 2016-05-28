#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/syscalls.h>
#include<linux/time.h>
#include<linux/fcntl.h>
#include<linux/unistd.h>
#include<linux/printk.h>
asmlinkage long my_xtime(struct timespec *current_time)
{if(access_ok(VERIFY_WRITE,current_time,sizeof(struct timespec))){
	struct  timespec xtime;
	xtime=current_kernel_time();
	printk("kernel-tv_sec:%ld\n",xtime.tv_sec);
	printk("kernel-tv_nsec:%ld\n",xtime.tv_nsec);

if(copy_to_user(current_time,&xtime,sizeof(struct timespec))>0)
	{printk("copy failed \n");return -EFAULT;}
}else{return -EFAULT;}
return 0;
}
