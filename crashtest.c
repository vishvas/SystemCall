#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/sched.h>
#include<linux/syscalls.h>
#include<linux/slab.h>
#include<asm/unistd.h>
#include<linux/vmalloc.h>

typedef struct N{
	int *p;
}n;

asmlinkage long sys_foo_divzero(void){
printk("Divide by zero - begin\n");
	int x=50;
	int y=0;
	int z=x/y;
printk("Divided by zero - end\n");
return z;
}

asmlinkage long sys_foo_nullptr(void){
printk("dereferencing null pointer - start\n");
	int a,b,c,d;
	int *z;
	d=10;
	a=20;
	z=&a;
	b=*z;
	z=NULL;
	c=*z;
printk("dereferencing null pointer - end\n");
return c;
}
asmlinkage long sys_foo_userfn(void){
//printf("User function printf\n");
return 99;
}

asmlinkage long wrong_value_return(int *p){
	n* _n=(n*)vmalloc(sizeof(n)*10);
	if(copy_to_user(p,_n,sizeof(p))>0){
		printk("Failed to copy into user space");
		return -EFAULT;
	}
	return 1;  
}
asmlinkage void sys_foo_rec_crash(void){
	panic_on_oops=1;	
	while(1){
		int* ptr = (int*)vmalloc(sizeof(int)*4000000);
		sys_foo_rec_crash();
	}
}
/*
asmlinkage void sys_foo_rec_crash(void){
		
	while(1){
		int* ptr = (int*)kmalloc(sizeof(int)*4000000,GFP_KERNEL);
		sys_foo_rec_crash();
	}
}

asmlinkage void sys_foo_rec_crash(void){
		
	while(1){
		int* ptr = (int*)kmalloc(sizeof(int)*4000000,GFP_ATOMIC);
		sys_foo_rec_crash();
	}
}
*/
